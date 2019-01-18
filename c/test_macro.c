

#include <stdio.h>

#define HAVE_IPV6
#define NO_FORK

static char *compile_opts = 
#ifndef HAVE_IPV6
"no-"
#endif
"IPv6 "
#ifndef HAVE_GETOPT_LONG
"no-"
#endif
"GNU-getopt "
#ifdef HAVE_BROKEN_RTC
"no-RTC "
#endif
#ifdef NO_FORK
"no-MMU "
#endif
#ifndef HAVE_DBUS
"no-"
#endif
"DBus "
#ifndef LOCALEDIR
"no-"
#endif
"i18n "
#ifndef HAVE_DHCP
"no-"
#endif
"DHCP "
#if defined(HAVE_DHCP) && !defined(HAVE_SCRIPT)
"no-scripts "
#endif
#ifndef HAVE_TFTP
"no-"
#endif
"TFTP "
#ifndef HAVE_CONNTRACK
"no-"
#endif
"conntrack "
#if !defined(LOCALEDIR) && !defined(HAVE_IDN)
"no-"
#endif 
"IDN";





int main (int argc, char **argv)
{

printf("%s\n", compile_opts);


}
