# $NetBSD: Makefile.inc,v 1.2 2018/06/21 11:02:48 kamil Exp $

WARNS=5

.include <bsd.own.mk>

USE_FORT?= yes	# network client/server

DIST:=	${.PARSEDIR}/dist

CPPFLAGS+= -DSYSCONFDIR=\"/etc/racoon2\"

BINDIR=/usr/sbin

.if ${MKINET6} != "no"
CPPFLAGS+= -DINET6
.endif
