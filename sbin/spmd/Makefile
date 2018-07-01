# $NetBSD$

.include <bsd.init.mk>

SPMD=${DIST}/spmd
.PATH: ${SPMD}

PROG = spmd
CPPFLAGS += -I${.CURDIR} -I${SPMD} -I${DIST}/lib -DHAVE_CONFIG_H

SRCS = \
main.c \
dns.c \
udp.c \
query.c \
task.c \
signal.c \
shell.c \
utils.c \
cache.c \
spmd_pfkey.c \
fqdn_query.c

MAN=spmd.8

PROGDPLIBS+=	racoon ${.CURDIR}/../../lib

LDADD+= -lcrypto
DPADD+= ${LIBCRYPTO}

.include <bsd.prog.mk>
