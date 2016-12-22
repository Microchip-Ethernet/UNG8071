#ifndef __bif_dma_defs_asm_h
#define __bif_dma_defs_asm_h

/*
 * This file is autogenerated from
 *   file:           ../../inst/bif/rtl/bif_dma_regs.r
 *     id:           bif_dma_regs.r,v 1.6 2005/02/04 13:28:31 perz Exp
 *     last modfied: Mon Apr 11 16:06:33 2005
 *
 *   by /n/asic/design/tools/rdesc/src/rdes2c -asm --outfile asm/bif_dma_defs_asm.h ../../inst/bif/rtl/bif_dma_regs.r
 *      id: $Id: //depot/swdev/LAN/Switch/KSZ/kernels/linux-3.18/arch/cris/include/arch-v32/arch/hwregs/asm/bif_dma_defs_asm.h#3 $
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

/* Register rw_ch0_ctrl, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch0_ctrl___bw___lsb 0
#define reg_bif_dma_rw_ch0_ctrl___bw___width 2
#define reg_bif_dma_rw_ch0_ctrl___burst_len___lsb 2
#define reg_bif_dma_rw_ch0_ctrl___burst_len___width 1
#define reg_bif_dma_rw_ch0_ctrl___burst_len___bit 2
#define reg_bif_dma_rw_ch0_ctrl___cont___lsb 3
#define reg_bif_dma_rw_ch0_ctrl___cont___width 1
#define reg_bif_dma_rw_ch0_ctrl___cont___bit 3
#define reg_bif_dma_rw_ch0_ctrl___end_pad___lsb 4
#define reg_bif_dma_rw_ch0_ctrl___end_pad___width 1
#define reg_bif_dma_rw_ch0_ctrl___end_pad___bit 4
#define reg_bif_dma_rw_ch0_ctrl___cnt___lsb 5
#define reg_bif_dma_rw_ch0_ctrl___cnt___width 1
#define reg_bif_dma_rw_ch0_ctrl___cnt___bit 5
#define reg_bif_dma_rw_ch0_ctrl___dreq_pin___lsb 6
#define reg_bif_dma_rw_ch0_ctrl___dreq_pin___width 3
#define reg_bif_dma_rw_ch0_ctrl___dreq_mode___lsb 9
#define reg_bif_dma_rw_ch0_ctrl___dreq_mode___width 2
#define reg_bif_dma_rw_ch0_ctrl___tc_in_pin___lsb 11
#define reg_bif_dma_rw_ch0_ctrl___tc_in_pin___width 3
#define reg_bif_dma_rw_ch0_ctrl___tc_in_mode___lsb 14
#define reg_bif_dma_rw_ch0_ctrl___tc_in_mode___width 2
#define reg_bif_dma_rw_ch0_ctrl___bus_mode___lsb 16
#define reg_bif_dma_rw_ch0_ctrl___bus_mode___width 2
#define reg_bif_dma_rw_ch0_ctrl___rate_en___lsb 18
#define reg_bif_dma_rw_ch0_ctrl___rate_en___width 1
#define reg_bif_dma_rw_ch0_ctrl___rate_en___bit 18
#define reg_bif_dma_rw_ch0_ctrl___wr_all___lsb 19
#define reg_bif_dma_rw_ch0_ctrl___wr_all___width 1
#define reg_bif_dma_rw_ch0_ctrl___wr_all___bit 19
#define reg_bif_dma_rw_ch0_ctrl_offset 0

/* Register rw_ch0_addr, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch0_addr___addr___lsb 0
#define reg_bif_dma_rw_ch0_addr___addr___width 32
#define reg_bif_dma_rw_ch0_addr_offset 4

/* Register rw_ch0_start, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch0_start___run___lsb 0
#define reg_bif_dma_rw_ch0_start___run___width 1
#define reg_bif_dma_rw_ch0_start___run___bit 0
#define reg_bif_dma_rw_ch0_start_offset 8

/* Register rw_ch0_cnt, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch0_cnt___start_cnt___lsb 0
#define reg_bif_dma_rw_ch0_cnt___start_cnt___width 16
#define reg_bif_dma_rw_ch0_cnt_offset 12

/* Register r_ch0_stat, scope bif_dma, type r */
#define reg_bif_dma_r_ch0_stat___cnt___lsb 0
#define reg_bif_dma_r_ch0_stat___cnt___width 16
#define reg_bif_dma_r_ch0_stat___run___lsb 31
#define reg_bif_dma_r_ch0_stat___run___width 1
#define reg_bif_dma_r_ch0_stat___run___bit 31
#define reg_bif_dma_r_ch0_stat_offset 16

