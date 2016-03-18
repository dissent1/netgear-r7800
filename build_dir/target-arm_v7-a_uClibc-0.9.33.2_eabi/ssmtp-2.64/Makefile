# Generated automatically from Makefile.in by configure.


srcdir= .
prefix=/usr
exec_prefix=/usr
libexecdir=/usr/lib
bindir=$(prefix)/sbin
mandir=$(prefix)/man/man8

LN_S=ln -s
CC=arm-openwrt-linux-uclibcgnueabi-gcc

etcdir=/etc
SSMTPCONFDIR=$(etcdir)/ssmtp
# (End of relocation section)

# Configuration files
CONFIGURATION_FILE=$(SSMTPCONFDIR)/ssmtp.conf
REVALIASES_FILE=$(SSMTPCONFDIR)/revaliases

INSTALLED_CONFIGURATION_FILE=$(CONFIGURATION_FILE)
INSTALLED_REVALIASES_FILE=$(REVALIASES_FILE)

# Programs
GEN_CONFIG=$(srcdir)/generate_config

SRCS=ssmtp.c arpadate.c base64.c xgethostname.c 

OBJS=$(SRCS:.c=.o)

INSTALL=/usr/bin/install -c

EXTRADEFS=\
-DSSMTPCONFDIR=\"$(SSMTPCONFDIR)\" \
-DCONFIGURATION_FILE=\"$(CONFIGURATION_FILE)\" \
-DREVALIASES_FILE=\"$(REVALIASES_FILE)\" \


CFLAGS= -DSTDC_HEADERS=1 -DHAVE_LIMITS_H=1 -DHAVE_STRINGS_H=1 -DHAVE_SYSLOG_H=1 -DHAVE_UNISTD_H=1 -DHAVE_LIBNSL=1 -DRETSIGTYPE=void -DHAVE_VPRINTF=1 -DHAVE_GETHOSTNAME=1 -DHAVE_SOCKET=1 -DHAVE_STRDUP=1 -DHAVE_STRSTR=1 -DREWRITE_DOMAIN=1 -DHAVE_SSL=1  $(EXTRADEFS) -Os -pipe -march=armv7-a -mfpu=vfpv3-d16 -mfloat-abi=softfp -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float -I/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/usr/include -I/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/include -I/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/usr/include -I/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/include -lconfig 

.PHONY: all
all: ssmtp

%.dvi: %.tex
	latex $<

.PHONY: install
install: ssmtp $(GEN_CONFIG)
	$(INSTALL) -d -m 755 $(bindir)
	$(INSTALL) -s -m 755 ssmtp $(bindir)/ssmtp
	$(INSTALL) -d -m 755 $(mandir)
	$(INSTALL) -m 644 $(srcdir)/ssmtp.8 $(mandir)/ssmtp.8
	$(INSTALL) -d -m 755 $(SSMTPCONFDIR)
	$(INSTALL) -m 644 $(srcdir)/revaliases $(INSTALLED_REVALIASES_FILE)
	$(GEN_CONFIG) $(INSTALLED_CONFIGURATION_FILE)


.PHONY: install-sendmail
install-sendmail: install
	$(RM) $(bindir)/sendmail
	$(LN_S) ssmtp $(bindir)/sendmail
	$(INSTALL) -d -m 755 $(libexecdir)
	$(RM) $(libexecdir)/sendmail
	$(LN_S) sendmail /lib/sendmail
	$(RM) $(mandir)/sendmail.8
	$(LN_S) ssmtp.8 $(mandir)/sendmail.8

.PHONY: uninstall
uninstall:
	$(RM) $(bindir)/ssmtp
	$(RM) $(mandir)/ssmtp.8
	$(RM) $(CONFIGURATION_FILE) $(REVALIASES_FILE)
	$(RM) -r $(SSMTPCONFDIR)

.PHONY: uninstall-sendmail
uninstall-sendmail: uninstall
	$(RM)  $(bindir)/sendmail /lib/sendmail
	$(RM)  $(mandir)/sendmail.8

# Binaries:
ssmtp: $(OBJS)
	$(CC) -o ssmtp $(OBJS) -lnsl -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/usr/lib -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/lib -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/usr/lib -L/home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib -lcrypto -lssl -lssl $(CFLAGS)

.PHONY: clean
clean:
	$(RM) ssmtp *.o md5auth/*.o core

.PHONY: distclean
distclean: clean docclean
	$(RM) config.* Makefile

.PHONY: docclean
docclean:
	$(RM) *.dvi *.log *.aux
