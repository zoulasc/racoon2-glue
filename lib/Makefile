# $NetBSD: Makefile.in,v 1.35 2007/05/16 11:05:10 fukumoto Exp $

LIBISPRIVATE=yes

.include <bsd.init.mk>

#DBG=-g
YFLAGS	+=-d
.PATH: ${DIST}/lib
CPPFLAGS+= -I${.CURDIR} -I${DIST}/lib -DHAVE_CONFIG_H #-DCF_DEBUG

LIB=	racoon
SRCS= \
addresspool.c \
cfparse.y \
cfsetup.c \
cftoken.l \
if_pfkeyv2.c \
if_spmd.c \
pidfile.c \
plog.c \
rbuf.c \
rc_net.c \
rc_pcap.c \
rc_str.c \
rc_type.c \
safefile.c \
version.c \
vmbuf.c

.include <bsd.lib.mk>
