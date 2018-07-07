# $NetBSD: Makefile.inc,v 1.2 2018/06/21 11:02:48 kamil Exp $

WARNS=5

.include <bsd.own.mk>

USE_FORT?= yes	# network client/server

DIST:=	${.PARSEDIR}/dist

BINDIR=/usr/sbin
SYSCONFDIR=/etc/racoon2

CPPFLAGS+= -DSYSCONFDIR=\"${SYSCONFDIR}\"
#MKSANITIZER=yes

.if ${MKINET6} != "no"
CPPFLAGS+= -DINET6
.endif

.SUFFIXES: .in

__subst: .USE
	@${_MKTARGET_CREATE}
	@${TOOL_SED} \
	    -e 's%@prefix@%%g' \
	    -e 's%@sbindir@%${BINDIR}%g' \
	    -e 's%@sysconfdir@%${SYSCONFDIR}%g' < ${.ALLSRC} > ${.TARGET}

.in:
	@${_MKTARGET_CREATE}
	@${TOOL_SED} \
	    -e 's%@prefix@%%g' \
	    -e 's%@sbindir@%${BINDIR}%g' \
	    -e 's%@sysconfdir@%${SYSCONFDIR}%g' < ${.ALLSRC} > ${.TARGET}
