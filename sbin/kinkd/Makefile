# $NetBSD$

.include <bsd.init.mk>

KINKD=${DIST}/kinkd
.PATH: ${KINKD}

PROG = kinkd
CPPFLAGS += -I${.CURDIR} -I${KINKD} -I${DIST}/lib -DHAVE_CONFIG_H

SRCS= \
algorithm.c \
etchosts.c \
ipsec_doi.c \
kink_fmt.c \
pfkey.c \
sched_select.c \
session.c \
sockmisc.c \
strnames.c \
base.c \
bbkk_common.c \
bbkk_heimdal.c \
crypto_openssl.c \
dpd.c \
handle.c \
isakmp.c \
isakmp_inf.c \
isakmp_quick.c \
kink_conf.c \
kink_crypto.c \
main.c \
oakley.c \
peer.c \
proposal.c \
rct_ipsecdoi.c \
utils.c

MAN=kinkd.8

PROGDPLIBS+=	racoon ${.CURDIR}/../../lib

LDADD+=	-lkrb5 -lasn1 -lroken -lcom_err
DPADD+= ${LIBKRB5} ${LIBASN1} ${LIBROKEN} ${LIBCOM_ERR}
LDADD+= -lcrypto -lcrypt -lresolv
DPADD+= ${LIBCRYPTO} ${LIBCRYPT} ${LIBRESOLV}

kinkd.8: kinkd.8.in __subst
CLEANFILES+=kinkd.8

.include <bsd.prog.mk>
