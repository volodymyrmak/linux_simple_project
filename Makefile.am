AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = mathcalcs
mathcalcs_SOURCES = main.c math_lib.c math_lib.h

clean-all: clean uninstall distclean
	rm -f aclocal.m4 configure Makefile.in mathcalcs-1.0.tar.gz
	rm -rf autom4te.cache/ .deps/
	rm -f compile depcomp install-sh missing

.PHONY: clean-all
