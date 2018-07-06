#	$NetBSD$

.include <bsd.init.mk>

.PATH: ${DIST}/samples

SUBDIR=hook rc.d

GENFILES= racoon2.conf vals.conf 
FILESDIR=/usr/share/examples/racoon2
FILESBUILD=yes

FILES= ${GENFILES} \
default.conf \
local-test.conf \
transport_ike.conf \
transport_kink.conf \
tunnel_ike.conf \
tunnel_ike_natt.conf \
tunnel_kink.conf

CLEANFILES+= ${GENFILES}

.include <bsd.files.mk>
.include <bsd.subdir.mk>
