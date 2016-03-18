cmd_lib/bcd.o := arm-openwrt-linux-uclibcgnueabi-gcc -Wp,-MD,lib/.bcd.o.d  -nostdinc -isystem /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/include -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include -Iarch/arm/include/generated -Iinclude  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include -include /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/kconfig.h  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/lib -Ilib -D__KERNEL__ -mlittle-endian   -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-reorder-blocks -fno-tree-ch -fno-caller-saves -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bcd)"  -D"KBUILD_MODNAME=KBUILD_STR(bcd)" -c -o lib/bcd.o /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/lib/bcd.c

source_lib/bcd.o := /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/lib/bcd.c

deps_lib/bcd.o := \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/bcd.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/compiler-gcc4.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/export.h \
    $(wildcard include/config/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \

lib/bcd.o: $(deps_lib/bcd.o)

$(deps_lib/bcd.o):