/* Register rw_ch1_ctrl, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch1_ctrl___bw___lsb 0
#define reg_bif_dma_rw_ch1_ctrl___bw___width 2
#define reg_bif_dma_rw_ch1_ctrl___burst_len___lsb 2
#define reg_bif_dma_rw_ch1_ctrl___burst_len___width 1
#define reg_bif_dma_rw_ch1_ctrl___burst_len___bit 2
#define reg_bif_dma_rw_ch1_ctrl___cont___lsb 3
#define reg_bif_dma_rw_ch1_ctrl___cont___width 1
#define reg_bif_dma_rw_ch1_ctrl___cont___bit 3
#define reg_bif_dma_rw_ch1_ctrl___end_discard___lsb 4
#define reg_bif_dma_rw_ch1_ctrl___end_discard___width 1
#define reg_bif_dma_rw_ch1_ctrl___end_discard___bit 4
#define reg_bif_dma_rw_ch1_ctrl___cnt___lsb 5
#define reg_bif_dma_rw_ch1_ctrl___cnt___width 1
#define reg_bif_dma_rw_ch1_ctrl___cnt___bit 5
#define reg_bif_dma_rw_ch1_ctrl___dreq_pin___lsb 6
#define reg_bif_dma_rw_ch1_ctrl___dreq_pin___width 3
#define reg_bif_dma_rw_ch1_ctrl___dreq_mode___lsb 9
#define reg_bif_dma_rw_ch1_ctrl___dreq_mode___width 2
#define reg_bif_dma_rw_ch1_ctrl___tc_in_pin___lsb 11
#define reg_bif_dma_rw_ch1_ctrl___tc_in_pin___width 3
#define reg_bif_dma_rw_ch1_ctrl___tc_in_mode___lsb 14
#define reg_bif_dma_rw_ch1_ctrl___tc_in_mode___width 2
#define reg_bif_dma_rw_ch1_ctrl___bus_mode___lsb 16
#define reg_bif_dma_rw_ch1_ctrl___bus_mode___width 2
#define reg_bif_dma_rw_ch1_ctrl___rate_en___lsb 18
#define reg_bif_dma_rw_ch1_ctrl___rate_en___width 1
#define reg_bif_dma_rw_ch1_ctrl___rate_en___bit 18
#define reg_bif_dma_rw_ch1_ctrl_offset 32

/* Register rw_ch1_addr, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch1_addr___addr___lsb 0
#define reg_bif_dma_rw_ch1_addr___addr___width 32
#define reg_bif_dma_rw_ch1_addr_offset 36

/* Register rw_ch1_start, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch1_start___run___lsb 0
#define reg_bif_dma_rw_ch1_start___run___width 1
#define reg_bif_dma_rw_ch1_start___run___bit 0
#define reg_bif_dma_rw_ch1_start_offset 40

/* Register rw_ch1_cnt, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch1_cnt___start_cnt___lsb 0
#define reg_bif_dma_rw_ch1_cnt___start_cnt___width 16
#define reg_bif_dma_rw_ch1_cnt_offset 44

/* Register r_ch1_stat, scope bif_dma, type r */
#define reg_bif_dma_r_ch1_stat___cnt___lsb 0
#define reg_bif_dma_r_ch1_stat___cnt___width 16
#define reg_bif_dma_r_ch1_stat___run___lsb 31
#define reg_bif_dma_r_ch1_stat___run___width 1
#define reg_bif_dma_r_ch1_stat___run___bit 31
#define reg_bif_dma_r_ch1_stat_offset 48

