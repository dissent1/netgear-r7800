cmd_sysklogd/lib.a := rm -f sysklogd/lib.a; arm-openwrt-linux-uclibcgnueabi-ar  rcs sysklogd/lib.a sysklogd/klogd.o sysklogd/logger.o sysklogd/logread.o sysklogd/syslogd.o
