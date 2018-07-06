#	$NetBSD$

.include <bsd.init.mk>

.PATH: ${DIST}/samples/hook

SUBDIR= child-down.d child-up.d ikesa-up.d

GENFILES= ikesa-up ikesa-down ikesa-rekey child-up child-down child-rekey \
    migration ph1-up ph1-down

FILESDIR=/usr/share/examples/racoon2/hook
FILESBUILD=yes

FILES= functions ${GENFILES}

CLEANFILES+= ${GENFILES}

.include <bsd.files.mk>
.include <bsd.subdir.mk>
