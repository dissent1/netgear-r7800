cmd_kernel/bounds.s := arm-openwrt-linux-uclibcgnueabi-gcc -Wp,-MD,kernel/.bounds.s.d  -nostdinc -isystem /home/projects/R7800-V1.0.0.40_gpl_src/staging_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/lib/gcc/arm-openwrt-linux-uclibcgnueabi/4.6.3/include -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include -Iarch/arm/include/generated -Iinclude  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include -include /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/kconfig.h  -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/. -I. -D__KERNEL__ -mlittle-endian   -I/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -O2 -fno-reorder-blocks -fno-tree-ch -fno-caller-saves -marm -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -mabi=aapcs-linux -mno-thumb-interwork -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bounds)"  -D"KBUILD_MODNAME=KBUILD_STR(bounds)" -fverbose-asm -S -o kernel/bounds.s /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/kernel/bounds.c

source_kernel/bounds.s := /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/kernel/bounds.c

deps_kernel/bounds.s := \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/s390.h) \
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
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/posix_types.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/stddef.h \
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
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/posix_types.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/asm-generic/posix_types.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/linkage.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/arch/arm/include/asm/linkage.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
    $(wildcard include/config/smp.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/cgroup/mem/res/ctlr.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/have/memblock/node.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/kbuild.h \
  /home/projects/R7800-V1.0.0.40_gpl_src/build_dir/linux-ipq806x/linux-3.4.103/sourcecode/include/linux/page_cgroup.h \
    $(wildcard include/config/cgroup/mem/res/ctlr/swap.h) \

kernel/bounds.s: $(deps_kernel/bounds.s)

$(deps_kernel/bounds.s):
