# $NetBSD$

.include <bsd.init.mk>

SPMD=${DIST}/spmd
.PATH: ${SPMD}

PROG = spmdctl
CPPFLAGS += -I${.CURDIR}/../spmd -I${SPMD} -I${DIST}/lib -DHAVE_CONFIG_H

CPPFLAGS+= \

SRCS = \
spmdctl.c

MAN=spmdctl.8

PROGDPLIBS+=	racoon ${.CURDIR}/../../lib

LDADD+= -lcrypto
DPADD+= ${LIBCRYPTO}

.include <bsd.prog.mk>
