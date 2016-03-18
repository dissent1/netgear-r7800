cmd_arch/arm/mach-msm/headsmp.o := arm-openwrt-linux-uclibcgnueabi-gcc -Wp,-MD,arch/arm/mach-msm/.headsmp.o.d  -nostdinc -isystem /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/include -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include -Iarch/arm/include/generated -Iinclude  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include -include /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float   -c -o arch/arm/mach-msm/headsmp.o /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/mach-msm/headsmp.S

source_arch/arm/mach-msm/headsmp.o := /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/mach-msm/headsmp.S

deps_arch/arm/mach-msm/headsmp.o := \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/linkage.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/linkage.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/types.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/asm-generic/bitsperlong.h \

arch/arm/mach-msm/headsmp.o: $(deps_arch/arm/mach-msm/headsmp.o)

$(deps_arch/arm/mach-msm/headsmp.o):
