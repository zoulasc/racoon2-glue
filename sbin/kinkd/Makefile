# $NetBSD$

.include <bsd.init.mk>

KINKD=${DIST}/kinkd
.PATH: ${KINKD}

PROG = kinkd
CPPFLAGS += -I${.CURDIR} -I${KINKD} -I${DIST}/lib -DHAVE_CONFIG_H

CPPFLAGS+= \
-DHAVE_GETPROGNAME=1 \
-DHAVE_GETTIMEOFDAY=1 \
-DHAVE_KRB5_GET_KDC_SEC_OFFSET=1 \
-DHAVE_KRB5_GET_MAX_TIME_SKEW=1 \
-DHAVE_KRB5_H=1 \
-DHAVE_KRB5_KRB5_H=1 \
-DHAVE_LIBASN1=1 \
-DHAVE_LIBCOM_ERR=1 \
-DHAVE_LIBCRYPT=1 \
-DHAVE_LIBCRYPTO=1 \
-DHAVE_LIBKRB5=1 \
-DHAVE_LIBKRB5=1 \
-DHAVE_LIBRESOLV=1 \
-DHAVE_LIBROKEN=1 \
-DHAVE_MIT_COMPAT_KRB5_FREE_TICKET=1 \
-DHAVE_NETINET6_IPSEC_H=1 \
-DHAVE_NETIPSEC_IPSEC_H=1 \
-DHAVE_NET_PFKEYV2_H=1 \
-DHAVE_RFC3962_AES=1 \
-DHAVE_SA_LEN=1 \
-DHAVE_SELECT=1 \
-DHAVE_SOCKET=1 \
-DHAVE_STDARG_H=1 \
-DHAVE_STRDUP=1 \
-DHAVE_STRERROR=1 \
-DHAVE_STRSTR=1 \
-DHAVE_SYS_QUEUE_H=1 \
-DHAVE_SYS_TIME_H=1 \
-DHAVE_UNISTD_H=1 \
-DRETSIGTYPE=void \
-DSTDC_HEADERS=1 \
-DTIME_WITH_SYS_TIME=1 \
-DWITH_PLOG=1 \
-DRACOON2_CONFIG_DIR=\"/etc/racoon2\"

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

.include <bsd.prog.mk>