/* Register rw_ch2_ctrl, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch2_ctrl___bw___lsb 0
#define reg_bif_dma_rw_ch2_ctrl___bw___width 2
#define reg_bif_dma_rw_ch2_ctrl___burst_len___lsb 2
#define reg_bif_dma_rw_ch2_ctrl___burst_len___width 1
#define reg_bif_dma_rw_ch2_ctrl___burst_len___bit 2
#define reg_bif_dma_rw_ch2_ctrl___cont___lsb 3
#define reg_bif_dma_rw_ch2_ctrl___cont___width 1
#define reg_bif_dma_rw_ch2_ctrl___cont___bit 3
#define reg_bif_dma_rw_ch2_ctrl___end_pad___lsb 4
#define reg_bif_dma_rw_ch2_ctrl___end_pad___width 1
#define reg_bif_dma_rw_ch2_ctrl___end_pad___bit 4
#define reg_bif_dma_rw_ch2_ctrl___cnt___lsb 5
#define reg_bif_dma_rw_ch2_ctrl___cnt___width 1
#define reg_bif_dma_rw_ch2_ctrl___cnt___bit 5
#define reg_bif_dma_rw_ch2_ctrl___dreq_pin___lsb 6
#define reg_bif_dma_rw_ch2_ctrl___dreq_pin___width 3
#define reg_bif_dma_rw_ch2_ctrl___dreq_mode___lsb 9
#define reg_bif_dma_rw_ch2_ctrl___dreq_mode___width 2
#define reg_bif_dma_rw_ch2_ctrl___tc_in_pin___lsb 11
#define reg_bif_dma_rw_ch2_ctrl___tc_in_pin___width 3
#define reg_bif_dma_rw_ch2_ctrl___tc_in_mode___lsb 14
#define reg_bif_dma_rw_ch2_ctrl___tc_in_mode___width 2
#define reg_bif_dma_rw_ch2_ctrl___bus_mode___lsb 16
#define reg_bif_dma_rw_ch2_ctrl___bus_mode___width 2
#define reg_bif_dma_rw_ch2_ctrl___rate_en___lsb 18
#define reg_bif_dma_rw_ch2_ctrl___rate_en___width 1
#define reg_bif_dma_rw_ch2_ctrl___rate_en___bit 18
#define reg_bif_dma_rw_ch2_ctrl___wr_all___lsb 19
#define reg_bif_dma_rw_ch2_ctrl___wr_all___width 1
#define reg_bif_dma_rw_ch2_ctrl___wr_all___bit 19
#define reg_bif_dma_rw_ch2_ctrl_offset 64

/* Register rw_ch2_addr, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch2_addr___addr___lsb 0
#define reg_bif_dma_rw_ch2_addr___addr___width 32
#define reg_bif_dma_rw_ch2_addr_offset 68

/* Register rw_ch2_start, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch2_start___run___lsb 0
#define reg_bif_dma_rw_ch2_start___run___width 1
#define reg_bif_dma_rw_ch2_start___run___bit 0
#define reg_bif_dma_rw_ch2_start_offset 72

/* Register rw_ch2_cnt, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch2_cnt___start_cnt___lsb 0
#define reg_bif_dma_rw_ch2_cnt___start_cnt___width 16
#define reg_bif_dma_rw_ch2_cnt_offset 76

/* Register r_ch2_stat, scope bif_dma, type r */
#define reg_bif_dma_r_ch2_stat___cnt___lsb 0
#define reg_bif_dma_r_ch2_stat___cnt___width 16
#define reg_bif_dma_r_ch2_stat___run___lsb 31
#define reg_bif_dma_r_ch2_stat___run___width 1
#define reg_bif_dma_r_ch2_stat___run___bit 31
#define reg_bif_dma_r_ch2_stat_offset 80

