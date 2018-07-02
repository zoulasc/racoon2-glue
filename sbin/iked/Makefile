# $NetBSD$

.include <bsd.init.mk>

IKEV1=${DIST}/iked/ikev1
IKEV2=${DIST}/iked/
.PATH: ${IKEV1} ${IKEV2}

PROG = iked
CPPFLAGS += -I${.CURDIR} -I${IKEV1} -I${IKEV2} -I${DIST}/lib -DHAVE_CONFIG_H

IKEV1_SRC= \
algorithm.c \
genlist.c \
handler.c \
ikev1.c \
ipsec_doi.c \
isakmp_ident.c \
isakmp_inf.c \
isakmp_quick.c \
oakley.c \
pfkey.c \
proposal.c \
strnames.c \
vendorid.c

IKEV1_NATT_SRC= \
ikev1_natt.c

IKEV2_SRC= \
ikev2.c \
ikev2_auth.c \
ikev2_child.c \
ikev2_config.c \
ikev2_cookie.c \
ikev2_notify.c \
ikev2_packet.c \
ikev2_payload.c \
ikev2_proposal.c \
ikev2_rekey.c

IKEV2_NATT_SRC= \
nattraversal.c

SRCS = \
$(IKEV1_NATT_SRC) \
$(IKEV1_SRC) \
$(IKEV2_NATT_SRC) \
$(IKEV2_SRC) \
authenticator.c \
crypto_openssl.c \
dh.c \
encryptor.c \
ike_conf.c \
ike_pfkey.c \
ike_sa.c \
ike_spmif.c \
isakmp.c \
keyed_hash.c \
main.c \
ratelimit.c \
rtsock.c \
schedule.c \
script.c \
sockmisc.c \
str2val.c

PROGDPLIBS+=	racoon ${.CURDIR}/../../lib
PROGDPLIBS+=	crypto ${NETBSDSRCDIR}/crypto/external/bsd/${EXTERNAL_OPENSSL_SUBDIR}/lib/libcrypto
LDADD+=	-lpcap
DPADD+= ${LIBPCAP}

MAN = iked.8

iked.8: iked.8.in __subst
CLEANFILES+=iked.8

.include <bsd.prog.mk>

