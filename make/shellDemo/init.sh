#!/bin/bash
# A simple Hello World demo of the GNU build tools.
# Adopted by Wayne Pollock, Tampa Florida USA,
# from the tutorial "Learning the GNU development tools"
# originally written by Eleftherios Gkioulekas, and currently
# (2/2005) maintained by Marcelo Roberto Jimenez.  This
# tutorial can be found at:
#    http://autotoolset.sourceforge.net/tutorial.html

# CREATE THE PROJECT DIRECTORIES:

cd ~
mkdir hello-1.0
cd hello-1.0
mkdir src doc

# CREATE THE C PROGRAM SOURCE CODE:

cat > src/hello.c <<EOF
/* Hello World program.
 * Written 2/2005 by Ima Koder, Tampa Florida USA.
 */

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>

int main ( void )
{
    printf( "Hey there, world!\n" );
    return 0;
}
EOF

# CREATE MAKEFILE.AM (for Automake) FILES (one per directory):

cat > Makefile.am <<EOF
EXTRA_DIST = configure doc/hello.man
SUBDIRS = doc src
EOF

cat > src/Makefile.am <<EOF
bin_PROGRAMS = hello
hello_SOURCES = hello.c
EOF

cat > doc/Makefile.am <<EOF
man1_MANS = hello.man
EOF

# CREATE THE MAN PAGE:

cat > doc/hello.man <<EOF
.\" This is a man page for the hello command.  It is intended to
.\" be a model for writting man pages.
.
.\" Written by Ima Koder, Tampa Florida USA, 3/2005.
.TH HELLO 1 "3/27/2005" "(C) IK ShellScript Co." "Ima Koder"
.
.SH NAME
hello \- Display a friendly greeting
.
.SH SYNOPSIS
.B hello
.
.SH DESCRIPTION
The
.B hello
command simply displays a short greeting to the world.
.
.SH AUTHOR
Ima Koder <hello-maintainer@fake.org
.
.SH SEE ALSO
greet(1)
EOF

# CREATE THE CONFIGURE.AC FILE (for autoconf):

cat > configure.ac <<EOF
AC_INIT([hello world program], [1.0], \
      [Ima Koder <hello-maintainer@fake.org>], [hello])
AC_CONFIG_SRCDIR([src/hello.c])
AC_CONFIG_HEADER([config.h])
AC_CHECK_HEADER([stdio.h])
AC_REVISION([$Revision: 1.0 $])
AM_INIT_AUTOMAKE
AC_PROG_CC
AC_PROG_INSTALL
AC_CONFIG_FILES([Makefile doc/Makefile src/Makefile])
AC_OUTPUT
EOF

# CREATE SOME ADDITIONAL TEXT FILES TO BE INCLUDED IN THE DISTRIBUTION:

cat > AUTHORS <<EOF
[ Sample AUTHORS file as suggested by the "Learning the GNU
  development tools", written originallly by Eleftherios
  Gkioulekas, and later maintained by  Marcelo Roberto Jimenez
  This tutorial can be found at:
  http://autotoolset.sourceforge.net/tutorial.html
]

Authors of hello

The following contributions warranted legal paper exchanges 
with the Free Software Foundation.  Also see files ChangeLog
and THANKS.

Ima Koder <hello-maintainer@fake.org>
    entire files  -> hello.c
    modifications -> all

Kode Vicious <kvivious@some.fake.place.org>
    modifications-> hello.c (specific changes here)
EOF

cat > THANKS <<EOF
[ This is a fictious sample THANKS file ]
hello THANKS file

This hello package was originally written by Ima Koder.
Many people further contributed to hello by reporting problems,
suggesting various improvements or submitting actual code.
Here is a list of these people.  Please help me keep it
complete and accurate by reporting any additions and
corrections to the current maintainer at:

    hello-maintainer@fake.org

 My apologies to anyone I've inadverntently overlooked!

Contributors:
    Kode Vicious
    The Shell Answer Man
    Nathan Detroit
EOF

cat > README <<EOF
This package is designed as a sample GNU build, to
learn GNU auto* tools and procedures.  It is
adapted from the "Learning the GNU development tools",
written by Eleftherios Gkioulekas.  This tutorial can
be found at:
  http://autotoolset.sourceforge.net/tutorial.html

The README file contains the information an experienced
developer needs to know about the package in general
and any special steps on how to build and/or configure it.
(New developers should read the standard INSTALL file,
and run "./configure --help" to see which options are
available.)

This package produces a simple hello world program.
You can build it the usual way:
    ./configure
    make
    make install
(It is suggested you use the "--prefix" option to
configure to install in your home directory, like this:
    ./configure --prefix=$HOME

-Ima Koder, anytown USA.  2/11/2005
EOF

touch NEWS ChangeLog

# BUILD THE PACKAGE:

aclocal
autoconf
autoheader
automake -a

# TEST THE PACKAGE (BUILD THE PROGRAM AND MAN PAGE) in $HOME:

./configure --prefix=$HOME
make
make check
make dvi
make install  # Don't need to be root to install in one's $HOME

# CHECK DISTRIBUTION AND BUILD THE TAR-BALL OF THE PACKAGE:

make distcheck
make dist
# mv hello-1.0.tar.gz ~/hello-1.0.tgz

# CLEAN UP (not done here, to allow us a chance to check stuff):

make uninstall
make distclean