/* Register rw_ch3_ctrl, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch3_ctrl___bw___lsb 0
#define reg_bif_dma_rw_ch3_ctrl___bw___width 2
#define reg_bif_dma_rw_ch3_ctrl___burst_len___lsb 2
#define reg_bif_dma_rw_ch3_ctrl___burst_len___width 1
#define reg_bif_dma_rw_ch3_ctrl___burst_len___bit 2
#define reg_bif_dma_rw_ch3_ctrl___cont___lsb 3
#define reg_bif_dma_rw_ch3_ctrl___cont___width 1
#define reg_bif_dma_rw_ch3_ctrl___cont___bit 3
#define reg_bif_dma_rw_ch3_ctrl___end_discard___lsb 4
#define reg_bif_dma_rw_ch3_ctrl___end_discard___width 1
#define reg_bif_dma_rw_ch3_ctrl___end_discard___bit 4
#define reg_bif_dma_rw_ch3_ctrl___cnt___lsb 5
#define reg_bif_dma_rw_ch3_ctrl___cnt___width 1
#define reg_bif_dma_rw_ch3_ctrl___cnt___bit 5
#define reg_bif_dma_rw_ch3_ctrl___dreq_pin___lsb 6
#define reg_bif_dma_rw_ch3_ctrl___dreq_pin___width 3
#define reg_bif_dma_rw_ch3_ctrl___dreq_mode___lsb 9
#define reg_bif_dma_rw_ch3_ctrl___dreq_mode___width 2
#define reg_bif_dma_rw_ch3_ctrl___tc_in_pin___lsb 11
#define reg_bif_dma_rw_ch3_ctrl___tc_in_pin___width 3
#define reg_bif_dma_rw_ch3_ctrl___tc_in_mode___lsb 14
#define reg_bif_dma_rw_ch3_ctrl___tc_in_mode___width 2
#define reg_bif_dma_rw_ch3_ctrl___bus_mode___lsb 16
#define reg_bif_dma_rw_ch3_ctrl___bus_mode___width 2
#define reg_bif_dma_rw_ch3_ctrl___rate_en___lsb 18
#define reg_bif_dma_rw_ch3_ctrl___rate_en___width 1
#define reg_bif_dma_rw_ch3_ctrl___rate_en___bit 18
#define reg_bif_dma_rw_ch3_ctrl_offset 96

/* Register rw_ch3_addr, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch3_addr___addr___lsb 0
#define reg_bif_dma_rw_ch3_addr___addr___width 32
#define reg_bif_dma_rw_ch3_addr_offset 100

/* Register rw_ch3_start, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch3_start___run___lsb 0
#define reg_bif_dma_rw_ch3_start___run___width 1
#define reg_bif_dma_rw_ch3_start___run___bit 0
#define reg_bif_dma_rw_ch3_start_offset 104

/* Register rw_ch3_cnt, scope bif_dma, type rw */
#define reg_bif_dma_rw_ch3_cnt___start_cnt___lsb 0
#define reg_bif_dma_rw_ch3_cnt___start_cnt___width 16
#define reg_bif_dma_rw_ch3_cnt_offset 108

/* Register r_ch3_stat, scope bif_dma, type r */
#define reg_bif_dma_r_ch3_stat___cnt___lsb 0
#define reg_bif_dma_r_ch3_stat___cnt___width 16
#define reg_bif_dma_r_ch3_stat___run___lsb 31
#define reg_bif_dma_r_ch3_stat___run___width 1
#define reg_bif_dma_r_ch3_stat___run___bit 31
#define reg_bif_dma_r_ch3_stat_offset 112

/* Register rw_intr_mask, scope bif_dma, type rw */
#define reg_bif_dma_rw_intr_mask___ext_dma0___lsb 0
#define reg_bif_dma_rw_intr_mask___ext_dma0___width 1
#define reg_bif_dma_rw_intr_mask___ext_dma0___bit 0
#define reg_bif_dma_rw_intr_mask___ext_dma1___lsb 1
#define reg_bif_dma_rw_intr_mask___ext_dma1___width 1
#define reg_bif_dma_rw_intr_mask___ext_dma1___bit 1
#define reg_bif_dma_rw_intr_mask___ext_dma2___lsb 2
#define reg_bif_dma_rw_intr_mask___ext_dma2___width 1
#define reg_bif_dma_rw_intr_mask___ext_dma2___bit 2
#define reg_bif_dma_rw_intr_mask___ext_dma3___lsb 3
#define reg_bif_dma_rw_intr_mask___ext_dma3___width 1
#define reg_bif_dma_rw_intr_mask___ext_dma3___bit 3
#define reg_bif_dma_rw_intr_mask_offset 128

/* Register rw_ack_intr, scope bif_dma, type rw */
#define reg_bif_dma_rw_ack_intr___ext_dma0___lsb 0
#define reg_bif_dma_rw_ack_intr___ext_dma0___width 1
#define reg_bif_dma_rw_ack_intr___ext_dma0___bit 0
#define reg_bif_dma_rw_ack_intr___ext_dma1___lsb 1
#define reg_bif_dma_rw_ack_intr___ext_dma1___width 1
#define reg_bif_dma_rw_ack_intr___ext_dma1___bit 1
#define reg_bif_dma_rw_ack_intr___ext_dma2___lsb 2
#define reg_bif_dma_rw_ack_intr___ext_dma2___width 1
#define reg_bif_dma_rw_ack_intr___ext_dma2___bit 2
#define reg_bif_dma_rw_ack_intr___ext_dma3___lsb 3
#define reg_bif_dma_rw_ack_intr___ext_dma3___width 1
#define reg_bif_dma_rw_ack_intr___ext_dma3___bit 3
#define reg_bif_dma_rw_ack_intr_offset 132

