cmd_libbb/makedev.o := arm-openwrt-linux-uclibcgnueabi-gcc -Wp,-MD,libbb/.makedev.o.d   -std=gnu99 -Iinclude -Ilibbb  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/dnibusybox-1.4.2/libbb -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D"BB_VER=KBUILD_STR(1.4.2)" -DBB_BT=AUTOCONF_TIMESTAMP  -Wall -Wstrict-prototypes -Wshadow -Wundef -funsigned-char -fno-builtin-strlen -finline-limit=0 -static-libgcc -Os -falign-functions=1 -falign-jumps=1 -falign-loops=1 -fomit-frame-pointer -ffunction-sections -fdata-sections -Wdeclaration-after-statement -Wno-pointer-sign -Os -pipe -march=armv7-a -mfpu=vfpv3-d16 -mfloat-abi=softfp -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(makedev)"  -D"KBUILD_MODNAME=KBUILD_STR(makedev)" -c -o libbb/makedev.o libbb/makedev.c

deps_libbb/makedev.o := \
  libbb/makedev.c \
  /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/../../../../arm-openwrt-linux-uclibcgnueabi/sys-include/features.h \
    $(wildcard include/config/c99.h) \
    $(wildcard include/config/c95.h) \
    $(wildcard include/config/ix.h) \
    $(wildcard include/config/ix2.h) \
    $(wildcard include/config/ix199309.h) \
    $(wildcard include/config/ix199506.h) \
    $(wildcard include/config/en.h) \
    $(wildcard include/config/en/extended.h) \
    $(wildcard include/config/x98.h) \
    $(wildcard include/config/en2k.h) \
    $(wildcard include/config/en2k8.h) \
    $(wildcard include/config/gefile.h) \
    $(wildcard include/config/gefile64.h) \
    $(wildcard include/config/e/offset64.h) \
    $(wildcard include/config/.h) \
    $(wildcard include/config/d.h) \
    $(wildcard include/config/c.h) \
    $(wildcard include/config/ile.h) \
    $(wildcard include/config/ntrant.h) \
    $(wildcard include/config/tify/level.h) \
    $(wildcard include/config/i.h) \
    $(wildcard include/config/ern/inlines.h) \
    $(wildcard include/config/ix/implicitly.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/../../../../arm-openwrt-linux-uclibcgnueabi/sys-include/bits/uClibc_config.h \
    $(wildcard include/config//.h) \
    $(wildcard include/config///.h) \
    $(wildcard include/config/link//.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/../../../../arm-openwrt-linux-uclibcgnueabi/sys-include/sys/cdefs.h \
    $(wildcard include/config/espaces.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/../../../../arm-openwrt-linux-uclibcgnueabi/sys-include/sys/sysmacros.h \

libbb/makedev.o: $(deps_libbb/makedev.o)

$(deps_libbb/makedev.o):
