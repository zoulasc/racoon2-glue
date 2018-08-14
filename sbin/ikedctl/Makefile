# $NetBSD$

.include <bsd.init.mk>

IKED=${DIST}/iked
.PATH: ${IKED}

PROG = ikedctl
CPPFLAGS += -I${.CURDIR} -I${IKED} -I${.CURDIR}/../iked -I${DIST}/lib
CPPFLAGS += -DHAVE_CONFIG_H
#DBG=-g
#CPPFLAGS += -DDEBUG -DDEBUG_TRACE

SRCS = ikedctl.c

#PROGDPLIBS+=	racoon ${.CURDIR}/../../lib
#PROGDPLIBS+=	crypto ${NETBSDSRCDIR}/crypto/external/bsd/${EXTERNAL_OPENSSL_SUBDIR}/lib/libcrypto
#LDADD+=	-lpcap
#DPADD+= ${LIBPCAP}

MAN = ikedctl.8

.include <bsd.prog.mk>

