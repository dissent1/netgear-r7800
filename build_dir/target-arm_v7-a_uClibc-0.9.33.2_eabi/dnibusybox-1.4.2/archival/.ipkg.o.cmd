cmd_archival/ipkg.o := arm-openwrt-linux-uclibcgnueabi-gcc -Wp,-MD,archival/.ipkg.o.d   -std=gnu99 -Iinclude -Ilibbb  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/target-arm_v7-a_uClibc-0.9.33.2_eabi/dnibusybox-1.4.2/libbb -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D"BB_VER=KBUILD_STR(1.4.2)" -DBB_BT=AUTOCONF_TIMESTAMP  -Wall -Wstrict-prototypes -Wshadow -Wundef -funsigned-char -fno-builtin-strlen -finline-limit=0 -static-libgcc -Os -falign-functions=1 -falign-jumps=1 -falign-loops=1 -fomit-frame-pointer -ffunction-sections -fdata-sections -Wdeclaration-after-statement -Wno-pointer-sign -Os -pipe -march=armv7-a -mfpu=vfpv3-d16 -mfloat-abi=softfp -fhonour-copts -Wno-error=unused-but-set-variable -msoft-float   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ipkg)"  -D"KBUILD_MODNAME=KBUILD_STR(ipkg)" -c -o archival/ipkg.o archival/ipkg.c

deps_archival/ipkg.o := \
  archival/ipkg.c \
  archival/libipkg/libipkg.h \

archival/ipkg.o: $(deps_archival/ipkg.o)

$(deps_archival/ipkg.o):
