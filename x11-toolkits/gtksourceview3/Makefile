# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gtksourceview
PORTVERSION=	3.24.11
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
PKGNAMESUFFIX=	3
DIST_SUBDIR=	gnome3

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Text widget that adds syntax highlighting to the GtkTextView widget

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c11 tar:xz

PORTSCOUT=	limitw:1,even

BUILD_DEPENDS=	vala:lang/vala
LIB_DEPENDS=	libfribidi.so:converters/fribidi

USES+=		gettext gmake gnome libtool pathfix pkgconfig
USE_CSTD=	c11
USE_GNOME=	cairo gdkpixbuf2 gnomeprefix gtk30 intlhack \
		introspection:build libxml2 referencehack
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--enable-compile-warnings=no \
		--enable-glade-catalog=no \
		--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig \
		--enable-introspection
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|tests testsuite||g' \
		${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e 's|--warn-all||g' \
		${WRKSRC}/gtksourceview/Makefile.in

.include <bsd.port.mk>
