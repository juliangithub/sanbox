

// #include <stdio.h>

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


#ifdef TEST_ERROR
#error "TEST_ERROR has been defined" 
#else
#endif


#define PSQR(x) printf("the square value of " #x " is %d \n", ((x)*(x)))
#define XNUM(n) x##n
#define PRINT_XN(n) printf("the value of " #n " is \n", x##n)
int main (int argc, char **argv)
{

	int XNUM(1) = 1010;
	int XNUM(22) = 2020;
	PRINT_XN(1);
	PRINT_XN(22);
	int a = 2;
	PSQR(a);
	printf("%s\n", compile_opts);


}
