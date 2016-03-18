cmd_arch/arm/vfp/vfphw.o := arm-openwrt-linux-uclibcgnueabi-gcc -Wp,-MD,arch/arm/vfp/.vfphw.o.d  -nostdinc -isystem /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/include -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include -Iarch/arm/include/generated -Iinclude  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include -include /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -Wa,-mfpu=softvfp+vfp -mfloat-abi=soft   -c -o arch/arm/vfp/vfphw.o /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/vfp/vfphw.S

source_arch/arm/vfp/vfphw.o := /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/vfp/vfphw.S

deps_arch/arm/vfp/vfphw.o := \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/arch/msm/krait.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/vfpv3.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/iwmmxt.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/vfpmacros.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/hwcap.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/vfp.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/vfp/../kernel/entry-header.S \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/alignment/trap.h) \
    $(wildcard include/config/cpu/v6.h) \
    $(wildcard include/config/cpu/32v6k.h) \
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
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/linkage.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/linkage.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/arm/include/generated/asm/errno.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/asm-generic/errno.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/asm-generic/errno-base.h \

arch/arm/vfp/vfphw.o: $(deps_arch/arm/vfp/vfphw.o)

$(deps_arch/arm/vfp/vfphw.o):
