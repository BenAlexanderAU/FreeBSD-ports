# $FreeBSD$

PORTNAME=	ggrepel
DISTVERSION=	0.8.2
PORTREVISION=	1
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	uzsolt@uzsolt.hu
COMMENT=	Help to avoid overlapping text labels of ggplot2

LICENSE=	GPLv3

USES=		cran:auto-plist,compiles

CRAN_DEPENDS=	R-cran-ggplot2>0:graphics/R-cran-ggplot2 \
		R-cran-Rcpp>0:devel/R-cran-Rcpp \
		R-cran-scales>0:graphics/R-cran-scales
BUILD_DEPENDS+=	${CRAN_DEPENDS}
RUN_DEPENDS+=	${CRAN_DEPENDS}

.include <bsd.port.mk>
