#ifndef __iop_timer_grp_defs_asm_h
#define __iop_timer_grp_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/io_proc/rtl/iop_timer_grp.r
 *     id:           iop_timer_grp.r,v 1.29 2005/02/16 09:13:27 niklaspa Exp
 *     last modfied: Mon Apr 11 16:08:46 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c -asm --outfile asm/iop_timer_grp_defs_asm.h ../../inst/io_proc/rtl/iop_timer_grp.r
 *      id: $Id: //depot/swdev/LAN/Switch/KSZ/kernels/linux-3.18/arch/cris/include/arch-v32/arch/hwregs/iop/asm/iop_timer_grp_defs_asm.h#3 $
 * Any changes here will be lost.
 *
 * -*- buffer-read-only: t -*-
 */

#ifndef REG_FIELD
#define REG_FIELD( scope, reg, field, value ) \
  REG_FIELD_X_( value, reg_##scope##_##reg##___##field##___lsb )
#define REG_FIELD_X_( value, shift ) ((value) << shift)
#endif

#ifndef REG_STATE
#define REG_STATE( scope, reg, field, symbolic_value ) \
  REG_STATE_X_( regk_##scope##_##symbolic_value, reg_##scope##_##reg##___##field##___lsb )
#define REG_STATE_X_( k, shift ) (k << shift)
#endif

#ifndef REG_MASK
#define REG_MASK( scope, reg, field ) \
  REG_MASK_X_( reg_##scope##_##reg##___##field##___width, reg_##scope##_##reg##___##field##___lsb )
#define REG_MASK_X_( width, lsb ) (((1 << width)-1) << lsb)
#endif

#ifndef REG_LSB
#define REG_LSB( scope, reg, field ) reg_##scope##_##reg##___##field##___lsb
#endif

#ifndef REG_BIT
#define REG_BIT( scope, reg, field ) reg_##scope##_##reg##___##field##___bit
#endif

#ifndef REG_ADDR
#define REG_ADDR( scope, inst, reg ) REG_ADDR_X_(inst, reg_##scope##_##reg##_offset)
#define REG_ADDR_X_( inst, offs ) ((inst) + offs)
#endif

#ifndef REG_ADDR_VECT
#define REG_ADDR_VECT( scope, inst, reg, index ) \
         REG_ADDR_VECT_X_(inst, reg_##scope##_##reg##_offset, index, \
			 STRIDE_##scope##_##reg )
#define REG_ADDR_VECT_X_( inst, offs, index, stride ) \
                          ((inst) + offs + (index) * stride)
#endif

/* Register rw_cfg, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_cfg___clk_src___lsb 0
#define reg_iop_timer_grp_rw_cfg___clk_src___width 1
#define reg_iop_timer_grp_rw_cfg___clk_src___bit 0
#define reg_iop_timer_grp_rw_cfg___trig___lsb 1
#define reg_iop_timer_grp_rw_cfg___trig___width 2
#define reg_iop_timer_grp_rw_cfg___clk_gen_div___lsb 3
#define reg_iop_timer_grp_rw_cfg___clk_gen_div___width 8
#define reg_iop_timer_grp_rw_cfg___clk_div___lsb 11
#define reg_iop_timer_grp_rw_cfg___clk_div___width 8
#define reg_iop_timer_grp_rw_cfg_offset 0

/* Register rw_half_period, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_half_period___quota_lo___lsb 0
#define reg_iop_timer_grp_rw_half_period___quota_lo___width 15
#define reg_iop_timer_grp_rw_half_period___quota_hi___lsb 15
#define reg_iop_timer_grp_rw_half_period___quota_hi___width 15
#define reg_iop_timer_grp_rw_half_period___quota_hi_sel___lsb 30
#define reg_iop_timer_grp_rw_half_period___quota_hi_sel___width 1
#define reg_iop_timer_grp_rw_half_period___quota_hi_sel___bit 30
#define reg_iop_timer_grp_rw_half_period_offset 4

/* Register rw_half_period_len, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_half_period_len_offset 8

#define STRIDE_iop_timer_grp_rw_tmr_cfg 4
/* Register rw_tmr_cfg, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_tmr_cfg___clk_src___lsb 0
#define reg_iop_timer_grp_rw_tmr_cfg___clk_src___width 3
#define reg_iop_timer_grp_rw_tmr_cfg___strb___lsb 3
#define reg_iop_timer_grp_rw_tmr_cfg___strb___width 2
#define reg_iop_timer_grp_rw_tmr_cfg___run_mode___lsb 5
#define reg_iop_timer_grp_rw_tmr_cfg___run_mode___width 2
#define reg_iop_timer_grp_rw_tmr_cfg___out_mode___lsb 7
#define reg_iop_timer_grp_rw_tmr_cfg___out_mode___width 1
#define reg_iop_timer_grp_rw_tmr_cfg___out_mode___bit 7
#define reg_iop_timer_grp_rw_tmr_cfg___active_on_tmr___lsb 8
#define reg_iop_timer_grp_rw_tmr_cfg___active_on_tmr___width 2
#define reg_iop_timer_grp_rw_tmr_cfg___inv___lsb 10
#define reg_iop_timer_grp_rw_tmr_cfg___inv___width 1
#define reg_iop_timer_grp_rw_tmr_cfg___inv___bit 10
#define reg_iop_timer_grp_rw_tmr_cfg___en_by_tmr___lsb 11
#define reg_iop_timer_grp_rw_tmr_cfg___en_by_tmr___width 2
#define reg_iop_timer_grp_rw_tmr_cfg___dis_by_tmr___lsb 13
#define reg_iop_timer_grp_rw_tmr_cfg___dis_by_tmr___width 2
#define reg_iop_timer_grp_rw_tmr_cfg___en_only_by_reg___lsb 15
#define reg_iop_timer_grp_rw_tmr_cfg___en_only_by_reg___width 1
#define reg_iop_timer_grp_rw_tmr_cfg___en_only_by_reg___bit 15
#define reg_iop_timer_grp_rw_tmr_cfg___dis_only_by_reg___lsb 16
#define reg_iop_timer_grp_rw_tmr_cfg___dis_only_by_reg___width 1
#define reg_iop_timer_grp_rw_tmr_cfg___dis_only_by_reg___bit 16
#define reg_iop_timer_grp_rw_tmr_cfg___rst_at_en_strb___lsb 17
#define reg_iop_timer_grp_rw_tmr_cfg___rst_at_en_strb___width 1
#define reg_iop_timer_grp_rw_tmr_cfg___rst_at_en_strb___bit 17
#define reg_iop_timer_grp_rw_tmr_cfg_offset 12

#define STRIDE_iop_timer_grp_rw_tmr_len 4
/* Register rw_tmr_len, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_tmr_len___val___lsb 0
#define reg_iop_timer_grp_rw_tmr_len___val___width 16
#define reg_iop_timer_grp_rw_tmr_len_offset 44

/* Register rw_cmd, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_cmd___rst___lsb 0
#define reg_iop_timer_grp_rw_cmd___rst___width 4
#define reg_iop_timer_grp_rw_cmd___en___lsb 4
#define reg_iop_timer_grp_rw_cmd___en___width 4
#define reg_iop_timer_grp_rw_cmd___dis___lsb 8
#define reg_iop_timer_grp_rw_cmd___dis___width 4
#define reg_iop_timer_grp_rw_cmd___strb___lsb 12
#define reg_iop_timer_grp_rw_cmd___strb___width 4
#define reg_iop_timer_grp_rw_cmd_offset 60

/* Register r_clk_gen_cnt, scope iop_timer_grp, type r */
#define reg_iop_timer_grp_r_clk_gen_cnt_offset 64

#define STRIDE_iop_timer_grp_rs_tmr_cnt 8
/* Register rs_tmr_cnt, scope iop_timer_grp, type rs */
#define reg_iop_timer_grp_rs_tmr_cnt___val___lsb 0
#define reg_iop_timer_grp_rs_tmr_cnt___val___width 16
#define reg_iop_timer_grp_rs_tmr_cnt_offset 68

#define STRIDE_iop_timer_grp_r_tmr_cnt 8
/* Register r_tmr_cnt, scope iop_timer_grp, type r */
#define reg_iop_timer_grp_r_tmr_cnt___val___lsb 0
#define reg_iop_timer_grp_r_tmr_cnt___val___width 16
#define reg_iop_timer_grp_r_tmr_cnt_offset 72

/* Register rw_intr_mask, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_intr_mask___tmr0___lsb 0
#define reg_iop_timer_grp_rw_intr_mask___tmr0___width 1
#define reg_iop_timer_grp_rw_intr_mask___tmr0___bit 0
#define reg_iop_timer_grp_rw_intr_mask___tmr1___lsb 1
#define reg_iop_timer_grp_rw_intr_mask___tmr1___width 1
#define reg_iop_timer_grp_rw_intr_mask___tmr1___bit 1
#define reg_iop_timer_grp_rw_intr_mask___tmr2___lsb 2
#define reg_iop_timer_grp_rw_intr_mask___tmr2___width 1
#define reg_iop_timer_grp_rw_intr_mask___tmr2___bit 2
#define reg_iop_timer_grp_rw_intr_mask___tmr3___lsb 3
#define reg_iop_timer_grp_rw_intr_mask___tmr3___width 1
#define reg_iop_timer_grp_rw_intr_mask___tmr3___bit 3
#define reg_iop_timer_grp_rw_intr_mask_offset 100

/* Register rw_ack_intr, scope iop_timer_grp, type rw */
#define reg_iop_timer_grp_rw_ack_intr___tmr0___lsb 0
#define reg_iop_timer_grp_rw_ack_intr___tmr0___width 1
#define reg_iop_timer_grp_rw_ack_intr___tmr0___bit 0
#define reg_iop_timer_grp_rw_ack_intr___tmr1___lsb 1
#define reg_iop_timer_grp_rw_ack_intr___tmr1___width 1
#define reg_iop_timer_grp_rw_ack_intr___tmr1___bit 1
#define reg_iop_timer_grp_rw_ack_intr___tmr2___lsb 2
#define reg_iop_timer_grp_rw_ack_intr___tmr2___width 1
#define reg_iop_timer_grp_rw_ack_intr___tmr2___bit 2
#define reg_iop_timer_grp_rw_ack_intr___tmr3___lsb 3
#define reg_iop_timer_grp_rw_ack_intr___tmr3___width 1
#define reg_iop_timer_grp_rw_ack_intr___tmr3___bit 3
#define reg_iop_timer_grp_rw_ack_intr_offset 104

/* Register r_intr, scope iop_timer_grp, type r */
#define reg_iop_timer_grp_r_intr___tmr0___lsb 0
#define reg_iop_timer_grp_r_intr___tmr0___width 1
#define reg_iop_timer_grp_r_intr___tmr0___bit 0
#define reg_iop_timer_grp_r_intr___tmr1___lsb 1
#define reg_iop_timer_grp_r_intr___tmr1___width 1
#define reg_iop_timer_grp_r_intr___tmr1___bit 1
#define reg_iop_timer_grp_r_intr___tmr2___lsb 2
#define reg_iop_timer_grp_r_intr___tmr2___width 1
#define reg_iop_timer_grp_r_intr___tmr2___bit 2
#define reg_iop_timer_grp_r_intr___tmr3___lsb 3
#define reg_iop_timer_grp_r_intr___tmr3___width 1
#define reg_iop_timer_grp_r_intr___tmr3___bit 3
#define reg_iop_timer_grp_r_intr_offset 108

/* Register r_masked_intr, scope iop_timer_grp, type r */
#define reg_iop_timer_grp_r_masked_intr___tmr0___lsb 0
#define reg_iop_timer_grp_r_masked_intr___tmr0___width 1
#define reg_iop_timer_grp_r_masked_intr___tmr0___bit 0
#define reg_iop_timer_grp_r_masked_intr___tmr1___lsb 1
#define reg_iop_timer_grp_r_masked_intr___tmr1___width 1
#define reg_iop_timer_grp_r_masked_intr___tmr1___bit 1
#define reg_iop_timer_grp_r_masked_intr___tmr2___lsb 2
#define reg_iop_timer_grp_r_masked_intr___tmr2___width 1
#define reg_iop_timer_grp_r_masked_intr___tmr2___bit 2
#define reg_iop_timer_grp_r_masked_intr___tmr3___lsb 3
#define reg_iop_timer_grp_r_masked_intr___tmr3___width 1
#define reg_iop_timer_grp_r_masked_intr___tmr3___bit 3
#define reg_iop_timer_grp_r_masked_intr_offset 112


/* Constants */
#define regk_iop_timer_grp_clk200                 0x00000000
#define regk_iop_timer_grp_clk_gen                0x00000002
#define regk_iop_timer_grp_complete               0x00000002
#define regk_iop_timer_grp_div_clk200             0x00000001
#define regk_iop_timer_grp_div_clk_gen            0x00000003
#define regk_iop_timer_grp_ext                    0x00000001
#define regk_iop_timer_grp_hi                     0x00000000
#define regk_iop_timer_grp_long_period            0x00000001
#define regk_iop_timer_grp_neg                    0x00000002
#define regk_iop_timer_grp_no                     0x00000000
#define regk_iop_timer_grp_once                   0x00000003
#define regk_iop_timer_grp_pause                  0x00000001
#define regk_iop_timer_grp_pos                    0x00000001
#define regk_iop_timer_grp_pos_neg                0x00000003
#define regk_iop_timer_grp_pulse                  0x00000000
#define regk_iop_timer_grp_r_tmr_cnt_size         0x00000004
#define regk_iop_timer_grp_rs_tmr_cnt_size        0x00000004
#define regk_iop_timer_grp_rw_cfg_default         0x00000002
#define regk_iop_timer_grp_rw_intr_mask_default   0x00000000
#define regk_iop_timer_grp_rw_tmr_cfg_default0    0x00018000
#define regk_iop_timer_grp_rw_tmr_cfg_default1    0x0001a900
#define regk_iop_timer_grp_rw_tmr_cfg_default2    0x0001d200
#define regk_iop_timer_grp_rw_tmr_cfg_default3    0x0001fb00
#define regk_iop_timer_grp_rw_tmr_cfg_size        0x00000004
#define regk_iop_timer_grp_rw_tmr_len_default     0x00000000
#define regk_iop_timer_grp_rw_tmr_len_size        0x00000004
#define regk_iop_timer_grp_short_period           0x00000000
#define regk_iop_timer_grp_stop                   0x00000000
#define regk_iop_timer_grp_tmr                    0x00000004
#define regk_iop_timer_grp_toggle                 0x00000001
#define regk_iop_timer_grp_yes                    0x00000001
#endif /* __iop_timer_grp_defs_asm_h */