/* Register r_intr, scope bif_dma, type r */
#define reg_bif_dma_r_intr___ext_dma0___lsb 0
#define reg_bif_dma_r_intr___ext_dma0___width 1
#define reg_bif_dma_r_intr___ext_dma0___bit 0
#define reg_bif_dma_r_intr___ext_dma1___lsb 1
#define reg_bif_dma_r_intr___ext_dma1___width 1
#define reg_bif_dma_r_intr___ext_dma1___bit 1
#define reg_bif_dma_r_intr___ext_dma2___lsb 2
#define reg_bif_dma_r_intr___ext_dma2___width 1
#define reg_bif_dma_r_intr___ext_dma2___bit 2
#define reg_bif_dma_r_intr___ext_dma3___lsb 3
#define reg_bif_dma_r_intr___ext_dma3___width 1
#define reg_bif_dma_r_intr___ext_dma3___bit 3
#define reg_bif_dma_r_intr_offset 136

/* Register r_masked_intr, scope bif_dma, type r */
#define reg_bif_dma_r_masked_intr___ext_dma0___lsb 0
#define reg_bif_dma_r_masked_intr___ext_dma0___width 1
#define reg_bif_dma_r_masked_intr___ext_dma0___bit 0
#define reg_bif_dma_r_masked_intr___ext_dma1___lsb 1
#define reg_bif_dma_r_masked_intr___ext_dma1___width 1
#define reg_bif_dma_r_masked_intr___ext_dma1___bit 1
#define reg_bif_dma_r_masked_intr___ext_dma2___lsb 2
#define reg_bif_dma_r_masked_intr___ext_dma2___width 1
#define reg_bif_dma_r_masked_intr___ext_dma2___bit 2
#define reg_bif_dma_r_masked_intr___ext_dma3___lsb 3
#define reg_bif_dma_r_masked_intr___ext_dma3___width 1
#define reg_bif_dma_r_masked_intr___ext_dma3___bit 3
#define reg_bif_dma_r_masked_intr_offset 140

/* Register rw_pin0_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin0_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin0_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin0_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin0_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin0_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin0_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin0_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin0_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin0_cfg_offset 160

/* Register rw_pin1_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin1_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin1_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin1_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin1_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin1_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin1_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin1_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin1_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin1_cfg_offset 164

/* Register rw_pin2_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin2_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin2_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin2_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin2_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin2_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin2_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin2_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin2_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin2_cfg_offset 168

/* Register rw_pin3_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin3_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin3_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin3_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin3_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin3_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin3_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin3_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin3_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin3_cfg_offset 172

/* Register rw_pin4_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin4_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin4_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin4_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin4_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin4_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin4_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin4_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin4_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin4_cfg_offset 176

/* Register rw_pin5_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin5_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin5_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin5_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin5_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin5_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin5_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin5_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin5_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin5_cfg_offset 180

/* Register rw_pin6_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin6_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin6_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin6_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin6_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin6_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin6_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin6_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin6_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin6_cfg_offset 184

/* Register rw_pin7_cfg, scope bif_dma, type rw */
#define reg_bif_dma_rw_pin7_cfg___master_ch___lsb 0
#define reg_bif_dma_rw_pin7_cfg___master_ch___width 2
#define reg_bif_dma_rw_pin7_cfg___master_mode___lsb 2
#define reg_bif_dma_rw_pin7_cfg___master_mode___width 3
#define reg_bif_dma_rw_pin7_cfg___slave_ch___lsb 5
#define reg_bif_dma_rw_pin7_cfg___slave_ch___width 2
#define reg_bif_dma_rw_pin7_cfg___slave_mode___lsb 7
#define reg_bif_dma_rw_pin7_cfg___slave_mode___width 3
#define reg_bif_dma_rw_pin7_cfg_offset 188

