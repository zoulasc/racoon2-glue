#	$NetBSD$

.include <bsd.init.mk>

.PATH: ${DIST}/samples

GENFILES= racoon2.conf vals.conf init.d-iked init.d-kinkd init.d-spmd \
    rc.d-iked rc.d-kinkd rc.d-racoon2 rc.d-spmd ikesa-up ikesa-down \
    ikesa-rekey child-up child-down child-rekey migration ph1-up ph1-down

FILESDIR=/usr/share/examples/racoon2

RCFILES= \
rc.d-iked \
rc.d-kinkd \
rc.d-racoon2 \
rc.d-spmd

.for i in ${RCFILES}
FILESDIR_${i}=${FILESDIR}/rc.d/
FILESNAME_${i}:=${i:S/rc.d-//}
.endfor

CONFFILES= \
default.conf \
local-test.conf \
racoon2.conf \
transport_ike.conf \
transport_kink.conf \
tunnel_ike.conf \
tunnel_ike_natt.conf \
tunnel_kink.conf \
vals.conf

HOOKFILES= \
functions \
ikesa-up \
ikesa-down \
ikesa-rekey \
child-up \
child-down \
child-rekey \
migration \
ph1-up \
ph1-down

.for i in ${HOOKFILES}
FILESDIR_${i}:=${FILESDIR}/hook
.endfor

ZEROFILES= \
00ikesaup_sample \
00childup_sample 

.for i in ${ZEROFILES}
FILESDIR_${i}:=${FILESDIR}/hook/${i:S/00//:S/up_sample/-up.d/}
FILESNAME_${i}:=${i:S/_sample//}
.endfor

.for i in ${GENFILES}
${i}: ${i}.in __subst
.endfor

FILES=${CONFFILES} ${HOOKFILES} ${ZEROFILES} ${RCFILES}

CLEANFILES+= ${GENFILES}

.include <bsd.files.mk>
