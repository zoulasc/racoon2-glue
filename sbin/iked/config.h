/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* define if IPv6 advanced API is available */
#define ADVAPI 1

/* recent versions of openssl declares argument with 'const' */
#define BPP_const const

/* define to enable NAT Traversal support */
#define ENABLE_NATT 1

/* Define to 1 if you have the `daemon' function. */
#define HAVE_DAEMON 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* define if __func__ macro is available */
#define HAVE_FUNC_MACRO 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getnameinfo' function. */
#define HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `pcap' library (-lpcap). */
/* #undef HAVE_LIBPCAP */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet6/ipsec.h> header file. */
/* #undef HAVE_NETINET6_IPSEC_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netipsec/ipsec.h> header file. */
#define HAVE_NETIPSEC_IPSEC_H 1

/* Define to 1 if you have the <net/pfkeyv2.h> header file. */
#define HAVE_NET_PFKEYV2_H 1

/* Define to 1 if you have the <openssl/aes.h> header file. */
#define HAVE_OPENSSL_AES_H 1

/* Define to 1 if you have the <openssl/evp.h> header file. */
#define HAVE_OPENSSL_EVP_H 1

/* Define to 1 if you have the <openssl/idea.h> header file. */
/* #undef HAVE_OPENSSL_IDEA_H */

/* Define to 1 if you have the <openssl/opensslv.h> header file. */
#define HAVE_OPENSSL_OPENSSLV_H 1

/* Define to 1 if you have the <openssl/pem.h> header file. */
#define HAVE_OPENSSL_PEM_H 1

/* Define to 1 if you have the <openssl/pkcs12.h> header file. */
#define HAVE_OPENSSL_PKCS12_H 1

/* Define to 1 if you have the <openssl/rc5.h> header file. */
/* #undef HAVE_OPENSSL_RC5_H */

/* Define to 1 if you have the <openssl/rsa.h> header file. */
#define HAVE_OPENSSL_RSA_H 1

/* define if openssl has SHA2 support */
#define HAVE_OPENSSL_SHA2 1

/* Define to 1 if you have the <openssl/x509.h> header file. */
#define HAVE_OPENSSL_X509_H 1

/* define if struct sockaddr has sa_len field */
#define HAVE_SA_LEN 1

/* Define to 1 if you have the `setprogname' function. */
#define HAVE_SETPROGNAME 1

/* define if public key encryption is available */
#define HAVE_SIGNING_C 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* path to the pid file */
#define IKED_PID_FILE "/var/run/iked.pid"

/* define to enable IKEv1 protocol support */
#define IKEV1 1

/* define to enable IKEv2 protocol support */
#define IKEV2 1

/* window size of IPsec SA created by IKEv2 */
/* #undef IKEV2_IPSEC_WINDOW_SIZE */

/* define if IPv6 is enabled */
#define INET6 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "racoon2"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "racoon2@mailmain.astron.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "racoon2"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "racoon2 2018-07-09"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "racoon2"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2018-07-09"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "2018-07-09"

/* define to use OpenSSL ENGINE */
#define WITH_OPENSSL_ENGINE 1

/* define optaining CoA from netlink xfrm messages */
/* #undef WITH_PARSECOA */

/* define to listen PF_ROUTE socket */
/* #undef WITH_RTSOCK */

/* define if SHA2 can be used */
#define WITH_SHA2 1

/* define for glibc to use ADVAPI */
/* #undef _GNU_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