/* Register r_pin_stat, scope bif_dma, type r */
#define reg_bif_dma_r_pin_stat___pin0___lsb 0
#define reg_bif_dma_r_pin_stat___pin0___width 1
#define reg_bif_dma_r_pin_stat___pin0___bit 0
#define reg_bif_dma_r_pin_stat___pin1___lsb 1
#define reg_bif_dma_r_pin_stat___pin1___width 1
#define reg_bif_dma_r_pin_stat___pin1___bit 1
#define reg_bif_dma_r_pin_stat___pin2___lsb 2
#define reg_bif_dma_r_pin_stat___pin2___width 1
#define reg_bif_dma_r_pin_stat___pin2___bit 2
#define reg_bif_dma_r_pin_stat___pin3___lsb 3
#define reg_bif_dma_r_pin_stat___pin3___width 1
#define reg_bif_dma_r_pin_stat___pin3___bit 3
#define reg_bif_dma_r_pin_stat___pin4___lsb 4
#define reg_bif_dma_r_pin_stat___pin4___width 1
#define reg_bif_dma_r_pin_stat___pin4___bit 4
#define reg_bif_dma_r_pin_stat___pin5___lsb 5
#define reg_bif_dma_r_pin_stat___pin5___width 1
#define reg_bif_dma_r_pin_stat___pin5___bit 5
#define reg_bif_dma_r_pin_stat___pin6___lsb 6
#define reg_bif_dma_r_pin_stat___pin6___width 1
#define reg_bif_dma_r_pin_stat___pin6___bit 6
#define reg_bif_dma_r_pin_stat___pin7___lsb 7
#define reg_bif_dma_r_pin_stat___pin7___width 1
#define reg_bif_dma_r_pin_stat___pin7___bit 7
#define reg_bif_dma_r_pin_stat_offset 192


/* Constants */
#define regk_bif_dma_as_master                    0x00000001
#define regk_bif_dma_as_slave                     0x00000001
#define regk_bif_dma_burst1                       0x00000000
#define regk_bif_dma_burst8                       0x00000001
#define regk_bif_dma_bw16                         0x00000001
#define regk_bif_dma_bw32                         0x00000002
#define regk_bif_dma_bw8                          0x00000000
#define regk_bif_dma_dack                         0x00000006
#define regk_bif_dma_dack_inv                     0x00000007
#define regk_bif_dma_force                        0x00000001
#define regk_bif_dma_hi                           0x00000003
#define regk_bif_dma_inv                          0x00000003
#define regk_bif_dma_lo                           0x00000002
#define regk_bif_dma_master                       0x00000001
#define regk_bif_dma_no                           0x00000000
#define regk_bif_dma_norm                         0x00000002
#define regk_bif_dma_off                          0x00000000
#define regk_bif_dma_rw_ch0_ctrl_default          0x00000000
#define regk_bif_dma_rw_ch0_start_default         0x00000000
#define regk_bif_dma_rw_ch1_ctrl_default          0x00000000
#define regk_bif_dma_rw_ch1_start_default         0x00000000
#define regk_bif_dma_rw_ch2_ctrl_default          0x00000000
#define regk_bif_dma_rw_ch2_start_default         0x00000000
#define regk_bif_dma_rw_ch3_ctrl_default          0x00000000
#define regk_bif_dma_rw_ch3_start_default         0x00000000
#define regk_bif_dma_rw_intr_mask_default         0x00000000
#define regk_bif_dma_rw_pin0_cfg_default          0x00000000
#define regk_bif_dma_rw_pin1_cfg_default          0x00000000
#define regk_bif_dma_rw_pin2_cfg_default          0x00000000
#define regk_bif_dma_rw_pin3_cfg_default          0x00000000
#define regk_bif_dma_rw_pin4_cfg_default          0x00000000
#define regk_bif_dma_rw_pin5_cfg_default          0x00000000
#define regk_bif_dma_rw_pin6_cfg_default          0x00000000
#define regk_bif_dma_rw_pin7_cfg_default          0x00000000
#define regk_bif_dma_slave                        0x00000002
#define regk_bif_dma_sreq                         0x00000006
#define regk_bif_dma_sreq_inv                     0x00000007
#define regk_bif_dma_tc                           0x00000004
#define regk_bif_dma_tc_inv                       0x00000005
#define regk_bif_dma_yes                          0x00000001
#endif /* __bif_dma_defs_asm_h */
