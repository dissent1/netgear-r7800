/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/arm.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_j (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (
#line 73 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_arch_thumb2)) && ((GET_CODE (op) == HIGH) || ((GET_CODE (op) == CONST_INT) && (
#line 76 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
((ival & 0xffff0000) == 0))));
}
static inline bool
satisfies_constraint_Pj (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 81 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 82 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
((ival & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_PJ (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 87 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 88 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(((-ival) & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 105 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 112 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 120 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 127 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 136 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 143 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 149 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0)));
}
static inline bool
satisfies_constraint_Pa (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 155 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 161 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pc (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 167 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275));
}
static inline bool
satisfies_constraint_Pd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 173 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 0 && ival <= 7));
}
static inline bool
satisfies_constraint_Ps (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 178 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255));
}
static inline bool
satisfies_constraint_Pt (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 183 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7));
}
static inline bool
satisfies_constraint_Pu (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 188 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8));
}
static inline bool
satisfies_constraint_Pv (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 193 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0));
}
static inline bool
satisfies_constraint_Pw (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 198 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1));
}
static inline bool
satisfies_constraint_Px (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 203 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1));
}
static inline bool
satisfies_constraint_Py (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 208 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 213 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_H (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 218 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && neg_const_double_rtx_ok_for_fpa (op)));
}
static inline bool
satisfies_constraint_Dz (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 224 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_NEON && op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Da (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 231 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 2);
}
static inline bool
satisfies_constraint_Db (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 238 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 3);
}
static inline bool
satisfies_constraint_Dc (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 246 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 4
		   && !(optimize_size || arm_ld_sched));
}
static inline bool
satisfies_constraint_Di (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 254 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_by_immediates (op));
}
static inline bool
satisfies_constraint_Dn (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 261 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_mov_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dl (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 269 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_DL (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 277 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_inv_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dv (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 285 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dy (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 292 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP_DOUBLE && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Ut (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 299 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_struct_mem_operand (op)));
}
static inline bool
satisfies_constraint_Uv (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 305 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, FALSE)));
}
static inline bool
satisfies_constraint_Uy (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 311 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, TRUE)));
}
static inline bool
satisfies_constraint_Un (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 318 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 0)));
}
static inline bool
satisfies_constraint_Um (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 325 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2)));
}
static inline bool
satisfies_constraint_Us (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 332 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 1)));
}
static inline bool
satisfies_constraint_Uq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 338 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_ARM
		   && arm_legitimate_address_outer_p (GET_MODE (op), XEXP (op, 0),
						      SIGN_EXTEND, 0)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 346 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(REG_P (XEXP (op, 0))));
}
static inline bool
satisfies_constraint_Uu (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 352 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)));
}
static inline bool
satisfies_constraint_Uw (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 364 "/home/projects/R7800-V1.0.0.40_gpl_src/build_dir/toolchain-arm_v7-a_gcc-4.6-linaro_uClibc-0.9.33.2_eabi/gcc-linaro-4.6-2012.02/gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)
		   && GET_CODE (XEXP (op, 0)) != POST_INC));
}
#endif /* tm-constrs.h */
