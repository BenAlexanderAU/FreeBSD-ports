# Created by: David Barksdale <amatus@gnu.org>
# $FreeBSD$

PORTNAME=	libmicrohttpd
DISTVERSION=	0.9.70
CATEGORIES=	www
MASTER_SITES=	GNU

MAINTAINER=	gaod@hychen.org
COMMENT=	C library for embedding HTTP server functionality

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		cpe libtool pathfix
USE_LDCONFIG=	yes

CPE_VENDOR=	gnu

OPTIONS_DEFINE=	GNUTLS
OPTIONS_DEFAULT=GNUTLS

GNUTLS_LIB_DEPENDS=	libgcrypt.so:security/libgcrypt \
			libgnutls.so:security/gnutls
GNUTLS_CONFIGURE_WITH=	libgcrypt-prefix=${LOCALBASE} gnutls=${LOCALBASE}
GNUTLS_CONFIGURE_ENABLE=https

INFO=		libmicrohttpd libmicrohttpd-tutorial

.include <bsd.port.mk>
