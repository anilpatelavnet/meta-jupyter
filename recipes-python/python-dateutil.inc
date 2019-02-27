SUMMARY = "Extensions to the standard Python datetime module"
LICENSE = "BSD | Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e3155c7bdc71f66e02678411d2abf996"

BBCLASSEXTEND = "native"
PYPI_PACKAGE = "python-dateutil"

SRC_URI[sha256sum] = "88f9287c0174266bb0d8cedd395cfba9c58e87e5ad86b2ce58859bc11be3cf02"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-datetime \
	${PYTHON_PN}-logging \
	${PYTHON_PN}-json \
	${PYTHON_PN}-shell \
	${PYTHON_PN}-six \
	"