SUBDIRS lib module client deamon
mydaemon: lib/*.c module/*.c daemon/*.c
＄(MAKE) –C lib
＄(MAKE) –C module
＄(MAKE) mydaemon –C daemon
libmylib: lib/*.c client/*.c
＄(MAKE) –C lib
＄(MAKE) libmylib.la –C client
test: lib/*.c client/*.c
＄(MAKE) –C lib
＄(MAKE) test1 –C lib
＄(MAKE) test2 –C lib
＄(MAKE) test3 –C lib
＄(MAKE) test4 –C lib
install-libmylib: client/libmylib.la
＄(mkinstalldirs) ＄(libdir)
＄(LIBTOOL) --mode=install /usr/local/install  -c client/libmylib.la ＄(libdir)/libnewfile.la
install-test: client/*.c
＄(mkinstalldirs) ＄(bindir)
＄(LIBTOOL)  --mode=install /usr/local/install –c client/test1  ＄(bindir)/test1
＄(LIBTOOL)  --mode=install /usr/local/install –c client/test2  ＄(bindir)/test2
＄(LIBTOOL)  --mode=install /usr/local/install –c client/test3  ＄(bindir)/test3
＄(LIBTOOL)  --mode=install /usr/local/install –c client/test4  ＄(bindir)/test4
install-mydaemon daemon/mydaemon
＄(mkinstalldirs) ＄(DESTDIR)＄(libexecdir)
＄(LIBTOOL) --mode=install /usr/bin/install –c daemon/mydaemon ＄(libexecdir)/mydaemon
