#
# $Id: Makefile.in,v 1.23 2006/11/28 13:35:37 jpr5 Exp $
#
# Copyright (c) 2006  Jordan Ritter <jpr5@darkridge.com>
#
# Please refer to the LICENSE file for more information.

CC=arm-openwrt-linux-uclibcgnueabi-gcc

CFLAGS=-Os -pipe -march=armv7-a -mfpu=vfpv3-d16 -mfloat-abi=softfp -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float  -DLINUX -DHAVE_CONFIG_H  -D_BSD_SOURCE=1 -D__FAVOR_BSD=1 
INCLUDES=-I. -I/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/usr/include 

LDFLAGS=-L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/usr/lib -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/lib -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/usr/lib -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib -lpcre -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/usr/lib
LIBS=-lpcap  

STRIPFLAG=-s

SRC=ngrep.c 
OBJS=ngrep.o 
TARGET=ngrep
MANPAGE=ngrep.8

prefix      = /usr
exec_prefix = /usr

bindir      = $(prefix)/bin
datadir     = $(prefix)/share
mandir      = $(datadir)/man

BINDIR_INSTALL = $(prefix)/bin
MANDIR_INSTALL = $(mandir)/man8

INSTALL = ./install-sh

REGEX_DIR=
REGEX_OBJS=


all: $(TARGET) 

$(TARGET):  $(OBJS) 
	$(CC) $(CFLAGS) $(LDFLAGS) $(STRIPFLAG) -o $(TARGET) $(OBJS) $(REGEX_OBJS) $(LIBS) 

debug: $(REGEX_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -g -o $(TARGET) $(OBJS) $(REGEX_OBJS) $(LIBS) 

static: $(REGEX_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(STRIPFLAG) -o $(TARGET).static -static $(OBJS) $(REGEX_OBJS) $(LIBS) 

install: $(TARGET)
	$(INSTALL) -c -m 0755 $(TARGET)  $(DESTDIR)/$(BINDIR_INSTALL)/$(TARGET)
	$(INSTALL) -c -m 0644 $(MANPAGE) $(DESTDIR)/$(MANDIR_INSTALL)/$(MANPAGE)

.c.o:	
	$(CC) $(CFLAGS) $(INCLUDES) -g -c $<

clean:
	make -C $(REGEX_DIR) clean
	rm -f *~ $(OBJS) $(REGEX_OBJS) $(TARGET) $(TARGET).static

distclean: clean 
	make -C $(REGEX_DIR) distclean
	rm -f config.status config.cache config.log config.h Makefile 

$(REGEX_OBJS): $(REGEX_OBJS:.o=.c) $(REGEX_DIR)/*.h
	$(MAKE) $(MAKEFLAGS) -C $(REGEX_DIR) $(notdir $(REGEX_OBJS))

$(OBJS): Makefile ngrep.c ngrep.h

tardist:
	@( VERSION=`perl -ne '/VERSION\s+"(.*)"/ && print "$$1\n"' ngrep.h` ; \
	   PKG="ngrep-$$VERSION"                                            ; \
	   TMPDIR="/tmp"                                                    ; \
	   DESTDIR="$$TMPDIR/$$PKG"                                         ; \
	   echo                                                             ; \
	   echo "Building package $$PKG ... "                               ; \
	   echo                                                             ; \
	   sleep 2                                                          ; \
	   rm -rf $$DESTDIR && mkdir $$DESTDIR                             && \
	   make distclean                                                  && \
	   tar cf - . --exclude "CVS" | tar xf - -C $$DESTDIR              && \
	   find $$DESTDIR -name "*~" -o -name ".*#*" | xargs rm -f         && \
	   cd $$TMPDIR && tar jcf $$PKG.tar.bz2 $$PKG                       ; \
           rm -rf $$DESTDIR                                                 ; \
           cd $$TMPDIR && gpg -ba $$PKG.tar.bz2                             ; \
	   echo                                                             ; \
	   ls -l $$TMPDIR/$$PKG.tar.bz2 $$TMPDIR/$$PKG.tar.bz2.asc          ; \
	   echo                                                             ; \
	)
