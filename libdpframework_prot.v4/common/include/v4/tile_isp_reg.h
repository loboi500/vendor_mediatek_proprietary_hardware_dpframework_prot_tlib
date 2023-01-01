#ifndef __TILE_ISP_REG_H__
#define __TILE_ISP_REG_H__

/* error enum */
#define ISP_TILE_ERROR_MESSAGE_ENUM(n, CMD) \
    /* Raw check */\
    CMD(n, ISP_MESSAGE_INVALID_SRC_SIZE_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_TILE_RAW_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_VIPI_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_WPE_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_MFB_DL_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* LSC check */\
    CMD(n, ISP_MESSAGE_LSC_ZERO_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* LTM check */\
    CMD(n, ISP_MESSAGE_LTM_INVALID_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* IMGBI check */\
    CMD(n, ISP_MESSAGE_IMGBI_FORMAT_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* IMG2O size check */\
    CMD(n, ISP_MESSAGE_IMG2BO_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_IMG2BO_YSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* CRP1 size check */\
    CMD(n, ISP_MESSAGE_CRP1_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* IMG3O size check */\
    CMD(n, ISP_MESSAGE_IMG3O_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* IMG3BO size check */\
    CMD(n, ISP_MESSAGE_IMG3BO_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_IMG3BO_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* IMG3CO size check */\
    CMD(n, ISP_MESSAGE_IMG3CO_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_IMG3CO_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_IMG3CO_YSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* UFBCE size check */\
    CMD(n, ISP_MESSAGE_UFBCE_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* MFB FE check */\
    CMD(n, ISP_MESSAGE_UNKNOWN_DFE_MODE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_TOO_SMALL_DFE_INPUT_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_TOO_SMALL_DFE_INPUT_YSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_TOO_SMALL_TILE_WIDTH_FOR_DFE_OUT_XE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_TOO_SMALL_TILE_HEIGHT_FOR_DFE_OUT_YE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_CONFIG_DFE_INPUT_SIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* ISP MUX check */\
    CMD(n, ISP_MESSAGE_ILLEGAL_RAW_PATH_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_YUV_PATH_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_MIX1_SEL_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_CRZ_SEL_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_SRZ1_SEL_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_TIMGO_SEL_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_IMGI_FMT_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* 3DNR configuration check */\
    CMD(n, ISP_MESSAGE_ILLEGAL_3DNR_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_ILLEGAL_3DNR_VALID_WINDOW_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* SRZ check */\
    CMD(n, ISP_MESSAGE_NOT_SUPPORT_OFFSET_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* C02 check */\
    CMD(n, ISP_MESSAGE_INVALID_C02_EN_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_C02D2_EN_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* resizer coeff check */\
    CMD(n, ISP_MESSAGE_RESIZER_UNMATCH_INPUT_SIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* TIMGO size check */\
    CMD(n, ISP_MESSAGE_TIMGO_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_TIMGO_YCROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* DCESO size check */\
    CMD(n, ISP_MESSAGE_DCESO_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* min size constraints */\
    CMD(n, ISP_MESSAGE_UNDER_MIN_XSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_UNDER_MIN_YSIZE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* FEO config check */\
    CMD(n, ISP_MESSAGE_INVALID_FEO_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* SMT config check */\
    CMD(n, ISP_MESSAGE_INVALID_SMT_CONFIG_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_SMT_OFFSET_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_SMT_SMALL_DMA_SIZE_PARTIAL_DUMP_WARNING, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_INVALID_SMT_SMALL_DMA_SIZE_DISABLE_DUMP_WARNING, ISP_TPIPE_MESSAGE_FAIL)\
    /* MFBO size check */\
    CMD(n, ISP_MESSAGE_MSF_WDMA_FSOY_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_MSF_WDMA_FSOC_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_MSS_WDMA_MSSOY_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_MSS_WDMA_MSSOC_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_MSS_WDMA_OMCOY_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_MSS_WDMA_OMCOC_CROP_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* DMA align check */\
    CMD(n, ISP_MESSAGE_WRONG_IMGI_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_IMGBI_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_IMGCI_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_IMG3O_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_IMG3BO_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_IMG3CO_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_BASEIY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_BASEIC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_REFIY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_REFIC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_DSIY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_DSIC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_IDIY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_IDIC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_WEI_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_DSWI_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_RDMA_CONFI_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_WDMA_FSOY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_WDMA_FSOC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSF_NONOVERLAP_ROI_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSS_RDMA_MSSIY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSS_RDMA_MSSIC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSS_WDMA_MSSOY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSS_WDMA_MSSOC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSS_WDMA_OMCOY_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, ISP_MESSAGE_WRONG_MSS_WDMA_OMCOC_STRIDE_ERROR, ISP_TPIPE_MESSAGE_FAIL)\

/* register table (Cmodel, platform, tile driver) for SW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_SW_REG_LUT(CMD, a, b, c, d, e) \
    /* common part */\
    /* 0: stop final, 1: stop per line, 2: stop per tile*/\
    CMD(a, b, c, d, e, int, TILE_IRQ_MODE, sw.tpipe_irq_mode, last_irq_mode,, true,,, 1, TILE_IRQ_MODE)\
    CMD(a, b, c, d, e, int, TILE_SEL_CAL, sw.tpipe_sel_mode, tile_sel_mode,, true,,, 1, TILE_SEL_CAL)\
    CMD(a, b, c, d, e, int, TILE_DUAL_EN, sw.tpipe_dual_en, tile_dual_en,, true,,, 1, TILE_DUAL_EN)\
    CMD(a, b, c, d, e, int, TILE_DUAL_MODE, sw.tpipe_dual_mode, tile_dual_mode,, true,,, 1, TILE_DUAL_MODE)\

/* register table (Cmodel, platform, tile driver) for SW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define DIP_TILE_SW_REG_LUT(CMD, a, b, c, d, e) \
    /* IMGI input width & height */\
    CMD(a, b, c, d, e, int, CTL_IMGI_XSIZE_PIX_DIP_A, sw.src_width, isp_tile_src_width,, true,,, 0, CTL_IMGI_XSIZE_PIX_DIP_B)\
    CMD(a, b, c, d, e, int, CTL_IMGI_YSIZE_PIX_DIP_A, sw.src_height, isp_tile_src_height,, true,,, 0, CTL_IMGI_YSIZE_PIX_DIP_B)\
    CMD(a, b, c, d, e, int, TILE_WIDTH_DIP_A, sw.tpipe_width, isp_tile_width,, true,,, 1, TILE_WIDTH_DIP_B)\
    CMD(a, b, c, d, e, int, TILE_HEIGHT_DIP_A, sw.tpipe_height, isp_tile_height,, true,,, 1, TILE_HEIGHT_DIP_B)\
    CMD(a, b, c, d, e, int, LCE_D1A_FULL_XOFF, lce.lce_full_xoff, lce_full_xoff,, true,,, 1, LCE_D1B_FULL_XOFF)\
    CMD(a, b, c, d, e, int, LCE_D1A_FULL_YOFF, lce.lce_full_yoff, lce_full_yoff,, true,,, 1, LCE_D1B_FULL_YOFF)\
    CMD(a, b, c, d, e, int, LCE_D1A_FULL_SLM_WD, lce.lce_full_slm_width, lce_full_slm_width,, true,,, 1, LCE_D1B_FULL_SLM_WD)\
    CMD(a, b, c, d, e, int, LCE_D1A_FULL_SLM_HT, lce.lce_full_slm_height, lce_full_slm_height,, true,,, 1, LCE_D1B_FULL_SLM_HT)\
    CMD(a, b, c, d, e, int, LCE_D1A_FULL_OUT_HT, lce.lce_full_out_height, lce_full_out_height,, true,,, 1, LCE_D1B_FULL_OUT_HT)\
    /* NR3D_D1 */\
    CMD(a, b, c, d, e, int, TILE_NR3D_DMA_OFST_X_A, nr3d.dma_ofst_x, NR3D_DMA_OFST_X,, true,,, 1, TILE_NR3D_DMA_OFST_X_B)\
    CMD(a, b, c, d, e, int, TILE_NR3D_DMA_OFST_Y_A, nr3d.dma_ofst_y, NR3D_DMA_OFST_Y,, true,,, 1, TILE_NR3D_DMA_OFST_Y_B)\

/* register table (Cmodel, platform, tile driver) for SW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define WPE_TILE_SW_REG_LUT(CMD, a, b, c, d, e) \
    /* IMGI input width & height */\
    CMD(a, b, c, d, e, int, CTL_IMGI_XSIZE_PIX_WPE_A, sw.src_width_wpe, isp_tile_src_width_wpe,, true,,, 0, CTL_IMGI_XSIZE_PIX_WPE_B)\
    CMD(a, b, c, d, e, int, CTL_IMGI_YSIZE_PIX_WPE_A, sw.src_height_wpe, isp_tile_src_height_wpe,, true,,, 0, CTL_IMGI_YSIZE_PIX_WPE_B)\
    CMD(a, b, c, d, e, int, TILE_WIDTH_WPE_A, sw.tpipe_width_wpe, isp_tile_width_wpe,, true,,, 1, TILE_WIDTH_WPE_B)\
    CMD(a, b, c, d, e, int, TILE_HEIGHT_WPE_A, sw.tpipe_height_wpe, isp_tile_height_wpe,, true,,, 1, TILE_HEIGHT_WPE_B)\

/* register table (Cmodel, platform, tile driver) for SW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define MFB_TILE_SW_REG_LUT(CMD, a, b, c, d, e) \
    /* IMGI input width & height */\
    CMD(a, b, c, d, e, int, CTL_MFBI_XSIZE_PIX_MFB_A, sw.src_width_mfb, isp_tile_src_width_mfb,, true,,, 0, CTL_MFBI_XSIZE_PIX_MFB_A)\
    CMD(a, b, c, d, e, int, CTL_MFBI_YSIZE_PIX_MFB_A, sw.src_height_mfb, isp_tile_src_height_mfb,, true,,, 0, CTL_MFBI_YSIZE_PIX_MFB_A)\
    CMD(a, b, c, d, e, int, TILE_WIDTH_MFB_A, sw.tpipe_width_mfb, isp_tile_width_mfb,, true,,, 1, TILE_WIDTH_MFB_A)\
    CMD(a, b, c, d, e, int, TILE_HEIGHT_MFB_A, sw.tpipe_height_mfb, isp_tile_height_mfb,, true,,, 1, TILE_HEIGHT_MFB_A)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MSF_EN, top.msf_en, MSF_EN,, true,,, 4, DIPCTL_D1B_MSF_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MFB_D1_EN, top.mfb_en, MFB_EN,, true,,, 4, DIPCTL_D1B_MFB_D1_EN)\

/* register table (Cmodel, platform, tile driver) for SW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define MSS_TILE_SW_REG_LUT(CMD, a, b, c, d, e) \
    /* IMGI input width & height */\
    CMD(a, b, c, d, e, int, CTL_MFBI_XSIZE_PIX_MSS_A, sw.src_width_mss, isp_tile_src_width_mss,, true,,, 0, CTL_MFBI_XSIZE_PIX_MSS_A)\
    CMD(a, b, c, d, e, int, CTL_MFBI_YSIZE_PIX_MSS_A, sw.src_height_mss, isp_tile_src_height_mss,, true,,, 0, CTL_MFBI_YSIZE_PIX_MSS_A)\
    CMD(a, b, c, d, e, int, TILE_WIDTH_MSS_A, sw.tpipe_width_mss, isp_tile_width_mss,, true,,, 1, TILE_WIDTH_MSS_A)\
    CMD(a, b, c, d, e, int, TILE_HEIGHT_MSS_A, sw.tpipe_height_mss, isp_tile_height_mss,, true,,, 1, TILE_HEIGHT_MSS_A)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_sram_mode_SEL, top.sram_mode_sel, SRAM_MODE_SEL,, true,,, 1, MFB_D1A_MFBTOP_sram_mode_SEL)\

/* register table (Cmodel, platform, tile driver) for HW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care, 4: shold compare isp_reg and reg map in program */
#define DIP_TILE_HW_REG_LUT(CMD, a, b, c, d, e) \
    /* Common */\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PIX_ID, top.pixel_id, PIX_ID,, true, DIPCTL_D1A_DIPCTL_MISC_SEL, DIPCTL_PIX_ID, 4, DIPCTL_D1B_PIX_ID)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMGI_D1_FMT, top.cam_in_fmt, CAM_IN_FMT,, true, DIPCTL_D1A_DIPCTL_FMT_SEL1, DIPCTL_IMGI_D1_FMT, 4, DIPCTL_D1B_IMGI_D1_FMT)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TDR_CTL_EXT_EN, top.ctl_extension_en, CTL_EXTENSION_EN,, true, DIPCTL_D1A_DIPCTL_TDR_SEL, DIPCTL_TDR_CTL_EXT_EN, 4, CTL_EXTENSION_B_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_FG_MODE, top.fg_mode, FG_MODE,, true, DIPCTL_D1A_DIPCTL_MISC_SEL, DIPCTL_FG_MODE, 4, DIPCTL_D1B_FG_MODE)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PAKG_D1_FG_OUT, top.pakg_fg_out, PAKG_FG_OUT,, true, DIPCTL_D1A_DIPCTL_MISC_SEL, DIPCTL_PAKG_D1_FG_OUT, 4, DIPCTL_D1B_PAKG_D1_FG_OUT)\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_UFO_IMGI_D1_EN, top.ufo_imgi_en, UFO_IMGI_EN,, true, DIPDMATOP_D1A_DIPDMATOP_SPECIAL_FUN_EN, DIPDMATOP_UFO_IMGI_D1_EN, 4, DIPDMATOP_D1B_UFO_IMGI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_UFO_IMGBI_D1_EN, top.ufo_imgbi_en, UFO_IMGBI_EN,, true, DIPDMATOP_D1A_DIPDMATOP_SPECIAL_FUN_EN, DIPDMATOP_UFO_IMGBI_D1_EN, 4, DIPDMATOP_D1B_UFO_IMGBI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UFDI_D1_FMT, top.ufdi_fmt, UFDI_FMT,, true, DIPCTL_D1A_DIPCTL_FMT_SEL1, DIPCTL_UFDI_D1_FMT, 4, DIPCTL_D1B_UFDI_D1_FMT)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_VIPI_D1_FMT, top.vipi_fmt, VIPI_FMT,, true, DIPCTL_D1A_DIPCTL_FMT_SEL1, DIPCTL_VIPI_D1_FMT, 4, DIPCTL_D1B_VIPI_D1_FMT)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMG3O_D1_FMT, top.img3o_fmt, IMG3O_FMT,, true, DIPCTL_D1A_DIPCTL_FMT_SEL2, DIPCTL_IMG3O_D1_FMT, 4, DIPCTL_D1B_IMG3O_D1_FMT)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRZO_D1_FMT, top.crzo_fmt, CRZO_FMT,, true, DIPCTL_D1A_DIPCTL_FMT_SEL2, DIPCTL_CRZO_D1_FMT, 4, DIPCTL_D1B_CRZO_D1_FMT)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TIMGO_D1_FMT, top.timgo_fmt, TIMGO_FMT,, true, DIPCTL_D1A_DIPCTL_FMT_SEL2, DIPCTL_TIMGO_D1_FMT, 4, DIPCTL_D1B_TIMGO_D1_FMT)\
    /* module enable register */\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMGI_D1_EN, top.imgi_en, IMGI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_IMGI_D1_EN, 4, DIPCTL_D1B_IMGI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMGBI_D1_EN, top.imgbi_en, IMGBI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_IMGBI_D1_EN, 4, DIPCTL_D1A_IMGBI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMGCI_D1_EN, top.imgci_en, IMGCI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_IMGCI_D1_EN, 4, DIPCTL_D1A_IMGCI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_VIPI_D1_EN, top.vipi_en, VIPI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN2, DIPCTL_VIPI_D1_EN, 4, DIPCTL_D1B_VIPI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_VIPBI_D1_EN, top.vipbi_en, VIPBI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN2, DIPCTL_VIPBI_D1_EN, 4, DIPCTL_D1B_VIPBI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_VIPCI_D1_EN, top.vipci_en, VIPCI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN2, DIPCTL_VIPCI_D1_EN, 4, DIPCTL_D1B_VIPCI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UFDI_D1_EN, top.ufdi_en, UFDI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_UFDI_D1_EN, 4, DIPCTL_D1B_UFDI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DMGI_D1_EN, top.dmgi_en, DMGI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_DMGI_D1_EN, 4, DIPCTL_D1B_DMGI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DEPI_D1_EN, top.depi_en, DEPI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_DEPI_D1_EN, 4, DIPCTL_D1B_UFDI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_LCEI_D1_EN, top.lcei_en, LCEI_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_LCEI_D1_EN, 4, DIPCTL_D1B_LCEI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTI_D1_EN, top.smt1i_en, SMT1I_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTI_D1_EN, 4, DIPCTL_D1B_SMTI_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTI_D2_EN, top.smt2i_en, SMT2I_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTI_D2_EN, 4, DIPCTL_D1B_SMTI_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTI_D3_EN, top.smt3i_en, SMT3I_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTI_D3_EN, 4, DIPCTL_D1B_SMTI_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTI_D4_EN, top.smt4i_en, SMT4I_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTI_D4_EN, 4, DIPCTL_D1B_SMTI_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTI_D5_EN, top.smt5i_en, SMT5I_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTI_D5_EN, 4, DIPCTL_D1B_SMTI_D5_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTI_D6_EN, top.smt6i_en, SMT6I_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTI_D6_EN, 4, DIPCTL_D1B_SMTI_D6_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTO_D1_EN, top.smt1o_en, SMT1O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTO_D1_EN, 4, DIPCTL_D1B_SMTO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTO_D2_EN, top.smt2o_en, SMT2O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTO_D2_EN, 4, DIPCTL_D1B_SMTO_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTO_D3_EN, top.smt3o_en, SMT3O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTO_D3_EN, 4, DIPCTL_D1B_SMTO_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTO_D4_EN, top.smt4o_en, SMT4O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTO_D4_EN, 4, DIPCTL_D1B_SMTO_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTO_D5_EN, top.smt5o_en, SMT5O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTO_D5_EN, 4, DIPCTL_D1B_SMTO_D5_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMTO_D6_EN, top.smt6o_en, SMT6O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_SMTO_D6_EN, 4, DIPCTL_D1B_SMTO_D6_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D1_EN, top.smt1_en, SMT1_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_SMT_D1_EN, 4, DIPCTL_D1B_SMT_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D2_EN, top.smt2_en, SMT2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_SMT_D2_EN, 4, DIPCTL_D1B_SMT_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D3_EN, top.smt3_en, SMT3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_SMT_D3_EN, 4, DIPCTL_D1B_SMT_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D4_EN, top.smt4_en, SMT4_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_SMT_D4_EN, 4, DIPCTL_D1B_SMT_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D5_EN, top.smt5_en, SMT5_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_SMT_D5_EN, 4, DIPCTL_D1B_SMT_D5_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D6_EN, top.smt6_en, SMT6_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_SMT_D6_EN, 4, DIPCTL_D1B_SMT_D6_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D1_EN, top.unp_en, UNP_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_UNP_D1_EN, 4, DIPCTL_D1B_UNP_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D2_EN, top.unp2_en, UNP2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_UNP_D2_EN, 4, DIPCTL_D1B_UNP_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D3_EN, top.unp3_en, UNP3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_UNP_D3_EN, 4, DIPCTL_D1B_UNP_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D4_EN, top.unp4_en, UNP4_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_UNP_D4_EN, 4, DIPCTL_D1B_UNP_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D5_EN, top.unp5_en, UNP5_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_UNP_D5_EN, 4, DIPCTL_D1B_UNP_D5_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D6_EN, top.unp6_en, UNP6_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_UNP_D6_EN, 4, DIPCTL_D1B_UNP_D6_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D7_EN, top.unp7_en, UNP7_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_UNP_D7_EN, 4, DIPCTL_D1B_UNP_D7_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D8_EN, top.unp8_en, UNP8_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_UNP_D8_EN, 4, DIPCTL_D1B_UNP_D8_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D9_EN, top.unp9_en, UNP9_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_UNP_D9_EN, 4, DIPCTL_D1B_UNP_D9_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D10_EN, top.unp10_en, UNP10_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_UNP_D10_EN, 4, DIPCTL_D1B_UNP_D10_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D11_EN, top.unp11_en, UNP11_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_UNP_D11_EN, 4, DIPCTL_D1B_UNP_D11_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UNP_D16_EN, top.unp16_en, UNP16_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_UNP_D16_EN, 4, DIPCTL_D1B_UNP_D16_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UFD_D1_EN, top.ufd_en, UFD_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_UFD_D1_EN, 4, DIPCTL_D1B_UFD_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_OBC_D1_EN, top.obc_en, OBC_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_OBC_D1_EN, 4, DIPCTL_D1B_OBC_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_BPC_D1_EN, top.bpc_en, BPC_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_BPC_D1_EN, 4, DIPCTL_D1B_BPC_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_ZFUS_D1_EN, top.zfus_en, ZFUS_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_ZFUS_D1_EN, 4, DIPCTL_D1B_ZFUS_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DGN_D1_EN, top.dgn_en, DGN_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_DGN_D1_EN, 4, DIPCTL_D1B_DGN_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_LSC_D1_EN, top.lsc_en, LSC_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_LSC_D1_EN, 4, DIPCTL_D1B_LSC_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_WB_D1_EN, top.wb_en, WB_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_WB_D1_EN, 4, DIPCTL_D1B_WB_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_HLR_D1_EN, top.hlr_en, HLR_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_HLR_D1_EN, 4, DIPCTL_D1B_HLR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_LTM_D1_EN, top.ltm_en, LTM_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_LTM_D1_EN, 4, DIPCTL_D1B_LTM_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DM_D1_EN, top.dm_en, DM_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_DM_D1_EN, 4, DIPCTL_D1B_DM_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_GDR_D1_EN, top.gdr_en, GDR_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_GDR_D1_EN, 4, DIPCTL_D1B_GDR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_ALIGN_D1_EN, top.align_en, ALIGN_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_ALIGN_D1_EN, 4, DIPCTL_D1B_ALIGN_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_LDNR_D1_EN, top.ldnr_en, LDNR_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_LDNR_D1_EN, 4, DIPCTL_D1B_LDNR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_FLC_D1_EN, top.flc_en, FLC_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_FLC_D1_EN, 4, DIPCTL_D1B_FLC_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CCM_D1_EN, top.ccm_en, CCM_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_CCM_D1_EN, 4, DIPCTL_D1B_CCM_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CCM_D2_EN, top.ccm2_en, CCM2_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_CCM_D2_EN, 4, DIPCTL_D1B_CCM_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_GGM_D1_EN, top.ggm_en, GGM_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_GGM_D1_EN, 4, DIPCTL_D1B_GGM_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_GGM_D2_EN, top.ggm2_en, GGM2_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_GGM_D2_EN, 4, DIPCTL_D1B_GGM_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_WSYNC_D1_EN, top.wsync_en, WSYNC_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_WSYNC_D1_EN, 4, DIPCTL_D1B_WSYNC_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_G2CX_D1_EN, top.g2cx_en, G2CX_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_G2CX_D1_EN, 4, DIPCTL_D1B_G2CX_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C42_D1_EN, top.c42_en, C42_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_C42_D1_EN, 4, DIPCTL_D1B_C42_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SLK_D1_EN, top.slk1_en, SLK1_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_SLK_D1_EN, 4, DIPCTL_D1B_SLK_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SLK_D2_EN, top.slk2_en, SLK2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SLK_D2_EN, 4, DIPCTL_D1B_SLK_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SLK_D3_EN, top.slk3_en, SLK3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SLK_D3_EN, 4, DIPCTL_D1B_SLK_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SLK_D4_EN, top.slk4_en, SLK4_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SLK_D4_EN, 4, DIPCTL_D1B_SLK_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SLK_D5_EN, top.slk5_en, SLK5_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SLK_D5_EN, 4, DIPCTL_D1B_SLK_D5_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SLK_D6_EN, top.slk6_en, SLK6_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_SLK_D6_EN, 4, DIPCTL_D1B_SLK_D6_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_NDG_D1_EN, top.ndg_en, NDG_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_NDG_D1_EN, 4, DIPCTL_D1B_NDG_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_NDG_D2_EN, top.ndg2_en, NDG2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_NDG_D2_EN, 4, DIPCTL_D1B_NDG_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_YNR_D1_EN, top.ynr_en, YNR_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_YNR_D1_EN, 4, DIPCTL_D1B_YNR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C24_D1_EN, top.c24_en, C24_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_C24_D1_EN, 4, DIPCTL_D1B_C24_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C24_D2_EN, top.c24d2_en, C24D2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_C24_D2_EN, 4, DIPCTL_D1B_C24_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C24_D3_EN, top.c24d3_en, C24D3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_C24_D3_EN, 4, DIPCTL_D1B_C24_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C2G_D1_EN, top.c2g_en, C2G_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_C2G_D1_EN, 4, DIPCTL_D1B_C2G_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IGGM_D1_EN, top.iggm_en, IGGM_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_IGGM_D1_EN, 4, DIPCTL_D1B_IGGM_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CCM_D3_EN, top.ccm3_en, CCM3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_CCM_D3_EN, 4, DIPCTL_D1B_CCM_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_LCE_D1_EN, top.lce_en, LCE_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_LCE_D1_EN, 4, DIPCTL_D1B_LCE_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_GGM_D3_EN, top.ggm3_en, GGM3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_GGM_D3_EN, 4, DIPCTL_D1B_GGM_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DCE_D1_EN, top.dce_en, DCE_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_DCE_D1_EN, 4, DIPCTL_D1B_DCE_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DCES_D1_EN, top.dces_en, DCES_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_DCES_D1_EN, 4, DIPCTL_D1B_DCES_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DCESO_D1_EN, top.dceso_en, DCESO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_DCESO_D1_EN, 4, DIPCTL_D1B_DCESO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_G2C_D1_EN, top.g2c_en, G2C_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_G2C_D1_EN, 4, DIPCTL_D1B_G2C_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C42_D2_EN, top.c42d2_en, C42D2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_C42_D2_EN, 4, DIPCTL_D1B_C42_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_EE_D1_EN, top.ee_en, EE_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_EE_D1_EN, 4, DIPCTL_D1B_EE_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_AKS_D1_EN, top.aks_en, AKS_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_AKS_D1_EN, 4, DIPCTL_D1B_AKS_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CNR_D1_EN, top.cnr_en, CNR_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_CNR_D1_EN, 4, DIPCTL_D1B_CNR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_COLOR_D1_EN, top.color_en, COLOR_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_COLOR_D1_EN, 4, DIPCTL_D1B_COLOR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_NR3D_D1_EN, top.nr3d_en, NR3D_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_NR3D_D1_EN, 4, DIPCTL_D1B_NR3D_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRP_D1_EN, top.rcp_en, CRP_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_CRP_D1_EN, 4, DIPCTL_D1B_CRP_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRP_D2_EN, top.rcp2_en, CRP2_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_CRP_D2_EN, 4, DIPCTL_D1B_CRP_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRP_D3_EN, top.rcp3_en, CRP3_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_CRP_D3_EN, 4, DIPCTL_D1B_CRP_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRP_D4_EN, top.rcp4_en, CRP4_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_CRP_D4_EN, 4, DIPCTL_D1B_CRP_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PAK_D1_EN, top.pak_en, PAK_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_PAK_D1_EN, 4, DIPCTL_D1B_PAK_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PAK_D6_EN, top.pak6_en, PAK6_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PAK_D6_EN, 4, DIPCTL_D1A_PAK_D6_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PAK_D7_EN, top.pak7_en, PAK7_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PAK_D7_EN, 4, DIPCTL_D1A_PAK_D7_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PAK_D8_EN, top.pak8_en, PAK8_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PAK_D8_EN, 4, DIPCTL_D1A_PAK_D8_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TIMGO_D1_EN, top.timgo_en, TIMGO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_TIMGO_D1_EN, 4, DIPCTL_D1B_TIMGO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMG3O_D1_EN, top.img3o_en, IMG3O_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN2, DIPCTL_IMG3O_D1_EN, 4, DIPCTL_D1B_IMG3O_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMG3BO_D1_EN, top.img3bo_en, IMG3BO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN2, DIPCTL_IMG3BO_D1_EN, 4, DIPCTL_D1B_IMG3BO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_IMG3CO_D1_EN, top.img3co_en, IMG3CO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN2, DIPCTL_IMG3CO_D1_EN, 4, DIPCTL_D1B_IMG3CO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MCRP_D1_EN, top.mcrp_en, MCRP_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_MCRP_D1_EN, 4, DIPCTL_D1B_MCRP_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MCRP_D2_EN, top.mcrp2_en, MCRP2_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN2, DIPCTL_MCRP_D2_EN, 4, DIPCTL_D1B_MCRP_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MIX_D1_EN, top.mix1_en, MIX1_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_MIX_D1_EN, 4, DIPCTL_D1B_MIX_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MIX_D2_EN, top.mix2_en, MIX2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_MIX_D2_EN, 4, DIPCTL_D1B_MIX_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MIX_D3_EN, top.mix3_en, MIX3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN1, DIPCTL_MIX_D3_EN, 4, DIPCTL_D1B_MIX_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRZ_D1_EN, top.crz_en, CRZ_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_CRZ_D1_EN, 4, DIPCTL_D1B_CRZ_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRZO_D1_EN, top.crzo_en, CRZO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_CRZO_D1_EN, 4, DIPCTL_D1B_CRZO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRZBO_D1_EN, top.crzbo_en, CRZBO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_CRZBO_D1_EN, 4, DIPCTL_D1B_CRZBO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SRZ_D1_EN, top.srz1_en, SRZ1_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SRZ_D1_EN, 4, DIPCTL_D1B_SRZ_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SRZ_D3_EN, top.srz3_en, SRZ3_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SRZ_D3_EN, 4, DIPCTL_D1B_SRZ_D3_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SRZ_D4_EN, top.srz4_en, SRZ4_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_SRZ_D4_EN, 4, DIPCTL_D1B_SRZ_D4_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DFE_D1_EN, top.dfe_en, DFE_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_DFE_D1_EN, 4, DIPCTL_D1B_DFE_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_FEO_D1_EN, top.feo_en, FEO_EN,, true, DIPCTL_D1A_DIPCTL_DMA_EN1, DIPCTL_FEO_D1_EN, 4, DIPCTL_D1B_FEO_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C02_D1_EN, top.c02_en, C02_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_C02_D1_EN, 4, DIPCTL_D1B_C02_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C02_D2_EN, top.c02d2_en, C02D2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_C02_D2_EN, 4, DIPCTL_D1B_C02_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRSP_D1_EN, top.crsp_en, CRSP_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_CRSP_D1_EN, 4, DIPCTL_D1B_CRSP_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PLNR_D1_EN, top.plnr1_en, PLNR1_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PLNR_D1_EN, 4, DIPCTL_D1B_PLNR_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PLNR_D2_EN, top.plnr2_en, PLNR2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PLNR_D2_EN, 4, DIPCTL_D1B_PLNR_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PLNW_D1_EN, top.plnw1_en, PLNW1_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PLNW_D1_EN, 4, DIPCTL_D1B_PLNW_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PLNW_D2_EN, top.plnw2_en, PLNW2_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_PLNW_D2_EN, 4, DIPCTL_D1B_PLNW_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_BS_D1_EN, top.bs_en, BS_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN2, DIPCTL_BS_D1_EN, 4, DIPCTL_D1A_BS_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_WIF_D2_EN, top.wif2_en, WIF2_EN,, true, DIPCTL_D1A_DIPCTL_RGB_EN1, DIPCTL_WIF_D2_EN, 4, DIPCTL_D1B_WIF_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_YUFD_D1_EN, top.yufd_en, YUFD_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_YUFD_D1_EN, 4, DIPCTL_D1B_YUFD_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UFBCD_D1_EN, top.ufbcd_en, UFBCD_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_UFBCD_D1_EN, 4, DIPCTL_D1B_UFBCD_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_UFBCE_D1_EN, top.ufbce_en, UFBCE_EN,, true, DIPCTL_D1A_DIPCTL_YUV_EN3, DIPCTL_UFBCE_D1_EN, 4, DIPCTL_D1B_UFBCE_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TDR_RSV_D1_EN, top.tdrsv_en, TDRSV_EN,, true, DIPCTL_D1A_DIPCTL_TDR_RESERVE, DIPCTL_TDR_RSV_D1_EN, 4, DIPCTL_D1B_TDR_RSV_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TDR_RSV_D2_EN, top.tdrsv2_en, TDRSV2_EN,, true, DIPCTL_D1A_DIPCTL_TDR_RESERVE, DIPCTL_TDR_RSV_D2_EN, 4, DIPCTL_D1B_TDR_RSV_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TDR_RSVP_D1_EN, top.tdrsvp_en, TDRSVP_EN,, true, DIPCTL_D1A_DIPCTL_TDR_RESERVE, DIPCTL_TDR_RSVP_D1_EN, 4, DIPCTL_D1B_TDR_RSVP_D1_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TDR_RSVP_D2_EN, top.tdrsvp2_en, TDRSVP2_EN,, true, DIPCTL_D1A_DIPCTL_TDR_RESERVE, DIPCTL_TDR_RSVP_D2_EN, 4, DIPCTL_D1B_TDR_RSVP_D2_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TDR_RSVP_DMA_EN, top.tdrsvpi_en, TDRSVPI_EN,, true, DIPCTL_D1A_DIPCTL_TDR_RESERVE, DIPCTL_TDR_RSVP_DMA_EN, 4, DIPCTL_D1B_TDR_RSVP_DMA_EN)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DIP_DL_MSS_EN, top.dl_mss_en, DL_MSS_EN,, true, DIPCTL_D1A_DIPCTL_MISC_SEL, DIPCTL_DIP_DL_MSS_EN, 4, DIPCTL_D1B_DIP_DL_MSS_EN)\
    /* SEL MUX */\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TRAW_SEL, top.traw_sel, TRAW_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1,  DIPCTL_TRAW_SEL, 4, DIPCTL_D1B_TRAW_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PLNR_D1_SEL, top.plnr_sel, PLNR_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2,  DIPCTL_PLNR_D1_SEL, 4, DIPCTL_D1B_PLNR_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_PLNR_D2_SEL, top.plnr2_sel, PLNR2_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2,  DIPCTL_PLNR_D2_SEL, 4, DIPCTL_D1B_PLNR_D2_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_FLC_D1_SEL, top.flc_sel, FLC_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_FLC_D1_SEL, 4, DIPCTL_D1B_FLC_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_DGN_D1_SEL, top.dgn_sel, DGN_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_DGN_D1_SEL, 4, DIPCTL_D1B_DGN_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_LSC_D1_SEL, top.lsc_sel, LSC_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_LSC_D1_SEL, 4, DIPCTL_D1B_LSC_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRP_D2_SEL, top.crp2_sel, CRP2_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_CRP_D2_SEL, 4, DIPCTL_D1B_CRP_D2_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_G2CX_D1_SEL, top.g2cx_sel, G2CX_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_G2CX_D1_SEL, 4, DIPCTL_D1B_G2CX_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_YNR_D1_SEL, top.ynr_sel, YNR_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_YNR_D1_SEL, 4, DIPCTL_D1B_YNR_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_TIMGO_D1_SEL, top.timgo_sel, TIMGO_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_TIMGO_D1_SEL, 4, DIPCTL_D1B_TIMGO_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MIX_D1_SEL, top.mix1_sel, MIX1_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_MIX_D1_SEL, 4, DIPCTL_D1B_MIX_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_C24_D1_SEL, top.c24d1_sel, C24D1_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_C24_D1_SEL, 4, DIPCTL_D1B_C24_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_CRZ_D1_SEL, top.crz_sel, CRZ_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_CRZ_D1_SEL, 4, DIPCTL_D1B_CRZ_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_FE_D1_SEL, top.fe_sel, FE_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_FE_D1_SEL, 4, DIPCTL_D1B_FE_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SRZ_D1_SEL, top.srz_sel, SRZ1_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_SRZ_D1_SEL, 4, DIPCTL_D1B_SRZ_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_FEO_D1_SEL, top.feo_sel, FEO_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_FEO_D1_SEL, 4, DIPCTL_D1B_FEO_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_NR3D_PRE_I_D1_SEL, top.nr3d_pre_i_sel, NR3D_PRE_I_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_NR3D_D1_PRE_I_SEL, 4, DIPCTL_D1B_NR3D_PRE_I_D1_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_MIX_D3_W_SEL, top.mix3_w_sel, MIX3_W_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL2, DIPCTL_MIX_D3_W_SEL, 4, DIPCTL_D1B_MIX_D3_W_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_YNR_D1_MFB_SEL, top.ynr_mfb_sel, YNR_MFB_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1, DIPCTL_YNR_D1_MFB_SEL, 4, DIPCTL_D1B_YNR_D1_MFB_SEL)\
    CMD(a, b, c, d, e, int, SMT_D1A_SMTO_SEL, smt1.smt1o_sel, SMT1O_SEL,, REG_CHECK_EN(c, SMT1_EN), SMT_D1A_SMT_CTL, SMT_SMTO_SEL, 4, SMT_D1B_SMTO_SEL)\
    CMD(a, b, c, d, e, int, SMT_D2A_SMTO_SEL, smt2.smt2o_sel, SMT2O_SEL,, REG_CHECK_EN(c, SMT2_EN), SMT_D2A_SMT_CTL, SMT_SMTO_SEL, 4, SMT_D2B_SMTO_SEL)\
    CMD(a, b, c, d, e, int, SMT_D3A_SMTO_SEL, smt3.smt3o_sel, SMT3O_SEL,, REG_CHECK_EN(c, SMT3_EN), SMT_D3A_SMT_CTL, SMT_SMTO_SEL, 4, SMT_D3B_SMTO_SEL)\
    CMD(a, b, c, d, e, int, SMT_D4A_SMTO_SEL, smt4.smt4o_sel, SMT4O_SEL,, REG_CHECK_EN(c, SMT4_EN), SMT_D4A_SMT_CTL, SMT_SMTO_SEL, 4, SMT_D4B_SMTO_SEL)\
    CMD(a, b, c, d, e, int, SMT_D5A_SMTO_SEL, smt5.smt5o_sel, SMT5O_SEL,, REG_CHECK_EN(c, SMT5_EN), SMT_D5A_SMT_CTL, SMT_SMTO_SEL, 4, SMT_D5B_SMTO_SEL)\
    CMD(a, b, c, d, e, int, SMT_D6A_SMTO_SEL, smt6.smt6o_sel, SMT6O_SEL,, REG_CHECK_EN(c, SMT6_EN), SMT_D6A_SMT_CTL, SMT_SMTO_SEL, 4, SMT_D6B_SMTO_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_SMT_D5_SEL, top.smt5_sel, SMT5_SEL,, true, DIPCTL_D1A_DIPCTL_MUX_SEL1,  DIPCTL_SMT_D5_SEL, 4, DIPCTL_D1B_SMT_D5_SEL)\
    CMD(a, b, c, d, e, int, DIPCTL_D1A_YNR_GMAP_LTM_MODE, top.ynr_gmap_ltm_mode, YNR_GMAP_LTM_MODE,, true, DIPCTL_D1A_YNR_GMAP_LTM_MODE, DIPCTL_D1B_YNR_GMAP_LTM_MODE, 4, DIPCTL_D1B_YNR_GMAP_LTM_MODE)\
    /* IMGI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_IMGI_D1_V_FLIP_EN, imgi.imgi_v_flip_en, IMGI_V_FLIP_EN,, REG_CMP_EQ(c, IMGI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_IMGI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_IMGI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, IMGI_D1A_STRIDE, imgi.imgi_stride, IMGI_STRIDE,, REG_CMP_EQ(c, IMGI_EN, 1), IMGI_D1A_IMGI_STRIDE, IMGI_STRIDE, 4, IMGI_D1B_STRIDE)\
    /* IMGBI_D1 */\
    CMD(a, b, c, d, e, int, IMGBI_D1A_OFST_ADDR, imgbi.imgbi_offset, IMGBI_OFFSET_ADDR,, REG_CMP_EQ(c, LOG_IMGBI_EN, 1), IMGBI_D1A_IMGBI_OFST_ADDR, IMGBI_OFST_ADDR, 0, IMGBI_D1B_OFST_ADDR)\
    CMD(a, b, c, d, e, int, IMGBI_D1A_XSIZE, imgbi.imgbi_xsize, IMGBI_XSIZE,, REG_CMP_EQ(c, LOG_IMGBI_EN, 1), IMGBI_D1A_IMGBI_XSIZE, IMGBI_XSIZE, 0, IMGBI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, IMGBI_D1A_YSIZE, imgbi.imgbi_ysize, IMGBI_YSIZE,, REG_CMP_EQ(c, LOG_IMGBI_EN, 1), IMGBI_D1A_IMGBI_YSIZE, IMGBI_YSIZE, 0, IMGBI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, IMGBI_D1A_STRIDE, imgbi.imgbi_stride, IMGBI_STRIDE,, REG_CMP_EQ(c, IMGBI_EN, 1), IMGBI_D1A_IMGBI_STRIDE, IMGBI_STRIDE, 4, IMGBI_D1B_STRIDE)\
    /* IMGCI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_IMGCI_D1_V_FLIP_EN, imgci.imgci_v_flip_en, IMGCI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_IMGBI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_IMGCI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_IMGCI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, IMGCI_D1A_STRIDE, imgci.imgci_stride, IMGCI_STRIDE,, REG_CMP_EQ(c, LOG_IMGBI_EN, 1), IMGCI_D1A_IMGCI_STRIDE, IMGCI_STRIDE, 4, IMGCI_D1B_STRIDE)\
    /* VIPI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_VIPI_D1_V_FLIP_EN, vipi.vipi_v_flip_en, VIPI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_VIPI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_VIPI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_VIPI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, VIPI_D1A_XSIZE, vipi.vipi_xsize, VIPI_XSIZE,, REG_CMP_EQ(c, LOG_VIPI_EN, 1), VIPI_D1A_VIPI_XSIZE, VIPI_XSIZE, 0, VIPI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, VIPI_D1A_YSIZE, vipi.vipi_ysize, VIPI_YSIZE,, REG_CMP_EQ(c, LOG_VIPI_EN, 1), VIPI_D1A_VIPI_YSIZE, VIPI_YSIZE, 0, VIPI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, VIPI_D1A_STRIDE, vipi.vipi_stride, VIPI_STRIDE,, REG_CMP_EQ(c, VIPI_EN, 1), VIPI_D1A_VIPI_STRIDE, VIPI_STRIDE, 4, VIPI_D1B_STRIDE)\
    /* VIPBI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_VIPBI_D1_V_FLIP_EN, vipbi.vipbi_v_flip_en, VIPBI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_VIPBI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_VIPBI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_VIPBI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, VIPBI_D1A_XSIZE, vipbi.vipbi_xsize, VIPBI_XSIZE,, REG_CMP_EQ(c, LOG_VIPBI_EN, 1), VIPBI_D1A_VIPBI_XSIZE, VIPBI_XSIZE, 0, VIPBI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, VIPBI_D1A_YSIZE, vipbi.vipbi_ysize, VIPBI_YSIZE,, REG_CMP_EQ(c, LOG_VIPBI_EN, 1), VIPBI_D1A_VIPBI_YSIZE, VIPBI_YSIZE, 0, VIPBI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, VIPBI_D1A_STRIDE, vipbi.vipbi_stride, VIPBI_STRIDE,, REG_CMP_EQ(c, VIPBI_EN, 1), VIPBI_D1A_VIPBI_STRIDE, VIPBI_STRIDE, 4, VIPBI_D1B_STRIDE)\
    /* VIPCI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_VIPCI_D1_V_FLIP_EN, vipci.vipci_v_flip_en, VIPCI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_VIPCI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_VIPCI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_VIPCI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, VIPCI_D1A_XSIZE, vipci.vipci_xsize, VIPCI_XSIZE,, REG_CMP_EQ(c, LOG_VIPI_EN, 1), VIPCI_D1A_VIPCI_XSIZE, VIPCI_XSIZE, 0, VIPCI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, VIPCI_D1A_YSIZE, vipci.vipci_ysize, VIPCI_YSIZE,, REG_CMP_EQ(c, LOG_VIPI_EN, 1), VIPCI_D1A_VIPCI_YSIZE, VIPCI_YSIZE, 0, VIPCI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, VIPCI_D1A_STRIDE, vipci.vipci_stride, VIPCI_STRIDE,, REG_CMP_EQ(c, VIPI_EN, 1), VIPCI_D1A_VIPCI_STRIDE, VIPCI_STRIDE, 4, VIPCI_D1B_STRIDE)\
    /* UFDI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_UFDI_D1_V_FLIP_EN, ufdi.ufdi_v_flip_en, UFDI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_UFDI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_UFDI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_UFDI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, UFDI_D1A_XSIZE, ufdi.ufdi_xsize, UFDI_XSIZE,, REG_CMP_EQ(c, LOG_UFDI_EN, 1), UFDI_D1A_UFDI_XSIZE, UFDI_XSIZE, 0, UFDI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, UFDI_D1A_YSIZE, ufdi.ufdi_ysize, UFDI_YSIZE,, REG_CMP_EQ(c, LOG_UFDI_EN, 1), UFDI_D1A_UFDI_YSIZE, UFDI_YSIZE, 0, UFDI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, UFDI_D1A_STRIDE, ufdi.ufdi_stride, UFDI_STRIDE,, REG_CMP_EQ(c, LOG_UFDI_EN, 1), UFDI_D1A_UFDI_STRIDE, UFDI_STRIDE, 4, UFDI_D1B_STRIDE)\
    /* DMGI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_DMGI_D1_V_FLIP_EN, dmgi.dmgi_v_flip_en, DMGI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_DMGI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_DMGI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_DMGI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, DMGI_D1A_XSIZE, dmgi.dmgi_xsize, DMGI_XSIZE,, REG_CMP_EQ(c, LOG_DMGI_EN, 1), DMGI_D1A_DMGI_XSIZE, DMGI_XSIZE, 0, DMGI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, DMGI_D1A_YSIZE, dmgi.dmgi_ysize, DMGI_YSIZE,, REG_CMP_EQ(c, LOG_DMGI_EN, 1), DMGI_D1A_DMGI_YSIZE, DMGI_YSIZE, 0, DMGI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, DMGI_D1A_STRIDE, dmgi.dmgi_stride, DMGI_STRIDE,, REG_CMP_EQ(c, LOG_DMGI_EN, 1), DMGI_D1A_DMGI_STRIDE, DMGI_STRIDE, 4, DMGI_D1B_STRIDE)\
    /* DEPI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_DEPI_D1_V_FLIP_EN, depi.depi_v_flip_en, DEPI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_DEPI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_DEPI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_DEPI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, DEPI_D1A_XSIZE, depi.depi_xsize, DEPI_XSIZE,, REG_CMP_EQ(c, LOG_DEPI_EN, 1), DEPI_D1A_DEPI_XSIZE, DEPI_XSIZE, 1, DEPI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, DEPI_D1A_YSIZE, depi.depi_ysize, DEPI_YSIZE,, REG_CMP_EQ(c, LOG_DEPI_EN, 1), DEPI_D1A_DEPI_YSIZE, DEPI_YSIZE,1, DEPI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, DEPI_D1A_STRIDE, depi.depi_stride, DEPI_STRIDE,, REG_CMP_EQ(c, LOG_DEPI_EN, 1), DEPI_D1A_DEPI_STRIDE, DEPI_STRIDE, 4, DEPI_D1B_STRIDE)\
    /* LCEI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_LCEI_D1_V_FLIP_EN, lcei.lcei_v_flip_en, LCEI_V_FLIP_EN,, REG_CMP_EQ(c, LOG_LCEI_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_LCEI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_LCEI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, LCEI_D1A_XSIZE, lcei.lcei_xsize, LCEI_XSIZE,, REG_CMP_EQ(c, LOG_LCEI_EN, 1), LCEI_D1A_LCEI_XSIZE, LCEI_XSIZE, 0, LCEI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, LCEI_D1A_YSIZE, lcei.lcei_ysize, LCEI_YSIZE,, REG_CMP_EQ(c, LOG_LCEI_EN, 1), LCEI_D1A_LCEI_YSIZE, LCEI_YSIZE, 0, LCEI_D1B_YSIZE)\
    CMD(a, b, c, d, e, int, LCEI_D1A_STRIDE, lcei.lcei_stride, LCEI_STRIDE,, REG_CMP_EQ(c, LOG_LCEI_EN, 1), LCEI_D1A_LCEI_STRIDE, LCEI_STRIDE, 4, LCEI_D1B_STRIDE)\
    /* LCE_D1 */\
    CMD(a, b, c, d, e, int, LCE_D1A_LC_TONE, lce.lce_lc_tone, LCE_LC_TONE,, REG_CMP_EQ(c, LOG_LCE_EN, 1), LCE_D1A_LCE_GLOBAL, LCE_LC_TONE, 4, LCE_D1B_LC_TONE)\
    CMD(a, b, c, d, e, int, LCE_D1A_SLM_WD, lce.lce_slm_width, LCE_SLM_WIDTH,, REG_CMP_EQ(c, LOG_LCE_EN, 1), LCE_D1A_LCE_SLM_SIZE, LCE_SLM_WD, 0, LCE_D1B_SLM_WD)\
    CMD(a, b, c, d, e, int, LCE_D1A_SLM_HT, lce.lce_slm_height, LCE_SLM_HEIGHT,, REG_CMP_EQ(c, LOG_LCE_EN, 1), LCE_D1A_LCE_SLM_SIZE, LCE_SLM_HT, 0, LCE_D1B_SLM_HT)\
    CMD(a, b, c, d, e, int, LCE_D1A_BCMK_X, lce.lce_bc_mag_kubnx, LCE_BCMK_X,, REG_CMP_EQ(c, LOG_LCE_EN, 1), LCE_D1A_LCE_ZR, LCE_BCMK_X, 4, LCE_D1B_BCMK_X)\
    CMD(a, b, c, d, e, int, LCE_D1A_BCMK_Y, lce.lce_bc_mag_kubny, LCE_BCMK_Y,, REG_CMP_EQ(c, LOG_LCE_EN, 1), LCE_D1A_LCE_ZR, LCE_BCMK_Y, 4, LCE_D1B_BCMK_Y)\
    /* UNP_D2 */\
    CMD(a, b, c, d, e, int, UNP_D2A_YUV_BIT, unp2.yuv_bit, UNP2_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT2_EN, 1), UNP_D1A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D2B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D2A_YUV_DNG, unp2.yuv_dng, UNP2_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT2_EN, 1), UNP_D1A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D2B_YUV_DNG)\
    /* UNP_D3 */\
    CMD(a, b, c, d, e, int, UNP_D3A_YUV_BIT, unp3.yuv_bit, UNP3_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT3_EN, 1), UNP_D3A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D3B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D3A_YUV_DNG, unp3.yuv_dng, UNP3_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT3_EN, 1), UNP_D3A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D3B_YUV_DNG)\
    /* UNP_D4 */\
    CMD(a, b, c, d, e, int, UNP_D4A_YUV_BIT, unp4.yuv_bit, UNP4_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT4_EN, 1), UNP_D4A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D4B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D4A_YUV_DNG, unp4.yuv_dng, UNP4_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT4_EN, 1), UNP_D4A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D4B_YUV_DNG)\
    /* UNP_D5 */\
    CMD(a, b, c, d, e, int, UNP_D5A_YUV_BIT, unp5.yuv_bit, UNP5_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT5_EN, 1), UNP_D5A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D5B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D5A_YUV_DNG, unp5.yuv_dng, UNP5_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT5_EN, 1), UNP_D5A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D5B_YUV_DNG)\
    /* UNP_D6 */\
    CMD(a, b, c, d, e, int, UNP_D6A_YUV_BIT, unp6.yuv_bit, UNP6_YUV_BIT,, REG_CMP_EQ(c, LOG_UNP6_EN, 1), UNP_D6A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D6B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D6A_YUV_DNG, unp6.yuv_dng, UNP6_YUV_DNG,, REG_CMP_EQ(c, LOG_UNP6_EN, 1), UNP_D6A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D6B_YUV_DNG)\
    /* UNP_D7 */\
    CMD(a, b, c, d, e, int, UNP_D7A_YUV_BIT, unp7.yuv_bit, UNP7_YUV_BIT,, REG_CMP_EQ(c, LOG_UNP7_EN, 1), UNP_D7A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D7B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D7A_YUV_DNG, unp7.yuv_dng, UNP7_YUV_DNG,, REG_CMP_EQ(c, LOG_UNP7_EN, 1), UNP_D7A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D7B_YUV_DNG)\
    /* UNP_D8 */\
    CMD(a, b, c, d, e, int, UNP_D8A_YUV_BIT, unp8.yuv_bit, UNP8_YUV_BIT,, REG_CMP_EQ(c, LOG_UNP8_EN, 1), UNP_D8A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D8B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D8A_YUV_DNG, unp8.yuv_dng, UNP8_YUV_DNG,, REG_CMP_EQ(c, LOG_UNP8_EN, 1), UNP_D8A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D8B_YUV_DNG)\
    /* UNP_D9 */\
    CMD(a, b, c, d, e, int, UNP_D9A_YUV_BIT, unp9.yuv_bit, UNP9_YUV_BIT,, REG_CMP_EQ(c, LOG_UNP9_EN, 1), UNP_D9A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D9B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D9A_YUV_DNG, unp9.yuv_dng, UNP9_YUV_DNG,, REG_CMP_EQ(c, LOG_UNP9_EN, 1), UNP_D9A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D9B_YUV_DNG)\
    /* UNP_D10 */\
    CMD(a, b, c, d, e, int, UNP_D10A_YUV_BIT, unp10.yuv_bit, UNP10_YUV_BIT,, REG_CMP_EQ(c, LOG_UNP10_EN, 1), UNP_D10A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D10B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D10A_YUV_DNG, unp10.yuv_dng, UNP10_YUV_DNG,, REG_CMP_EQ(c, LOG_UNP10_EN, 1), UNP_D10A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D10B_YUV_DNG)\
    /* UNP_D11 */\
    CMD(a, b, c, d, e, int, UNP_D11A_YUV_BIT, unp11.yuv_bit, UNP11_YUV_BIT,, REG_CMP_EQ(c, LOG_UNP11_EN, 1), UNP_D11A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D11B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D11A_YUV_DNG, unp11.yuv_dng, UNP11_YUV_DNG,, REG_CMP_EQ(c, LOG_UNP11_EN, 1), UNP_D11A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D11B_YUV_DNG)\
    /* UNP_D16 */\
    CMD(a, b, c, d, e, int, UNP_D16A_YUV_BIT, unp16.yuv_bit, UNP16_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT6_EN, 1), UNP_D16A_UNP_CONT, UNP_YUV_BIT, 4, UNP_D16B_YUV_BIT)\
    CMD(a, b, c, d, e, int, UNP_D16A_YUV_DNG, unp16.yuv_dng, UNP16_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT6_EN, 1), UNP_D16A_UNP_CONT, UNP_YUV_DNG, 4, UNP_D16B_YUV_DNG)\
    /* PAK_D2 */\
    CMD(a, b, c, d, e, int, PAK_D2A_YUV_BIT, pak2.yuv_bit, PAK2_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT2_EN, 1), PAK_D2A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D2B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D2A_YUV_DNG, pak2.yuv_dng, PAK2_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT2_EN, 1), PAK_D2A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D2B_YUV_DNG)\
    /* PAK_D3 */\
    CMD(a, b, c, d, e, int, PAK_D3A_YUV_BIT, pak3.yuv_bit, PAK3_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT3_EN, 1), PAK_D3A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D3B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D3A_YUV_DNG, pak3.yuv_dng, PAK3_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT3_EN, 1), PAK_D3A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D3B_YUV_DNG)\
    /* PAK_D4 */\
    CMD(a, b, c, d, e, int, PAK_D4A_YUV_BIT, pak4.yuv_bit, PAK4_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT4_EN, 1), PAK_D4A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D4B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D4A_YUV_DNG, pak4.yuv_dng, PAK4_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT4_EN, 1), PAK_D4A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D4B_YUV_DNG)\
    /* PAK_D5 */\
    CMD(a, b, c, d, e, int, PAK_D5A_YUV_BIT, pak5.yuv_bit, PAK5_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT5_EN, 1), PAK_D5A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D5B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D5A_YUV_DNG, pak5.yuv_dng, PAK5_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT5_EN, 1), PAK_D5A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D5B_YUV_DNG)\
    /* PAK_D6 */\
    CMD(a, b, c, d, e, int, PAK_D6A_YUV_BIT, pak6.yuv_bit, PAK6_YUV_BIT,, REG_CMP_EQ(c, LOG_PAK6_EN, 1), PAK_D6A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D6B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D6A_YUV_DNG, pak6.yuv_dng, PAK6_YUV_DNG,, REG_CMP_EQ(c, LOG_PAK6_EN, 1), PAK_D6A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D6B_YUV_DNG)\
    /* PAK_D7 */\
    CMD(a, b, c, d, e, int, PAK_D7A_YUV_BIT, pak7.yuv_bit, PAK7_YUV_BIT,, REG_CMP_EQ(c, LOG_PAK7_EN, 1), PAK_D7A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D7B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D7A_YUV_DNG, pak7.yuv_dng, PAK7_YUV_DNG,, REG_CMP_EQ(c, LOG_PAK7_EN, 1), PAK_D7A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D7B_YUV_DNG)\
    /* PAK_D8 */\
    CMD(a, b, c, d, e, int, PAK_D8A_YUV_BIT, pak8.yuv_bit, PAK8_YUV_BIT,, REG_CMP_EQ(c, LOG_PAK8_EN, 1), PAK_D8A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D8B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D8A_YUV_DNG, pak8.yuv_dng, PAK8_YUV_DNG,, REG_CMP_EQ(c, LOG_PAK8_EN, 1), PAK_D8A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D8B_YUV_DNG)\
    /* PAK_D16 */\
    CMD(a, b, c, d, e, int, PAK_D16A_YUV_BIT, pak16.yuv_bit, PAK16_YUV_BIT,, REG_CMP_EQ(c, LOG_SMT6_EN, 1), PAK_D16A_PAK_CONT, PAK_YUV_BIT, 4, PAK_D16B_YUV_BIT)\
    CMD(a, b, c, d, e, int, PAK_D16A_YUV_DNG, pak16.yuv_dng, PAK16_YUV_DNG,, REG_CMP_EQ(c, LOG_SMT6_EN, 1), PAK_D16A_PAK_CONT, PAK_YUV_DNG, 4, PAK_D16B_YUV_DNG)\
    /* DM_D1 */\
    CMD(a, b, c, d, e, int, DM_D1A_BYP, dm.dm_byp, DM_BYP,, REG_CMP_EQ(c, LOG_DM_EN, 1), DM_D1A_DM_INTP_CRS, DM_BYP, 4, DM_D1B_BYP)\
    /* YNR_D1 */\
    CMD(a, b, c, d, e, int, YNR_D1A_ENY, ynr.eny, YNR_ENY,, REG_CMP_EQ(c, LOG_YNR_EN, 1), YNR_D1A_YNR_CON1, YNR_ENY, 4, YNR_D1B_ENY)\
    CMD(a, b, c, d, e, int, YNR_D1A_ENC, ynr.enc, YNR_ENC,, REG_CMP_EQ(c, LOG_YNR_EN, 1), YNR_D1A_YNR_CON1, YNR_ENC, 4, YNR_D1B_ENC)\
    CMD(a, b, c, d, e, int, YNR_D1A_VIDEO_MODE, ynr.video_mode, YNR_VIDEO_MODE,, REG_CMP_EQ(c, LOG_YNR_EN, 1), YNR_D1A_YNR_CON1, YNR_VIDEO_MODE, 4, YNR_D1B_VIDEO_MODE)\
    CMD(a, b, c, d, e, int, YNR_D1A_LCE_LINK, ynr.lce_link, YNR_LCE_LINK,, REG_CMP_EQ(c, LOG_YNR_EN, 1), YNR_D1A_YNR_CON1, YNR_LCE_LINK, 4, YNR_D1B_LCE_LINK)\
    CMD(a, b, c, d, e, int, YNR_D1A_SKIN_LINK, ynr.skin_link, YNR_SKIN_LINK,, REG_CMP_EQ(c, LOG_YNR_EN, 1), YNR_D1A_YNR_SKIN_CON, YNR_SKIN_LINK, 4, YNR_D1B_SKIN_LINK)\
    CMD(a, b, c, d, e, int, YNR_D1A_MSF_LINK, ynr.msf_link, YNR_MSF_LINK,, REG_CMP_EQ(c, LOG_YNR_EN, 1), YNR_D1A_YNR_CON1, YNR_MSF_LINK, 4, YNR_D1B_MSF_LINK)\
    /* EE_D1 */\
    CMD(a, b, c, d, e, int, EE_D1A_OUT_EDGE_SEL, ee.ee_out_edge_sel, EE_OUT_EDGE_SEL,, REG_CMP_EQ(c, LOG_YNR_EN, 1), EE_D1A_EE_TOP_CTRL, EE_OUT_EDGE_SEL, 4, EE_D1B_OUT_EDGE_SEL)\
    /* CNR_D1 */\
    CMD(a, b, c, d, e, int, CNR_D1A_BPC_EN, cnr.bpc_en, CNR_BPC_EN,, REG_CMP_EQ(c, LOG_CNR_EN, 1), CNR_D1A_CNR_CNR_CON1, CNR_BPC_EN, 4, CNR_D1B_BPC_EN)\
    CMD(a, b, c, d, e, int, CNR_D1A_CNR_ENC, cnr.enc, CNR_ENC,, REG_CMP_EQ(c, LOG_CNR_EN, 1), CNR_D1A_CNR_CNR_CON1, CNR_CNR_ENC, 4, CNR_D1B_CNR_ENC)\
    CMD(a, b, c, d, e, int, CNR_D1A_VIDEO_MODE, cnr.video_mode, CNR_VIDEO_MODE,, REG_CMP_EQ(c, LOG_CNR_EN, 1), CNR_D1A_CNR_CNR_CON1, CNR_VIDEO_MODE, 4, CNR_D1B_VIDEO_MODE)\
    CMD(a, b, c, d, e, int, CNR_D1A_MODE, cnr.mode, CNR_MODE,, REG_CMP_EQ(c, LOG_CNR_EN, 1), CNR_D1A_CNR_CNR_CON1, CNR_MODE, 4, CNR_D1B_MODE)\
    CMD(a, b, c, d, e, int, CNR_D1A_CNR_SCALE_MODE, cnr.scale_mode, CNR_SCALE_MODE,, REG_CMP_EQ(c, LOG_CNR_EN, 1), CNR_D1A_CNR_CNR_CON1, CNR_CNR_SCALE_MODE, 4, CNR_D1B_CNR_SCALE_MODE)\
    CMD(a, b, c, d, e, int, CNR_D1A_ABF_EN, cnr.abf_en, CNR_ABF_EN,, REG_CMP_EQ(c, LOG_CNR_EN, 1), CNR_D1A_CNR_ABF_CON1, CNR_ABF_EN, 4, CNR_D1B_ABF_EN)\
    /* TIMGO_D1 */\
    CMD(a, b, c, d, e, int, TIMGO_D1A_STRIDE, timgo.timgo_stride, TIMGO_STRIDE,, REG_CMP_EQ(c, LOG_TIMGO_EN, 1), TIMGO_D1A_TIMGO_STRIDE, TIMGO_STRIDE, 4, TIMGO_D1B_STRIDE)\
    CMD(a, b, c, d, e, int, TIMGO_D1A_XOFFSET, timgo.timgo_xoffset, TIMGO_XOFFSET,, REG_CMP_EQ(c, LOG_TIMGO_EN, 1), TIMGO_D1A_TIMGO_CROP, TIMGO_XOFFSET, 0, TIMGO_D1B_XOFFSET)\
    CMD(a, b, c, d, e, int, TIMGO_D1A_YOFFSET, timgo.timgo_yoffset, TIMGO_YOFFSET,, REG_CMP_EQ(c, LOG_TIMGO_EN, 1), TIMGO_D1A_TIMGO_CROP, TIMGO_YOFFSET, 0, TIMGO_D1B_YOFFSET)\
    CMD(a, b, c, d, e, int, TIMGO_D1A_XSIZE, timgo.timgo_xsize, TIMGO_XSIZE,, REG_CMP_EQ(c, LOG_TIMGO_EN, 1), TIMGO_D1A_TIMGO_XSIZE, TIMGO_XSIZE, 0, TIMGO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, TIMGO_D1A_YSIZE, timgo.timgo_ysize, TIMGO_YSIZE,, REG_CMP_EQ(c, LOG_TIMGO_EN, 1), TIMGO_D1A_TIMGO_YSIZE, TIMGO_YSIZE, 0, TIMGO_D1B_YSIZE)\
    /* IMG3O_D1 */\
    CMD(a, b, c, d, e, int, IMG3O_D1A_STRIDE, img3o.img3o_stride, IMG3O_STRIDE,, REG_CMP_EQ(c, LOG_IMG3O_EN, 1), IMG3O_D1A_IMG3O_STRIDE, IMG3O_STRIDE, 4, IMG3O_D1B_STRIDE)\
    CMD(a, b, c, d, e, int, IMG3O_D1A_XOFFSET, img3o.img3o_xoffset, IMG3O_XOFFSET,, REG_CMP_EQ(c, LOG_IMG3O_EN, 1), IMG3O_D1A_IMG3O_CROP, IMG3O_XOFFSET, 0, IMG3O_D1B_XOFFSET)\
    CMD(a, b, c, d, e, int, IMG3O_D1A_YOFFSET, img3o.img3o_yoffset, IMG3O_YOFFSET,, REG_CMP_EQ(c, LOG_IMG3O_EN, 1), IMG3O_D1A_IMG3O_CROP, IMG3O_YOFFSET, 0, IMG3O_D1B_YOFFSET)\
    CMD(a, b, c, d, e, int, IMG3O_D1A_XSIZE, img3o.img3o_xsize, IMG3O_XSIZE,, REG_CMP_EQ(c, LOG_IMG3O_EN, 1), IMG3O_D1A_IMG3O_XSIZE, IMG3O_XSIZE, 0, IMG3O_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, IMG3O_D1A_YSIZE, img3o.img3o_ysize, IMG3O_YSIZE,, REG_CMP_EQ(c, LOG_IMG3O_EN, 1), IMG3O_D1A_IMG3O_YSIZE, IMG3O_YSIZE, 0, IMG3O_D1B_YSIZE)\
    /* IMG3BO_D1 */\
    CMD(a, b, c, d, e, int, IMG3BO_D1A_STRIDE, img3bo.img3bo_stride, IMG3BO_STRIDE,, REG_CMP_EQ(c, LOG_IMG3BO_EN, 1), IMG3BO_D1A_IMG3BO_STRIDE, IMG3BO_STRIDE, 4, IMG3BO_D1B_STRIDE)\
    CMD(a, b, c, d, e, int, IMG3BO_D1A_XSIZE, img3bo.img3bo_xsize, IMG3BO_XSIZE,, REG_CMP_EQ(c, LOG_IMG3BO_EN, 1), IMG3BO_D1A_IMG3BO_XSIZE, IMG3BO_XSIZE, 0, IMG3BO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, IMG3BO_D1A_YSIZE, img3bo.img3bo_ysize, IMG3BO_YSIZE,, REG_CMP_EQ(c, LOG_IMG3BO_EN, 1), IMG3BO_D1A_IMG3BO_YSIZE, IMG3BO_YSIZE, 0, IMG3BO_D1B_YSIZE)\
    /* IMG3CO_D1 */\
    CMD(a, b, c, d, e, int, IMG3CO_D1A_STRIDE, img3co.img3co_stride, IMG3CO_STRIDE,, REG_CMP_EQ(c, LOG_IMG3CO_EN, 1), IMG3CO_D1A_IMG3CO_STRIDE, IMG3CO_STRIDE, 4, IMG3CO_D1B_STRIDE)\
    CMD(a, b, c, d, e, int, IMG3CO_D1A_XSIZE, img3co.img3co_xsize, IMG3CO_XSIZE,, REG_CMP_EQ(c, LOG_IMG3CO_EN, 1), IMG3CO_D1A_IMG3CO_XSIZE, IMG3CO_XSIZE, 0, IMG3CO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, IMG3CO_D1A_YSIZE, img3co.img3co_ysize, IMG3CO_YSIZE,, REG_CMP_EQ(c, LOG_IMG3CO_EN, 1), IMG3CO_D1A_IMG3CO_YSIZE, IMG3CO_YSIZE, 0, IMG3CO_D1B_YSIZE)\
    /* CRZO_D1 */\
    CMD(a, b, c, d, e, int, CRZO_D1A_STRIDE, crzo.crzo_stride, CRZO_STRIDE,, REG_CMP_EQ(c, LOG_CRZO_EN, 1), CRZO_D1A_CRZO_STRIDE, CRZO_STRIDE, 4, CRZO_D1B_STRIDE)\
    CMD(a, b, c, d, e, int, CRZO_D1A_XOFFSET, crzo.crzo_xoffset, CRZO_XOFFSET,, REG_CMP_EQ(c, LOG_CRZO_EN, 1), CRZO_D1A_CRZO_CROP, CRZO_XOFFSET, 0, CRZO_D1B_XOFFSET)\
    CMD(a, b, c, d, e, int, CRZO_D1A_YOFFSET, crzo.crzo_yoffset, CRZO_YOFFSET,, REG_CMP_EQ(c, LOG_CRZO_EN, 1), CRZO_D1A_CRZO_CROP, CRZO_YOFFSET, 0, CRZO_D1B_YOFFSET)\
    CMD(a, b, c, d, e, int, CRZO_D1A_XSIZE, crzo.crzo_xsize, CRZO_XSIZE,, REG_CMP_EQ(c, LOG_CRZO_EN, 1), CRZO_D1A_CRZO_XSIZE, CRZO_XSIZE, 0, CRZO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, CRZO_D1A_YSIZE, crzo.crzo_ysize, CRZO_YSIZE,, REG_CMP_EQ(c, LOG_CRZO_EN, 1), CRZO_D1A_CRZO_YSIZE, CRZO_YSIZE, 0, CRZO_D1B_YSIZE)\
    /* CRZBO_D1 */\
    CMD(a, b, c, d, e, int, CRZBO_D1A_STRIDE, crzbo.crzbo_stride, CRZBO_STRIDE,, REG_CMP_EQ(c, LOG_CRZBO_EN, 1), CRZBO_D1A_CRZBO_STRIDE, CRZBO_STRIDE, 4, CRZBO_D1B_STRIDE)\
    CMD(a, b, c, d, e, int, CRZBO_D1A_XSIZE, crzbo.crzbo_xsize, CRZBO_XSIZE,, REG_CMP_EQ(c, LOG_CRZBO_EN, 1), CRZBO_D1A_CRZBO_XSIZE, CRZBO_XSIZE, 0, CRZBO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, CRZBO_D1A_YSIZE, crzbo.crzbo_ysize, CRZBO_YSIZE,, REG_CMP_EQ(c, LOG_CRZBO_EN, 1), CRZBO_D1A_CRZBO_YSIZE, CRZBO_YSIZE, 0, CRZBO_D1B_YSIZE)\
    /* UFD_D1 */\
    CMD(a, b, c, d, e, int, UFD_D1A_SEL, ufd.ufd_sel, ufd_sel,, true, UFD_D1A_UFD_CON, UFD_SEL, 4, UFD_D1B_SEL)\
    CMD(a, b, c, d, e, int, UFD_D1A_BOND_MODE, ufd.ufd_bond_mode, ufd_bond_mode,, true, UFD_D1A_UFD_BS2_AU_CON, UFD_BOND_MODE, 0, UFD_D1B_BOND_MODE)\
    CMD(a, b, c, d, e, int, UFD_D1A_BS2_AU_START, ufd.ufd_bs2_au_start, ufd_bs2_au_start,, true, UFD_D1A_UFD_BS2_AU_CON, UFD_BS2_AU_START, 0, UFD_D1B_BS2_AU_START)\
    CMD(a, b, c, d, e, int, UFD_D1A_BOND2_MODE, ufd.ufd_bond2_mode, ufd_bond2_mode,, true, UFD_D1A_UFD_BS3_AU_CON, UFD_BOND2_MODE, 0, UFD_D1B_BOND2_MODE)\
    CMD(a, b, c, d, e, int, UFD_D1A_BS3_AU_START, ufd.ufd_bs3_au_start, ufd_bs3_au_start,, true, UFD_D1A_UFD_BS3_AU_CON, UFD_BS3_AU_START, 0, UFD_D1B_BS3_AU_START)\
    /* YUFD_D1 */\
    CMD(a, b, c, d, e, int, YUFD_D1A_CODE_MODE, yufd.yufd_code_mode, yufd_code_mode,, true, YUFD_D1A_YUFD_CON, YUFD_CODE_MODE, 4, YUFD_D1B_CODE_MODE)\
    CMD(a, b, c, d, e, int, YUFD_D1A_BOND_MODE_L, yufd.yufd_bond_mode, yufd_bond_mode,, true, YUFD_D1A_YUFD_BS2_AU_CON_L, YUFD_BOND_MODE_L, 0, YUFD_D1B_BOND_MODE_L)\
    CMD(a, b, c, d, e, int, YUFD_D1A_BS2_AU_START_L, yufd.yufd_bs2_au_start, yufd_bs2_au_start,, true, YUFD_D1A_YUFD_BS2_AU_CON_L, YUFD_BS2_AU_START_L, 0, YUFD_D1B_BS2_AU_START_L)\
    CMD(a, b, c, d, e, int, YUFD_D1A_BOND2_MODE_L, yufd.yufd_bond2_mode, yufd_bond2_mode,, true, YUFD_D1A_YUFD_BS3_AU_CON_L, YUFD_BOND2_MODE_L, 0, YUFD_D1B_BOND2_MODE_L)\
    CMD(a, b, c, d, e, int, YUFD_D1A_BS3_AU_START_L, yufd.yufd_bs3_au_start, yufd_bs3_au_start,, true, YUFD_D1A_YUFD_BS3_AU_CON_L, YUFD_BS3_AU_START_L, 0, YUFD_D1B_BS3_AU_START_L)\
    /* SLK_D1 */\
    CMD(a, b, c, d, e, int, SLK_D1A_HRZ_COMP, slk1.slk_hrz_comp, SLK1_HRZ_COMP,, REG_CMP_EQ(c, LOG_SLK1_EN, 1), SLK_D1A_SLK_RZ, SLK_HRZ_COMP, 4, SLK_D1B_HRZ_COMP)\
    CMD(a, b, c, d, e, int, SLK_D1A_VRZ_COMP, slk1.slk_vrz_comp, SLK1_VRZ_COMP,, REG_CMP_EQ(c, LOG_SLK1_EN, 1), SLK_D1A_SLK_RZ, SLK_VRZ_COMP, 4, SLK_D1B_VRZ_COMP)\
    /* SLK_D2 */\
    CMD(a, b, c, d, e, int, SLK_D2A_HRZ_COMP, slk2.slk_hrz_comp, SLK2_HRZ_COMP,, REG_CMP_EQ(c, LOG_SLK2_EN, 1), SLK_D2A_SLK_RZ, SLK_HRZ_COMP, 4, SLK_D2B_HRZ_COMP)\
    CMD(a, b, c, d, e, int, SLK_D2A_VRZ_COMP, slk2.slk_vrz_comp, SLK2_VRZ_COMP,, REG_CMP_EQ(c, LOG_SLK2_EN, 1), SLK_D2A_SLK_RZ, SLK_VRZ_COMP, 4, SLK_D2B_VRZ_COMP)\
    /* SLK_D3 */\
    CMD(a, b, c, d, e, int, SLK_D3A_HRZ_COMP, slk3.slk_hrz_comp, SLK3_HRZ_COMP,, REG_CMP_EQ(c, LOG_SLK3_EN, 1), SLK_D3A_SLK_RZ, SLK_HRZ_COMP, 4, SLK_D3B_HRZ_COMP)\
    CMD(a, b, c, d, e, int, SLK_D3A_VRZ_COMP, slk3.slk_vrz_comp, SLK3_VRZ_COMP,, REG_CMP_EQ(c, LOG_SLK3_EN, 1), SLK_D3A_SLK_RZ, SLK_VRZ_COMP, 4, SLK_D3B_VRZ_COMP)\
    /* SLK_D4 */\
    CMD(a, b, c, d, e, int, SLK_D4A_HRZ_COMP, slk4.slk_hrz_comp, SLK4_HRZ_COMP,, REG_CMP_EQ(c, LOG_SLK4_EN, 1), SLK_D4A_SLK_RZ, SLK_HRZ_COMP, 4, SLK_D4B_HRZ_COMP)\
    CMD(a, b, c, d, e, int, SLK_D4A_VRZ_COMP, slk4.slk_vrz_comp, SLK4_VRZ_COMP,, REG_CMP_EQ(c, LOG_SLK4_EN, 1), SLK_D4A_SLK_RZ, SLK_VRZ_COMP, 4, SLK_D4B_VRZ_COMP)\
    /* SLK_D5 */\
    CMD(a, b, c, d, e, int, SLK_D5A_HRZ_COMP, slk5.slk_hrz_comp, SLK5_HRZ_COMP,, REG_CMP_EQ(c, LOG_SLK5_EN, 1), SLK_D5A_SLK_RZ, SLK_HRZ_COMP, 4, SLK_D5B_HRZ_COMP)\
    CMD(a, b, c, d, e, int, SLK_D5A_VRZ_COMP, slk5.slk_vrz_comp, SLK5_VRZ_COMP,, REG_CMP_EQ(c, LOG_SLK5_EN, 1), SLK_D5A_SLK_RZ, SLK_VRZ_COMP, 4, SLK_D5B_VRZ_COMP)\
    /* SLK_D6 */\
    CMD(a, b, c, d, e, int, SLK_D6A_HRZ_COMP, slk6.slk_hrz_comp, SLK6_HRZ_COMP,, REG_CMP_EQ(c, LOG_SLK6_EN, 1), SLK_D6A_SLK_RZ, SLK_HRZ_COMP, 4, SLK_D6B_HRZ_COMP)\
    CMD(a, b, c, d, e, int, SLK_D6A_VRZ_COMP, slk6.slk_vrz_comp, SLK6_VRZ_COMP,, REG_CMP_EQ(c, LOG_SLK6_EN, 1), SLK_D6A_SLK_RZ, SLK_VRZ_COMP, 4, SLK_D6B_VRZ_COMP)\
    /* LSC_D1 */\
    CMD(a, b, c, d, e, int, LSC_D1A_EXTEND_COEF_MODE, lsc.extend_coef_mode, EXTEND_COEF_MODE,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_CTL1, LSC_EXTEND_COEF_MODE, 4, LSC_D1B_EXTEND_COEF_MODE)\
    CMD(a, b, c, d, e, int, LSC_D1A_SDBLK_XNUM, lsc.sdblk_xnum, SDBLK_XNUM,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_CTL2, LSC_SDBLK_XNUM, 0, LSC_D1B_SDBLK_XNUM)\
    CMD(a, b, c, d, e, int, LSC_D1A_SDBLK_YNUM, lsc.sdblk_ynum, SDBLK_YNUM,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_CTL3, LSC_SDBLK_YNUM, 0, LSC_D1B_SDBLK_YNUM)\
    CMD(a, b, c, d, e, int, LSC_D1A_SDBLK_WIDTH, lsc.sdblk_width, SDBLK_WIDTH,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_CTL2, LSC_SDBLK_WIDTH, 4, LSC_D1B_SDBLK_WIDTH)\
    CMD(a, b, c, d, e, int, LSC_D1A_SDBLK_HEIGHT, lsc.sdblk_height, SDBLK_HEIGHT,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_CTL3, LSC_SDBLK_HEIGHT, 4, LSC_D1B_SDBLK_HEIGHT)\
    CMD(a, b, c, d, e, int, LSC_D1A_SDBLK_lWIDTH, lsc.sdblk_last_width, SDBLK_LWIDTH,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_LBLOCK, LSC_SDBLK_lWIDTH, 0, LSC_D1B_SDBLK_lWIDTH)\
    CMD(a, b, c, d, e, int, LSC_D1A_SDBLK_lHEIGHT, lsc.sdblk_last_height, SDBLK_LHEIGHT,, REG_CMP_EQ(c, LOG_LSC_EN, 1), LSC_D1A_LSC_LBLOCK, LSC_SDBLK_lHEIGHT, 0, LSC_D1B_SDBLK_lHEIGHT)\
    /* LTM_D1 */\
    CMD(a, b, c, d, e, int, LTM_D1A_BLK_X_NUM, ltm.blk_x_num, LTMBLK_XNUM,, REG_CMP_EQ(c, LOG_LTM_EN, 1), LTM_D1A_LTM_BLK_NUM, LTM_BLK_X_NUM, 4, LTM_D1B_BLK_X_NUM)\
    CMD(a, b, c, d, e, int, LTM_D1A_BLK_Y_NUM, ltm.blk_y_num, LTMBLK_YNUM,, REG_CMP_EQ(c, LOG_LTM_EN, 1), LTM_D1A_LTM_BLK_NUM, LTM_BLK_Y_NUM, 4, LTM_D1B_BLK_Y_NUM)\
    CMD(a, b, c, d, e, int, LTM_D1A_BLK_WIDTH, ltm.blk_width, LTMBLK_WIDTH,, REG_CMP_EQ(c, LOG_LTM_EN, 1), LTM_D1A_LTM_BLK_SZ, LTM_BLK_WIDTH, 4, LTM_D1B_BLK_WIDTH)\
    CMD(a, b, c, d, e, int, LTM_D1A_BLK_HEIGHT, ltm.blk_height, LTMBLK_HEIGHT,, REG_CMP_EQ(c, LOG_LTM_EN, 1), LTM_D1A_LTM_BLK_SZ, LTM_BLK_HEIGHT, 4, LTM_D1B_BLK_HEIGHT)\
   /* G2CX_D1 */\
    CMD(a, b, c, d, e, int, G2CX_D1A_SHADE_EN, g2cx.g2cx_shade_en, G2CX_SHADE_EN,, REG_CMP_EQ(c, LOG_G2CX_EN, 1), G2CX_D1A_G2CX_SHADE_CON_1, G2CX_SHADE_EN, 4, G2CX_D1B_SHADE_EN)\
    CMD(a, b, c, d, e, int, G2CX_D1A_SHADE_XMID, g2cx.g2cx_shade_xmid, G2CX_SHADE_XMID,, REG_CMP_EQ(c, LOG_G2CX_EN, 1), G2CX_D1A_G2CX_SHADE_TAR, G2CX_SHADE_XMID, 0, G2CX_D1B_SHADE_XMID)\
    CMD(a, b, c, d, e, int, G2CX_D1A_SHADE_YMID, g2cx.g2cx_shade_ymid, G2CX_SHADE_YMID,, REG_CMP_EQ(c, LOG_G2CX_EN, 1), G2CX_D1A_G2CX_SHADE_TAR, G2CX_SHADE_YMID, 0, G2CX_D1B_SHADE_YMID)\
    CMD(a, b, c, d, e, int, G2CX_D1A_SHADE_VAR, g2cx.g2cx_shade_var, G2CX_SHADE_VAR,, REG_CMP_EQ(c, LOG_G2CX_EN, 1), G2CX_D1A_G2CX_SHADE_CON_1, G2CX_SHADE_VAR, 0, G2CX_D1B_SHADE_VAR)\
    /* DCES_D1 */\
    CMD(a, b, c, d, e, int, DCES_D1A_CROP_XSTART, dces.dces_crop_xstart, DCES_CROP_XSTART,, REG_CMP_EQ(c, LOG_DCES_EN, 1), DCES_D1A_DCES_CROP_X, DCES_CROP_XSTART, 0, DCES_D1B_CROP_XSTART)\
    CMD(a, b, c, d, e, int, DCES_D1A_CROP_XEND, dces.dces_crop_xend, DCES_CROP_XEND,, REG_CMP_EQ(c, LOG_DCES_EN, 1), DCES_D1A_DCES_CROP_X, DCES_CROP_XEND, 0, DCES_D1B_CROP_XEND)\
    CMD(a, b, c, d, e, int, DCES_D1A_CROP_YSTART, dces.dces_crop_ystart, DCES_CROP_YSTART,, REG_CMP_EQ(c, LOG_DCES_EN, 1), DCES_D1A_DCES_CROP_Y, DCES_CROP_YSTART, 0, DCES_D1B_CROP_YSTART)\
    CMD(a, b, c, d, e, int, DCES_D1A_CROP_YEND, dces.dces_crop_yend, DCES_CROP_YEND,, REG_CMP_EQ(c, LOG_DCES_EN, 1), DCES_D1A_DCES_CROP_Y, DCES_CROP_YEND, 0, DCES_D1B_CROP_YEND)\
    /* DCESO_D1 */\
    CMD(a, b, c, d, e, int, DCESO_D1A_XSIZE, dceso.dceso_xsize, DCESO_XSIZE,, REG_CMP_EQ(c, LOG_DCESO_EN, 1), DCESO_D1A_DCESO_XSIZE, DCESO_XSIZE, 4, DCESO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, DCESO_D1A_YSIZE, dceso.dceso_ysize, DCESO_YSIZE,, REG_CMP_EQ(c, LOG_DCESO_EN, 1), DCESO_D1A_DCESO_YSIZE, DCESO_YSIZE, 4, DCESO_D1B_YSIZE)\
    /* SRZ_D1 */\
    CMD(a, b, c, d, e, int, SRZ_D1A_IN_CROP_WD, srz1.srz_input_crop_width, SRZ1_Input_Image_W,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_IN_IMG, SRZ_IN_WD, 0, SRZ_D1B_IN_CROP_WD)\
    CMD(a, b, c, d, e, int, SRZ_D1A_IN_CROP_HT, srz1.srz_input_crop_height, SRZ1_Input_Image_H,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_IN_IMG, SRZ_IN_HT, 0, SRZ_D1B_IN_CROP_HT)\
    CMD(a, b, c, d, e, int, SRZ_D1A_OUT_WD, srz1.srz_output_width, SRZ1_Output_Image_W,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_OUT_IMG, SRZ_OUT_WD, 0, SRZ_D1B_OUT_WD)\
    CMD(a, b, c, d, e, int, SRZ_D1A_OUT_HT, srz1.srz_output_height, SRZ1_Output_Image_H,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_OUT_IMG, SRZ_OUT_HT, 0, SRZ_D1B_OUT_HT)\
    CMD(a, b, c, d, e, int, SRZ_D1A_HORI_INT_OFST, srz1.srz_luma_horizontal_integer_offset, SRZ1_Luma_Horizontal_Integer_Offset,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_HORI_INT_OFST, SRZ_HORI_INT_OFST, 0, SRZ_D1B_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D1A_HORI_SUB_OFST, srz1.srz_luma_horizontal_subpixel_offset, SRZ1_Luma_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_HORI_SUB_OFST, SRZ_HORI_SUB_OFST, 0, SRZ_D1B_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D1A_VERT_INT_OFST, srz1.srz_luma_vertical_integer_offset, SRZ1_Luma_Vertical_Integer_Offset,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_VERT_INT_OFST, SRZ_VERT_INT_OFST, 0, SRZ_D1B_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D1A_VERT_SUB_OFST, srz1.srz_luma_vertical_subpixel_offset, SRZ1_Luma_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_VERT_SUB_OFST, SRZ_VERT_SUB_OFST, 0, SRZ_D1B_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D1A_HORI_STEP, srz1.srz_horizontal_coeff_step, SRZ1_Horizontal_Coeff_Step,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_HORI_STEP, SRZ_HORI_STEP, 4, SRZ_D1B_HORI_STEP)\
    CMD(a, b, c, d, e, int, SRZ_D1A_VERT_STEP, srz1.srz_vertical_coeff_step, SRZ1_Vertical_Coeff_Step,, REG_CMP_EQ(c, LOG_SRZ1_EN, 1), SRZ_D1A_SRZ_VERT_STEP, SRZ_VERT_STEP, 4, SRZ_D1B_VERT_STEP)\
    /* SRZ_D3 */\
    CMD(a, b, c, d, e, int, SRZ_D3A_IN_CROP_WD, srz3.srz_input_crop_width, SRZ3_Input_Image_W,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_IN_IMG, SRZ_IN_WD, 0, SRZ_D3B_IN_CROP_WD)\
    CMD(a, b, c, d, e, int, SRZ_D3A_IN_CROP_HT, srz3.srz_input_crop_height, SRZ3_Input_Image_H,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_IN_IMG, SRZ_IN_HT, 0, SRZ_D3B_IN_CROP_HT)\
    CMD(a, b, c, d, e, int, SRZ_D3A_OUT_WD, srz3.srz_output_width, SRZ3_Output_Image_W,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_OUT_IMG, SRZ_OUT_WD, 0, SRZ_D3B_OUT_WD)\
    CMD(a, b, c, d, e, int, SRZ_D3A_OUT_HT, srz3.srz_output_height, SRZ3_Output_Image_H,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_OUT_IMG, SRZ_OUT_HT, 0, SRZ_D3B_OUT_HT)\
    CMD(a, b, c, d, e, int, SRZ_D3A_HORI_INT_OFST, srz3.srz_luma_horizontal_integer_offset, SRZ3_Luma_Horizontal_Integer_Offset,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_HORI_INT_OFST, SRZ_HORI_INT_OFST, 0, SRZ_D3B_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D3A_HORI_SUB_OFST, srz3.srz_luma_horizontal_subpixel_offset, SRZ3_Luma_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_HORI_SUB_OFST, SRZ_HORI_SUB_OFST, 0, SRZ_D3B_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D3A_VERT_INT_OFST, srz3.srz_luma_vertical_integer_offset, SRZ3_Luma_Vertical_Integer_Offset,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_VERT_INT_OFST, SRZ_VERT_INT_OFST, 0, SRZ_D3B_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D3A_VERT_SUB_OFST, srz3.srz_luma_vertical_subpixel_offset, SRZ3_Luma_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_VERT_SUB_OFST, SRZ_VERT_SUB_OFST, 0, SRZ_D3B_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D3A_HORI_STEP, srz3.srz_horizontal_coeff_step, SRZ3_Horizontal_Coeff_Step,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_HORI_STEP, SRZ_HORI_STEP, 4, SRZ_D3B_HORI_STEP)\
    CMD(a, b, c, d, e, int, SRZ_D3A_VERT_STEP, srz3.srz_vertical_coeff_step, SRZ3_Vertical_Coeff_Step,, REG_CMP_EQ(c, LOG_SRZ3_EN, 1), SRZ_D3A_SRZ_VERT_STEP, SRZ_VERT_STEP, 4, SRZ_D3B_VERT_STEP)\
    /* SRZ_D4 */\
    CMD(a, b, c, d, e, int, SRZ_D4A_IN_CROP_WD, srz4.srz_input_crop_width, SRZ4_Input_Image_W,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_IN_IMG, SRZ_IN_WD, 0, SRZ_D4B_IN_CROP_WD)\
    CMD(a, b, c, d, e, int, SRZ_D4A_IN_CROP_HT, srz4.srz_input_crop_height, SRZ4_Input_Image_H,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_IN_IMG, SRZ_IN_HT, 0, SRZ_D4B_IN_CROP_HT)\
    CMD(a, b, c, d, e, int, SRZ_D4A_OUT_WD, srz4.srz_output_width, SRZ4_Output_Image_W,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_OUT_IMG, SRZ_OUT_WD, 0, SRZ_D4B_OUT_WD)\
    CMD(a, b, c, d, e, int, SRZ_D4A_OUT_HT, srz4.srz_output_height, SRZ4_Output_Image_H,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_OUT_IMG, SRZ_OUT_HT, 0, SRZ_D4B_OUT_HT)\
    CMD(a, b, c, d, e, int, SRZ_D4A_HORI_INT_OFST, srz4.srz_luma_horizontal_integer_offset, SRZ4_Luma_Horizontal_Integer_Offset,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_HORI_INT_OFST, SRZ_HORI_INT_OFST, 0, SRZ_D4B_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D4A_HORI_SUB_OFST, srz4.srz_luma_horizontal_subpixel_offset, SRZ4_Luma_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_HORI_SUB_OFST, SRZ_HORI_SUB_OFST, 0, SRZ_D4B_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D4A_VERT_INT_OFST, srz4.srz_luma_vertical_integer_offset, SRZ4_Luma_Vertical_Integer_Offset,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_VERT_INT_OFST, SRZ_VERT_INT_OFST, 0, SRZ_D4B_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D4A_VERT_SUB_OFST, srz4.srz_luma_vertical_subpixel_offset, SRZ4_Luma_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_VERT_SUB_OFST, SRZ_VERT_SUB_OFST, 0, SRZ_D4B_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, SRZ_D4A_HORI_STEP, srz4.srz_horizontal_coeff_step, SRZ4_Horizontal_Coeff_Step,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_HORI_STEP, SRZ_HORI_STEP, 4, SRZ_D4B_HORI_STEP)\
    CMD(a, b, c, d, e, int, SRZ_D4A_VERT_STEP, srz4.srz_vertical_coeff_step, SRZ4_Vertical_Coeff_Step,, REG_CMP_EQ(c, LOG_SRZ4_EN, 1), SRZ_D4A_SRZ_VERT_STEP, SRZ_VERT_STEP, 4, SRZ_D4B_VERT_STEP)\
    /* CRZ_D1 */\
    CMD(a, b, c, d, e, int, CRZ_D1A_crop_size_x_d, crz.crz_input_crop_width, CRZ_Input_Image_W,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_IN_IMG, CRZ_IN_WD, 0, CRZ_D1B_crop_size_x_d)\
    CMD(a, b, c, d, e, int, CRZ_D1A_crop_size_y_d, crz.crz_input_crop_height, CRZ_Input_Image_H,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_IN_IMG, CRZ_IN_HT, 0, CRZ_D1B_crop_size_y_d)\
    CMD(a, b, c, d, e, int, CRZ_D1A_OUT_WD, crz.crz_output_width, CRZ_Output_Image_W,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_OUT_IMG, CRZ_OUT_WD, 0, CRZ_D1B_OUT_WD)\
    CMD(a, b, c, d, e, int, CRZ_D1A_OUT_HT, crz.crz_output_height, CRZ_Output_Image_H,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_OUT_IMG, CRZ_OUT_HT, 0, CRZ_D1B_OUT_HT)\
    CMD(a, b, c, d, e, int, CRZ_D1A_LUMA_HORI_INT_OFST, crz.crz_luma_horizontal_integer_offset, CRZ_Luma_Horizontal_Integer_Offset,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_LUMA_HORI_INT_OFST, CRZ_LUMA_HORI_INT_OFST, 0, CRZ_D1B_LUMA_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, CRZ_D1A_LUMA_HORI_SUB_OFST, crz.crz_luma_horizontal_subpixel_offset, CRZ_Luma_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_LUMA_HORI_SUB_OFST, CRZ_LUMA_HORI_SUB_OFST, 0, CRZ_D1B_LUMA_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, CRZ_D1A_LUMA_VERT_INT_OFST, crz.crz_luma_vertical_integer_offset, CRZ_Luma_Vertical_Integer_Offset,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_LUMA_VERT_INT_OFST, CRZ_LUMA_VERT_INT_OFST, 0, CRZ_D1B_LUMA_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, CRZ_D1A_LUMA_VERT_SUB_OFST, crz.crz_luma_vertical_subpixel_offset, CRZ_Luma_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_LUMA_VERT_SUB_OFST, CRZ_LUMA_VERT_SUB_OFST, 0, CRZ_D1B_LUMA_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, CRZ_D1A_HORI_ALGO, crz.crz_horizontal_luma_algorithm, CRZ_Horizontal_Luma_Algorithm,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_CONTROL, CRZ_HORI_ALGO, 4, CRZ_D1B_HORI_ALGO)\
    CMD(a, b, c, d, e, int, CRZ_D1A_VERT_ALGO, crz.crz_vertical_luma_algorithm, CRZ_Vertical_Luma_Algorithm,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_CONTROL, CRZ_VERT_ALGO, 4, CRZ_D1B_VERT_ALGO)\
    CMD(a, b, c, d, e, int, CRZ_D1A_HORI_STEP, crz.crz_horizontal_coeff_step, CRZ_Horizontal_Coeff_Step,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_HORI_STEP, CRZ_HORI_STEP, 4, CRZ_D1B_HORI_STEP)\
    CMD(a, b, c, d, e, int, CRZ_D1A_VERT_STEP, crz.crz_vertical_coeff_step, CRZ_Vertical_Coeff_Step,, REG_CMP_EQ(c, LOG_CRZ_EN, 1), CRZ_D1A_CRZ_VERT_STEP, CRZ_VERT_STEP, 4, CRZ_D1B_VERT_STEP)\
    /* DFE_D1 */\
    CMD(a, b, c, d, e, int, DFE_D1A_MODE, dfe.dfe_mode, DFE_MODE,, REG_CMP_EQ(c, LOG_DFE_EN, 1), DFE_D1A_DFE_FE_CTRL1, DFE_MODE, 4, DFE_D1B_MODE)\
    /* FEO_D1 */\
    CMD(a, b, c, d, e, int, FEO_D1A_STRIDE, feo.feo_stride, FEO_STRIDE,, REG_CMP_EQ(c, LOG_FEO_EN, 1), FEO_D1A_FEO_STRIDE, FEO_STRIDE, 4, FEO_D1B_STRIDE)\
    /* NR3D_D1 */\
    CMD(a, b, c, d, e, int, NR3D_D1A_snr_en, nr3d.nr3d_snr_en, NR3D_SNR_EN,, REG_CMP_EQ(c, LOG_NR3D_EN, 1), NR3D_D1A_NR3D_NR3D_SNR_CONTROL_1, NR3D_snr_en, 4, NR3D_D1B_snr_en)\
    CMD(a, b, c, d, e, int, NR3D_D1A_on_en, nr3d.nr3d_on_en, NR3D_ON_EN,, REG_CMP_EQ(c, LOG_NR3D_EN, 1), NR3D_D1A_NR3D_NR3D_ON_CON, NR3D_on_en, 4, NR3D_D1B_on_en)\
    CMD(a, b, c, d, e, int, NR3D_D1A_nr3d_on_ofst_x, nr3d.nr3d_on_xoffset, NR3D_ON_OFST_X,, REG_CMP_EQ(c, LOG_NR3D_EN, 1), NR3D_D1A_NR3D_NR3D_ON_OFF, NR3D_nr3d_on_ofst_x, 0, NR3D_D1B_nr3d_on_ofst_x)\
    CMD(a, b, c, d, e, int, NR3D_D1A_nr3d_on_ofst_y, nr3d.nr3d_on_yoffset, NR3D_ON_OFST_Y,, REG_CMP_EQ(c, LOG_NR3D_EN, 1), NR3D_D1A_NR3D_NR3D_ON_OFF, NR3D_nr3d_on_ofst_y, 0, NR3D_D1B_nr3d_on_ofst_y)\
    CMD(a, b, c, d, e, int, NR3D_D1A_nr3d_on_wd, nr3d.nr3d_on_width, NR3D_ON_WD,, REG_CMP_EQ(c, LOG_NR3D_EN, 1), NR3D_D1A_NR3D_NR3D_ON_SIZ, NR3D_nr3d_on_wd, 0, NR3D_D1B_nr3d_on_wd)\
    CMD(a, b, c, d, e, int, NR3D_D1A_nr3d_on_ht, nr3d.nr3d_on_height, NR3D_ON_HT,, REG_CMP_EQ(c, LOG_NR3D_EN, 1), NR3D_D1A_NR3D_NR3D_ON_SIZ, NR3D_nr3d_on_ht, 0, NR3D_D1B_nr3d_on_ht)\
    /* CRSP_D1 */\
    CMD(a, b, c, d, e, int, CRSP_D1A_cstep_y, crsp.crsp_ystep, CRSP_STEP_Y,, REG_CMP_EQ(c, LOG_CRSP_EN, 1), CRSP_D1A_CRSP_STEP_OFST, CRSP_STEP_Y, 4, CRSP_D1B_cstep_y)\
    CMD(a, b, c, d, e, int, CRSP_D1A_offset_x, crsp.crsp_xoffset, CRSP_OFST_X,, REG_CMP_EQ(c, LOG_CRSP_EN, 1), CRSP_D1A_CRSP_STEP_OFST, CRSP_OFST_X, 0, CRSP_D1B_offset_x)\
    CMD(a, b, c, d, e, int, CRSP_D1A_offset_y, crsp.crsp_yoffset, CRSP_OFST_Y,, REG_CMP_EQ(c, LOG_CRSP_EN, 1), CRSP_D1A_CRSP_STEP_OFST, CRSP_OFST_Y, 0, CRSP_D1B_offset_y)\
    /* SMTI_D1 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_SMTI_D1_V_FLIP_EN, smt1i.smt1i_v_flip_en, SMT1I_V_FLIP_EN,, REG_CMP_EQ(c, SMT1I_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_SMTI_D1_V_FLIP_EN, 4, DIPDMATOP_D1B_SMTI_D1_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, SMTI_D1A_XSIZE, smt1i.smt1i_xsize, SMT1I_XSIZE,, REG_CMP_EQ(c, SMT1I_EN, 1), SMTI_D1A_SMTI_XSIZE, SMTI_XSIZE, 0, SMTI_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTI_D1A_YSIZE, smt1i.smt1i_ysize, SMT1I_YSIZE,, REG_CMP_EQ(c, SMT1I_EN, 1), SMTI_D1A_SMTI_YSIZE, SMTI_YSIZE, 0, SMTI_D1B_YSIZE)\
    /* SMTO_D1 */\
    CMD(a, b, c, d, e, int, SMTO_D1A_XSIZE, smt1o.smt1o_xsize, SMT1O_XSIZE,, REG_CMP_EQ(c, SMT1O_EN, 1), SMTO_D1A_SMTO_XSIZE, SMTO_XSIZE, 0, SMTO_D1B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTO_D1A_YSIZE, smt1o.smt1o_ysize, SMT1O_YSIZE,, REG_CMP_EQ(c, SMT1O_EN, 1), SMTO_D1A_SMTO_YSIZE, SMTO_YSIZE, 0, SMTO_D1B_YSIZE)\
    /* SMTI_D2 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_SMTI_D2_V_FLIP_EN, smt2i.smt2i_v_flip_en, SMT2I_V_FLIP_EN,, REG_CMP_EQ(c, SMT2I_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_SMTI_D2_V_FLIP_EN, 4, DIPDMATOP_D1B_SMTI_D2_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, SMTI_D2A_XSIZE, smt2i.smt2i_xsize, SMT2I_XSIZE,, REG_CMP_EQ(c, SMT2I_EN, 1), SMTI_D2A_SMTI_XSIZE, SMTI_XSIZE, 0, SMTI_D2B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTI_D2A_YSIZE, smt2i.smt2i_ysize, SMT2I_YSIZE,, REG_CMP_EQ(c, SMT2I_EN, 1), SMTI_D2A_SMTI_YSIZE, SMTI_YSIZE, 0, SMTI_D2B_YSIZE)\
    /* SMTO_D2 */\
    CMD(a, b, c, d, e, int, SMTO_D2A_XSIZE, smt2o.smt2o_xsize, SMT2O_XSIZE,, REG_CMP_EQ(c, SMT2O_EN, 1), SMTO_D2A_SMTO_XSIZE, SMTO_XSIZE, 0, SMTO_D2B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTO_D2A_YSIZE, smt2o.smt2o_ysize, SMT2O_YSIZE,, REG_CMP_EQ(c, SMT2O_EN, 1), SMTO_D2A_SMTO_YSIZE, SMTO_YSIZE, 0, SMTO_D2B_YSIZE)\
    /* SMTI_D3 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_SMTI_D3_V_FLIP_EN, smt3i.smt3i_v_flip_en, SMT3I_V_FLIP_EN,, REG_CMP_EQ(c, SMT3I_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_SMTI_D3_V_FLIP_EN, 4, DIPDMATOP_D1B_SMTI_D3_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, SMTI_D3A_XSIZE, smt3i.smt3i_xsize, SMT3I_XSIZE,, REG_CMP_EQ(c, SMT3I_EN, 1), SMTI_D3A_SMTI_XSIZE, SMTI_XSIZE, 0, SMTI_D3B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTI_D3A_YSIZE, smt3i.smt3i_ysize, SMT3I_YSIZE,, REG_CMP_EQ(c, SMT3I_EN, 1), SMTI_D3A_SMTI_YSIZE, SMTI_YSIZE, 0, SMTI_D3B_YSIZE)\
    /* SMTO_D3 */\
    CMD(a, b, c, d, e, int, SMTO_D3A_XSIZE, smt3o.smt3o_xsize, SMT3O_XSIZE,, REG_CMP_EQ(c, SMT3O_EN, 1), SMTO_D3A_SMTO_XSIZE, SMTO_XSIZE, 0, SMTO_D3B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTO_D3A_YSIZE, smt3o.smt3o_ysize, SMT3O_YSIZE,, REG_CMP_EQ(c, SMT3O_EN, 1), SMTO_D3A_SMTO_YSIZE, SMTO_YSIZE, 0, SMTO_D3B_YSIZE)\
    /* SMTI_D4 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_SMTI_D4_V_FLIP_EN, smt4i.smt4i_v_flip_en, SMT4I_V_FLIP_EN,, REG_CMP_EQ(c, SMT4I_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_SMTI_D4_V_FLIP_EN, 4, DIPDMATOP_D1B_SMTI_D4_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, SMTI_D4A_XSIZE, smt4i.smt4i_xsize, SMT4I_XSIZE,, REG_CMP_EQ(c, SMT4I_EN, 1), SMTI_D4A_SMTI_XSIZE, SMTI_XSIZE, 0, SMTI_D4B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTI_D4A_YSIZE, smt4i.smt4i_ysize, SMT4I_YSIZE,, REG_CMP_EQ(c, SMT4I_EN, 1), SMTI_D4A_SMTI_YSIZE, SMTI_YSIZE, 0, SMTI_D4B_YSIZE)\
    /* SMTO_D4 */\
    CMD(a, b, c, d, e, int, SMTO_D4A_XSIZE, smt4o.smt4o_xsize, SMT4O_XSIZE,, REG_CMP_EQ(c, SMT4O_EN, 1), SMTO_D4A_SMTO_XSIZE, SMTO_XSIZE, 0, SMTO_D4B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTO_D4A_YSIZE, smt4o.smt4o_ysize, SMT4O_YSIZE,, REG_CMP_EQ(c, SMT4O_EN, 1), SMTO_D4A_SMTO_YSIZE, SMTO_YSIZE, 0, SMTO_D4B_YSIZE)\
    /* SMTI_D5 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_SMTI_D5_V_FLIP_EN, smt5i.smt5i_v_flip_en, SMT5I_V_FLIP_EN,, REG_CMP_EQ(c, SMT5I_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_SMTI_D5_V_FLIP_EN, 4, DIPDMATOP_D1B_SMTI_D5_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, SMTI_D5A_XSIZE, smt5i.smt5i_xsize, SMT5I_XSIZE,, REG_CMP_EQ(c, SMT5I_EN, 1), SMTI_D5A_SMTI_XSIZE, SMTI_XSIZE, 0, SMTI_D5B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTI_D5A_YSIZE, smt5i.smt5i_ysize, SMT5I_YSIZE,, REG_CMP_EQ(c, SMT5I_EN, 1), SMTI_D5A_SMTI_YSIZE, SMTI_YSIZE, 0, SMTI_D5B_YSIZE)\
    /* SMTO_D5 */\
    CMD(a, b, c, d, e, int, SMTO_D5A_XSIZE, smt5o.smt5o_xsize, SMT5O_XSIZE,, REG_CMP_EQ(c, SMT5O_EN, 1), SMTO_D5A_SMTO_XSIZE, SMTO_XSIZE, 0, SMTO_D5B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTO_D5A_YSIZE, smt5o.smt5o_ysize, SMT5O_YSIZE,, REG_CMP_EQ(c, SMT5O_EN, 1), SMTO_D5A_SMTO_YSIZE, SMTO_YSIZE, 0, SMTO_D5B_YSIZE)\
    /* SMTI_D6 */\
    CMD(a, b, c, d, e, int, DIPDMATOP_D1A_SMTI_D6_V_FLIP_EN, smt6i.smt6i_v_flip_en, SMT6I_V_FLIP_EN,, REG_CMP_EQ(c, SMT6I_EN, 1), DIPDMATOP_D1A_DIPDMATOP_VERTICAL_FLIP_EN, DIPDMATOP_SMTI_D6_V_FLIP_EN, 4, DIPDMATOP_D1B_SMTI_D6_V_FLIP_EN)\
    CMD(a, b, c, d, e, int, SMTI_D6A_XSIZE, smt6i.smt6i_xsize, SMT6I_XSIZE,, REG_CMP_EQ(c, SMT6I_EN, 1), SMTI_D6A_SMTI_XSIZE, SMTI_XSIZE, 0, SMTI_D6B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTI_D6A_YSIZE, smt6i.smt6i_ysize, SMT6I_YSIZE,, REG_CMP_EQ(c, SMT6I_EN, 1), SMTI_D6A_SMTI_YSIZE, SMTI_YSIZE, 0, SMTI_D6B_YSIZE)\
    /* SMTO_D6 */\
    CMD(a, b, c, d, e, int, SMTO_D6A_XSIZE, smt6o.smt6o_xsize, SMT6O_XSIZE,, REG_CMP_EQ(c, SMT6O_EN, 1), SMTO_D6A_SMTO_XSIZE, SMTO_XSIZE, 0, SMTO_D6B_XSIZE)\
    CMD(a, b, c, d, e, int, SMTO_D6A_YSIZE, smt6o.smt6o_ysize, SMT6O_YSIZE,, REG_CMP_EQ(c, SMT6O_EN, 1), SMTO_D6A_SMTO_YSIZE, SMTO_YSIZE, 0, SMTO_D6B_YSIZE)\
    /* CRP_D1 */\
    CMD(a, b, c, d, e, int, CRP_D1A_XSTART, crp1.crop_xstart, CRP1_XSTART,, REG_CMP_EQ(c, CRP_EN, 1), CRP_D1A_CRP_X_POS, CRP_XSTART, 0, CRP_D1B_XSTART)\
    CMD(a, b, c, d, e, int, CRP_D1A_XEND, crp1.crop_xend, CRP1_XEND,, REG_CMP_EQ(c, CRP_EN, 1), CRP_D1A_CRP_X_POS, CRP_XEND, 0, CRP_D1B_XEND)\
    CMD(a, b, c, d, e, int, CRP_D1A_YSTART, crp1.crop_ystart, CRP1_YSTART,, REG_CMP_EQ(c, CRP_EN, 1), CRP_D1A_CRP_Y_POS, CRP_YSTART, 0, CRP_D1B_YSTART)\
    CMD(a, b, c, d, e, int, CRP_D1A_YEND, crp1.crop_yend, CRP1_YEND,, REG_CMP_EQ(c, CRP_EN, 1), CRP_D1A_CRP_Y_POS, CRP_YEND, 0, CRP_D1B_YEND)\

/* register table (Cmodel, platform, tile driver) for HW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care, 4: shold compare isp_reg and reg map in program */
#define WPE_TILE_HW_REG_LUT(CMD, a, b, c, d, e) \

/* register table (Cmodel, platform, tile driver) for HW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care, 4: shold compare isp_reg and reg map in program */
#define MFB_TILE_HW_REG_LUT(CMD, a, b, c, d, e) \
    /* Common */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_slk_en, msf.slk_en, MSF_SLK_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_slk_en, 4, MFB_D1B_MFBTOP_rdma_baseiy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_baseiy_en, msf.rdma_baseiy_en, MSF_RDMA_BASEIY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_baseiy_en, 4, MFB_D1B_MFBTOP_csr_slk_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_baseic_en, msf.rdma_baseic_en, MSF_RDMA_BASEIC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_baseic_en, 4, MFB_D1B_MFBTOP_rdma_baseic_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_refiy_en, msf.rdma_refiy_en, MSF_RDMA_REFIY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_refiy_en, 4, MFB_D1B_MFBTOP_rdma_refiy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_refic_en, msf.rdma_refic_en, MSF_RDMA_REFIC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_refic_en, 4, MFB_D1B_MFBTOP_rdma_refic_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_dsiy_en, msf.rdma_dsiy_en, MSF_RDMA_DSIY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_dsiy_en, 4, MFB_D1B_MFBTOP_rdma_dsiy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_dsic_en, msf.rdma_dsic_en, MSF_RDMA_DSIC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_dsic_en, 4, MFB_D1B_MFBTOP_rdma_dsic_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_idiy_en, msf.rdma_idiy_en, MSF_RDMA_IDIY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_idiy_en, 4, MFB_D1B_MFBTOP_rdma_idiy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_idic_en, msf.rdma_idic_en, MSF_RDMA_IDIC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_idic_en, 4, MFB_D1B_MFBTOP_rdma_idic_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_wei_en, msf.rdma_wei_en, MSF_RDMA_WEI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_wei_en, 4, MFB_D1B_MFBTOP_rdma_wei_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_dswi_en, msf.rdma_dswi_en, MSF_RDMA_DSWI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_dswi_en, 4, MFB_D1B_MFBTOP_rdma_dswi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_rdma_confi_en, msf.rdma_confi_en, MSF_RDMA_CONFI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_rdma_confi_en, 4, MFB_D1B_MFBTOP_rdma_confi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_lpf_baseiy_en, msf.lpf_baseiy_en, MSF_LPF_BASEIY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_lpf_baseiy_en, 4, MFB_D1B_MFBTOP_csr_lpf_baseiy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_lpf_baseic_en, msf.lpf_baseic_en, MSF_LPF_BASEIC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_lpf_baseic_en, 4, MFB_D1B_MFBTOP_csr_lpf_baseic_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_lpf_refiy_en, msf.lpf_refiy_en, MSF_LPF_REFIY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_lpf_refiy_en, 4, MFB_D1B_MFBTOP_csr_lpf_refiy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_lpf_refic_en, msf.lpf_refic_en, MSF_LPF_REFIC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_lpf_refic_en, 4, MFB_D1B_MFBTOP_csr_lpf_refic_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_yurz_dsi_en, msf.yurz_dsi_en, MSF_YURZ_DSI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_yurz_dsi_en, 4, MFB_D1B_MFBTOP_csr_yurz_dsi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_curz_dsi_en, msf.curz_dsi_en, MSF_CURZ_DSI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_curz_dsi_en, 4, MFB_D1B_MFBTOP_csr_curz_dsi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_yurz_idi_en, msf.yurz_idi_en, MSF_YURZ_IDI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_yurz_idi_en, 4, MFB_D1B_MFBTOP_csr_yurz_idi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_curz_idi_en, msf.curz_idi_en, MSF_CURZ_IDI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_curz_idi_en, 4, MFB_D1B_MFBTOP_csr_curz_idi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_yurz_dswi_en, msf.yurz_dswi_en, MSF_YURZ_DSWI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_yurz_dswi_en, 4, MFB_D1B_MFBTOP_csr_yurz_dswi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_yurz_confi_en, msf.yurz_confi_en, MSF_YURZ_CONFI_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_yurz_confi_en, 4, MFB_D1B_MFBTOP_csr_yurz_confi_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_crp_y_en, msf.crp_y_en, MSF_CRP_FSO_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_crp_y_en, 4, MFB_D1B_MFBTOP_csr_crp_y_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_crp_w_en, msf.crp_w_en, MSF_CRP_WEO_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_crp_w_en, 4, MFB_D1B_MFBTOP_csr_crp_w_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_crp_m_en, msf.crp_m_en, MSF_CRP_DSWO_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_crp_m_en, 4, MFB_D1B_MFBTOP_csr_crp_m_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_csr_crsp_en, msf.crsp_en, MSF_CRSP_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_ENG_EN, MFBTOP_csr_crsp_en, 4, MFB_D1B_MFBTOP_csr_crsp_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_wdma_fsoy_en, msf.wdma_fsoy_en, MSF_WDMA_FSOY_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_wdma_fsoy_en, 4, MFB_D1B_MFBTOP_wdma_fsoy_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_wdma_fsoc_en, msf.wdma_fsoc_en, MSF_WDMA_FSOC_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_wdma_fsoc_en, 4, MFB_D1B_MFBTOP_wdma_fsoc_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_wdma_weo_en, msf.wdma_weo_en, MSF_WDMA_WEO_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_wdma_weo_en, 4, MFB_D1B_MFBTOP_wdma_weo_en)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBTOP_wdma_dswo_en, msf.wdma_dswo_en, MSF_WDMA_DSWO_EN,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBTOP_DMA_EN, MFBTOP_wdma_dswo_en, 4, MFB_D1B_MFBTOP_wdma_dswo_en)\
    /* MSF_RDMA_BASEIY */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_0_stride, msf_rdma.baseiy_stride, MSF_RDMA_BASEIY_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_0_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_0_stride)\
    /* MSF_RDMA_BASEIC */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_1_stride, msf_rdma.baseic_stride, MSF_RDMA_BASEIC_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_1_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_1_stride)\
    /* MSF_RDMA_REFIY */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_2_stride, msf_rdma.refiy_stride, MSF_RDMA_REFIY_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_2_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_2_stride)\
    /* MSF_RDMA_REFIC */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_3_stride, msf_rdma.refic_stride, MSF_RDMA_REFIC_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_3_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_3_stride)\
    /* MSF_RDMA_DSIY */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_4_stride, msf_rdma.dsiy_stride, MSF_RDMA_DSIY_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_4_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_4_stride)\
    /* MSF_RDMA_DSIC */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_5_stride, msf_rdma.dsic_stride, MSF_RDMA_DSIC_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_5_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_5_stride)\
    /* MSF_RDMA_IDIY */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_6_stride, msf_rdma.idiy_stride, MSF_RDMA_IDIY_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_6_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_6_stride)\
    /* MSF_RDMA_IDIC */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_7_stride, msf_rdma.idic_stride, MSF_RDMA_IDIC_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_7_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_7_stride)\
    /* MSF_RDMA_WEI */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_8_stride, msf_rdma.wei_stride, MSF_RDMA_WEI_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_8_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_8_stride)\
    /* MSF_RDMA_DSWI */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_9_stride, msf_rdma.dswi_stride, MSF_RDMA_DSWI_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_9_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_9_stride)\
    /* MSF_RDMA_CONFI */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_10_xsize, msf_rdma.confi_xsize, MSF_RDMA_CONFI_XSIZE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_10_SIZE, MFBDMR_xsize, 4, MFB_D1B_MFBDMR_10_xsize)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_10_ysize, msf_rdma.confi_ysize, MSF_RDMA_CONFI_YSIZE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_10_SIZE, MFBDMR_ysize, 4, MFB_D1B_MFBDMR_10_ysize)\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMR_10_stride, msf_rdma.confi_stride, MSF_RDMA_CONFI_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMR_10_STRIDE, MFBDMR_stride, 4, MFB_D1B_MFBDMR_10_stride)\
    /* MSF_WDMA_FSOY */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMW_0_stride, msf_wdma.fsoy_stride, MSF_WDMA_FSOY_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMW_0_STRIDE, MFBDMW_stride, 4, MFB_D1B_MFBDMW_0_stride)\
    /* MSF_WDMA_FSOC */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMW_1_stride, msf_wdma.fsoc_stride, MSF_WDMA_FSOC_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMW_1_STRIDE, MFBDMW_stride, 4, MFB_D1B_MFBDMW_1_stride)\
    /* MSF_WDMA_WEO */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMW_2_stride, msf_wdma.weo_stride, MSF_WDMA_WEO_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMW_2_STRIDE, MFBDMW_stride, 4, MFB_D1B_MFBDMW_2_stride)\
    /* MSF_WDMA_DSWO */\
    CMD(a, b, c, d, e, int, MFB_D1A_MFBDMW_3_stride, msf_wdma.dswo_stride, MSF_WDMA_DSWO_STRIDE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MFBDMW_3_STRIDE, MFBDMW_stride, 4, MFB_D1B_MFBDMW_3_stride)\
    /* MSF_BASEIY_UNP */\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_0_YUV_BIT, msf_unp.baseiy_yuv_bit, MSF_BASEIY_UNP_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_0_CONT, UNP_YUV_BIT, 4, MFB_D1B_UNP_0_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_0_YUV_DNG, msf_unp.baseiy_yuv_dng, MSF_BASEIY_UNP_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_0_CONT, UNP_YUV_DNG, 4, MFB_D1B_UNP_0_YUV_DNG)\
    /* MSF_BASEIC_UNP */\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_1_YUV_BIT, msf_unp.baseic_yuv_bit, MSF_BASEIC_UNP_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_1_CONT, UNP_YUV_BIT, 4, MFB_D1B_UNP_1_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_1_YUV_DNG, msf_unp.baseic_yuv_dng, MSF_BASEIC_UNP_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_1_CONT, UNP_YUV_DNG, 4, MFB_D1B_UNP_1_YUV_DNG)\
    /* MSF_REFIY_UNP */\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_2_YUV_BIT, msf_unp.refiy_yuv_bit, MSF_REFIY_UNP_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_2_CONT, UNP_YUV_BIT, 4, MFB_D1B_UNP_2_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_2_YUV_DNG, msf_unp.refiy_yuv_dng, MSF_REFIY_UNP_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_2_CONT, UNP_YUV_DNG, 4, MFB_D1B_UNP_2_YUV_DNG)\
    /* MSF_REFIC_UNP */\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_3_YUV_BIT, msf_unp.refic_yuv_bit, MSF_REFIC_UNP_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_3_CONT, UNP_YUV_BIT, 4, MFB_D1B_UNP_3_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_3_YUV_DNG, msf_unp.refic_yuv_dng, MSF_REFIC_UNP_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_3_CONT, UNP_YUV_DNG, 4, MFB_D1B_UNP_3_YUV_DNG)\
    /* MSFB_DSIY_UNP */\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_4_YUV_BIT, msf_unp.dsiy_yuv_bit, MSF_DSIY_UNP_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_4_CONT, UNP_YUV_BIT, 4, MFB_D1B_UNP_4_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_4_YUV_DNG, msf_unp.dsiy_yuv_dng, MSF_DSIY_UNP_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_4_CONT, UNP_YUV_DNG, 4, MFB_D1B_UNP_4_YUV_DNG)\
    /* MSF_DSIC_UNP */\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_5_YUV_BIT, msf_unp.dsic_yuv_bit, MSF_DSIC_UNP_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_5_CONT, UNP_YUV_BIT, 4, MFB_D1B_UNP_5_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_UNP_5_YUV_DNG, msf_unp.dsic_yuv_dng, MSF_DSIC_UNP_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_UNP_5_CONT, UNP_YUV_DNG, 4, MFB_D1B_UNP_5_YUV_DNG)\
    /* MFB_CRSP */\
    CMD(a, b, c, d, e, int, MFB_D1A_CRSP_cstep_y, msf_crsp.crsp_ystep, MSF_CRSP_STEP_Y,, REG_CMP_EQ(c, MFB_EN, 1), MFB_D1A_CRSP_STEP_OFST, CRSP_STEP_X, 4, MFB_D1B_CRSP_STEP_Y)\
    CMD(a, b, c, d, e, int, MFB_D1A_CRSP_offset_x, msf_crsp.crsp_xoffset, MSF_CRSP_OFST_X,, REG_CMP_EQ(c, MFB_EN, 1), MFB_D1A_CRSP_STEP_OFST, CRSP_OFST_X, 0, MFB_D1B_CRSP_OFST_X)\
    CMD(a, b, c, d, e, int, MFB_D1A_CRSP_offset_y, msf_crsp.crsp_yoffset, MSF_CRSP_OFST_Y,, REG_CMP_EQ(c, MFB_EN, 1), MFB_D1A_CRSP_STEP_OFST, CRSP_OFST_Y, 0, MFB_D1B_CRSP_OFST_Y)\
    /* MSF_FSOY_PAK */\
    CMD(a, b, c, d, e, int, MFB_D1A_PAK_0_YUV_BIT, msf_pak.fsoy_yuv_bit, MSF_FSOY_PAK_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_PAK_0_CONT, PAK_YUV_BIT, 4, MFB_D1B_PAK_0_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_PAK_0_YUV_DNG, msf_pak.fsoy_yuv_dng, MSF_FSOY_PAK_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_PAK_0_CONT, PAK_YUV_DNG, 4, MFB_D1B_PAK_0_YUV_DNG)\
    /* MSF_FSOC_PAK */\
    CMD(a, b, c, d, e, int, MFB_D1A_PAK_1_YUV_BIT, msf_pak.fsoc_yuv_bit, MSF_FSOC_PAK_YUV_BIT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_PAK_1_CONT, PAK_YUV_BIT, 4, MFB_D1B_PAK_1_YUV_BIT)\
    CMD(a, b, c, d, e, int, MFB_D1A_PAK_1_YUV_DNG, msf_pak.fsoc_yuv_dng, MSF_FSOC_PAK_YUV_DNG,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_PAK_1_CONT, PAK_YUV_DNG, 4, MFB_D1B_PAK_1_YUV_DNG)\
    /* MSF */\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_GF_SAMPLING, msf.gf_sampling, MSF_GF_SAMPLING,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_GLOBAL_FREQUENCY_STATISTICS0, MSF_GF_SAMPLING, 4, MFB_D1B_MSF_GF_SAMPLING)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_NES_SAMPLING, msf.nes_sampling, MSF_NS_SAMPLING,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_NOISE_LEVEL_STATISTICS0, MSF_NES_SAMPLING, 4, MFB_D1B_MSF_NES_SAMPLING)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_FIRST_TILE, msf.first_tile, MSF_FIRST_TILE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_TOP_CTRL, MSF_FIRST_TILE, 4, MFB_D1B_MSF_FIRST_TILE)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_LAST_TILE, msf.last_tile, MSF_LAST_TILE,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_TOP_CTRL, MSF_LAST_TILE, 4, MFB_D1B_MSF_LAST_TILE)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_TILE_ROI_X1, msf.roi_x1, MSF_ROI_X1,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_TILE_STATISTICS0, MSF_TILE_ROI_X1, 4, MFB_D1B_MSF_TILE_ROI_X1)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_TILE_ROI_X2, msf.roi_x2, MSF_ROI_X2,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_TILE_STATISTICS1, MSF_TILE_ROI_X2, 4, MFB_D1B_MSF_TILE_ROI_X2)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_TILE_ROI_Y1, msf.roi_y1, MSF_ROI_Y1,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_TILE_STATISTICS0, MSF_TILE_ROI_Y1, 4, MFB_D1B_MSF_TILE_ROI_Y1)\
    CMD(a, b, c, d, e, int, MFB_D1A_MSF_TILE_ROI_Y2, msf.roi_y2, MSF_ROI_Y2,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_MSF_TILE_STATISTICS1, MSF_TILE_ROI_Y2, 4, MFB_D1B_MSF_TILE_ROI_Y2)\
    /* MSF_SLK */\
    CMD(a, b, c, d, e, int, MFB_D1A_SLK_HRZ_COMP, msf_slk.slk_hrz_comp, MSF_SLK_HRZ_COMP,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_SLK_RZ, SLK_HRZ_COMP, 4, MFB_D1B_SLK_HRZ_COMP)\
    CMD(a, b, c, d, e, int, MFB_D1A_SLK_VRZ_COMP, msf_slk.slk_vrz_comp, MSF_SLK_VRZ_COMP,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_SLK_RZ, SLK_VRZ_COMP, 4, MFB_D1B_SLK_VRZ_COMP)\
    /* MSF_YURZ_BASEI */\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_IN_WD, msf_yurz_basei.yurz_input_width, MSF_YURZ_BASEI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_IN_IMG, YURZ_IN_WD, 0, MFB_D1B_YURZ_0_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_IN_HT, msf_yurz_basei.yurz_input_height, MSF_YURZ_BASEI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_IN_IMG, YURZ_IN_HT, 0, MFB_D1B_YURZ_0_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_OUT_WD, msf_yurz_basei.yurz_output_width, MSF_YURZ_BASEI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_OUT_IMG, YURZ_OUT_WD, 0, MFB_D1B_YURZ_0_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_OUT_HT, msf_yurz_basei.yurz_output_height, MSF_YURZ_BASEI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_OUT_IMG, YURZ_OUT_HT, 0, MFB_D1B_YURZ_0_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_HORI_INT_OFST, msf_yurz_basei.yurz_luma_horizontal_integer_offset, MSF_YURZ_BASEI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_HORI_INT_OFST, YURZ_HORI_INT_OFST, 0, MFB_D1B_YURZ_0_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_HORI_SUB_OFST, msf_yurz_basei.yurz_luma_horizontal_subpixel_offset, MSF_YURZ_BASEI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_HORI_SUB_OFST, YURZ_HORI_SUB_OFST, 0, MFB_D1B_YURZ_0_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_VERT_INT_OFST, msf_yurz_basei.yurz_luma_vertical_integer_offset, MSF_YURZ_BASEI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_VERT_INT_OFST, YURZ_VERT_INT_OFST, 0, MFB_D1B_YURZ_0_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_VERT_SUB_OFST, msf_yurz_basei.yurz_luma_vertical_subpixel_offset, MSF_YURZ_BASEI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_VERT_SUB_OFST, YURZ_VERT_SUB_OFST, 0, MFB_D1B_YURZ_0_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_HORI_STEP, msf_yurz_basei.yurz_horizontal_coeff_step, MSF_YURZ_BASEI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_HORI_STEP, YURZ_HORI_STEP, 0, MFB_D1B_YURZ_0_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_0_VERT_STEP, msf_yurz_basei.yurz_vertical_coeff_step, MSF_YURZ_BASEI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_0_VERT_STEP, YURZ_VERT_STEP, 0, MFB_D1B_YURZ_0_VERT_STEP)\
    /* MSF_CURZ_BASEI */\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_IN_WD, msf_curz_basei.curz_input_width, MSF_CURZ_BASEI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_IN_IMG, CURZ_IN_WD, 0, MFB_D1B_CURZ_0_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_IN_HT, msf_curz_basei.curz_input_height, MSF_CURZ_BASEI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_IN_IMG, CURZ_IN_HT, 0, MFB_D1B_CURZ_0_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_OUT_WD, msf_curz_basei.curz_output_width, MSF_CURZ_BASEI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_OUT_IMG, CURZ_OUT_WD, 0, MFB_D1B_CURZ_0_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_OUT_HT, msf_curz_basei.curz_output_height, MSF_CURZ_BASEI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_OUT_IMG, CURZ_OUT_HT, 0, MFB_D1B_CURZ_0_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_HORI_INT_OFST, msf_curz_basei.curz_luma_horizontal_integer_offset, MSF_CURZ_BASEI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_HORI_INT_OFST, CURZ_HORI_INT_OFST, 0, MFB_D1B_CURZ_0_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_HORI_SUB_OFST, msf_curz_basei.curz_luma_horizontal_subpixel_offset, MSF_CURZ_BASEI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_HORI_SUB_OFST, CURZ_HORI_SUB_OFST, 0, MFB_D1B_CURZ_0_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_VERT_INT_OFST, msf_curz_basei.curz_luma_vertical_integer_offset, MSF_CURZ_BASEI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_VERT_INT_OFST, CURZ_VERT_INT_OFST, 0, MFB_D1B_CURZ_0_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_VERT_SUB_OFST, msf_curz_basei.curz_luma_vertical_subpixel_offset, MSF_CURZ_BASEI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_VERT_SUB_OFST, CURZ_VERT_SUB_OFST, 0, MFB_D1B_CURZ_0_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_HORI_STEP, msf_curz_basei.curz_horizontal_coeff_step, MSF_CURZ_BASEI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_HORI_STEP, CURZ_HORI_STEP, 0, MFB_D1B_CURZ_0_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_0_VERT_STEP, msf_curz_basei.curz_vertical_coeff_step, MSF_CURZ_BASEI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_0_VERT_STEP, CURZ_VERT_STEP, 0, MFB_D1B_CURZ_0_VERT_STEP)\
    /* MSF_YURZ_REFI */\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_IN_WD, msf_yurz_refi.yurz_input_width, MSF_YURZ_REFI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_IN_IMG, YURZ_IN_WD, 0, MFB_D1B_YURZ_1_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_IN_HT, msf_yurz_refi.yurz_input_height, MSF_YURZ_REFI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_IN_IMG, YURZ_IN_HT, 0, MFB_D1B_YURZ_1_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_OUT_WD, msf_yurz_refi.yurz_output_width, MSF_YURZ_REFI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_OUT_IMG, YURZ_OUT_WD, 0, MFB_D1B_YURZ_1_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_OUT_HT, msf_yurz_refi.yurz_output_height, MSF_YURZ_REFI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_OUT_IMG, YURZ_OUT_HT, 0, MFB_D1B_YURZ_1_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_HORI_INT_OFST, msf_yurz_refi.yurz_luma_horizontal_integer_offset, MSF_YURZ_REFI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_HORI_INT_OFST, YURZ_HORI_INT_OFST, 0, MFB_D1B_YURZ_1_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_HORI_SUB_OFST, msf_yurz_refi.yurz_luma_horizontal_subpixel_offset, MSF_YURZ_REFI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_HORI_SUB_OFST, YURZ_HORI_SUB_OFST, 0, MFB_D1B_YURZ_1_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_VERT_INT_OFST, msf_yurz_refi.yurz_luma_vertical_integer_offset, MSF_YURZ_REFI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_VERT_INT_OFST, YURZ_VERT_INT_OFST, 0, MFB_D1B_YURZ_1_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_VERT_SUB_OFST, msf_yurz_refi.yurz_luma_vertical_subpixel_offset, MSF_YURZ_REFI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_VERT_SUB_OFST, YURZ_VERT_SUB_OFST, 0, MFB_D1B_YURZ_1_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_HORI_STEP, msf_yurz_refi.yurz_horizontal_coeff_step, MSF_YURZ_REFI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_HORI_STEP, YURZ_HORI_STEP, 0, MFB_D1B_YURZ_1_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_1_VERT_STEP, msf_yurz_refi.yurz_vertical_coeff_step, MSF_YURZ_REFI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_1_VERT_STEP, YURZ_VERT_STEP, 0, MFB_D1B_YURZ_1_VERT_STEP)\
    /* MSF_CURZ_REFI */\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_IN_WD, msf_curz_refi.curz_input_width, MSF_CURZ_REFI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_IN_IMG, CURZ_IN_WD, 0, MFB_D1B_CURZ_1_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_IN_HT, msf_curz_refi.curz_input_height, MSF_CURZ_REFI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_IN_IMG, CURZ_IN_HT, 0, MFB_D1B_CURZ_1_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_OUT_WD, msf_curz_refi.curz_output_width, MSF_CURZ_REFI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_OUT_IMG, CURZ_OUT_WD, 0, MFB_D1B_CURZ_1_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_OUT_HT, msf_curz_refi.curz_output_height, MSF_CURZ_REFI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_OUT_IMG, CURZ_OUT_HT, 0, MFB_D1B_CURZ_1_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_HORI_INT_OFST, msf_curz_refi.curz_luma_horizontal_integer_offset, MSF_CURZ_REFI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_HORI_INT_OFST, CURZ_HORI_INT_OFST, 0, MFB_D1B_CURZ_1_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_HORI_SUB_OFST, msf_curz_refi.curz_luma_horizontal_subpixel_offset, MSF_CURZ_REFI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_HORI_SUB_OFST, CURZ_HORI_SUB_OFST, 0, MFB_D1B_CURZ_1_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_VERT_INT_OFST, msf_curz_refi.curz_luma_vertical_integer_offset, MSF_CURZ_REFI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_VERT_INT_OFST, CURZ_VERT_INT_OFST, 0, MFB_D1B_CURZ_1_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_VERT_SUB_OFST, msf_curz_refi.curz_luma_vertical_subpixel_offset, MSF_CURZ_REFI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_VERT_SUB_OFST, CURZ_VERT_SUB_OFST, 0, MFB_D1B_CURZ_1_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_HORI_STEP, msf_curz_refi.curz_horizontal_coeff_step, MSF_CURZ_REFI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_HORI_STEP, CURZ_HORI_STEP, 0, MFB_D1B_CURZ_1_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_1_VERT_STEP, msf_curz_refi.curz_vertical_coeff_step, MSF_CURZ_REFI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_1_VERT_STEP, CURZ_VERT_STEP, 0, MFB_D1B_CURZ_1_VERT_STEP)\
    /* MSF_YURZ_DSI */\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_IN_WD, msf_yurz_dsi.yurz_input_width, MSF_YURZ_DSI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_IN_IMG, YURZ_IN_WD, 0, MFB_D1B_YURZ_2_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_IN_HT, msf_yurz_dsi.yurz_input_height, MSF_YURZ_DSI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_IN_IMG, YURZ_IN_HT, 0, MFB_D1B_YURZ_2_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_OUT_WD, msf_yurz_dsi.yurz_output_width, MSF_YURZ_DSI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_OUT_IMG, YURZ_OUT_WD, 0, MFB_D1B_YURZ_2_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_OUT_HT, msf_yurz_dsi.yurz_output_height, MSF_YURZ_DSI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_OUT_IMG, YURZ_OUT_HT, 0, MFB_D1B_YURZ_2_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_HORI_INT_OFST, msf_yurz_dsi.yurz_luma_horizontal_integer_offset, MSF_YURZ_DSI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_HORI_INT_OFST, YURZ_HORI_INT_OFST, 0, MFB_D1B_YURZ_2_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_HORI_SUB_OFST, msf_yurz_dsi.yurz_luma_horizontal_subpixel_offset, MSF_YURZ_DSI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_HORI_SUB_OFST, YURZ_HORI_SUB_OFST, 0, MFB_D1B_YURZ_2_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_VERT_INT_OFST, msf_yurz_dsi.yurz_luma_vertical_integer_offset, MSF_YURZ_DSI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_VERT_INT_OFST, YURZ_VERT_INT_OFST, 0, MFB_D1B_YURZ_2_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_VERT_SUB_OFST, msf_yurz_dsi.yurz_luma_vertical_subpixel_offset, MSF_YURZ_DSI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_VERT_SUB_OFST, YURZ_VERT_SUB_OFST, 0, MFB_D1B_YURZ_2_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_HORI_STEP, msf_yurz_dsi.yurz_horizontal_coeff_step, MSF_YURZ_DSI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_HORI_STEP, YURZ_HORI_STEP, 0, MFB_D1B_YURZ_2_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_2_VERT_STEP, msf_yurz_dsi.yurz_vertical_coeff_step, MSF_YURZ_DSI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_2_VERT_STEP, YURZ_VERT_STEP, 0, MFB_D1B_YURZ_2_VERT_STEP)\
    /* MSF_CURZ_DSI */\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_IN_WD, msf_curz_dsi.curz_input_width, MSF_CURZ_DSI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_IN_IMG, CURZ_IN_WD, 0, MFB_D1B_CURZ_2_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_IN_HT, msf_curz_dsi.curz_input_height, MSF_CURZ_DSI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_IN_IMG, CURZ_IN_HT, 0, MFB_D1B_CURZ_2_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_OUT_WD, msf_curz_dsi.curz_output_width, MSF_CURZ_DSI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_OUT_IMG, CURZ_OUT_WD, 0, MFB_D1B_CURZ_2_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_OUT_HT, msf_curz_dsi.curz_output_height, MSF_CURZ_DSI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_OUT_IMG, CURZ_OUT_HT, 0, MFB_D1B_CURZ_2_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_HORI_INT_OFST, msf_curz_dsi.curz_luma_horizontal_integer_offset, MSF_CURZ_DSI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_HORI_INT_OFST, CURZ_HORI_INT_OFST, 0, MFB_D1B_CURZ_2_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_HORI_SUB_OFST, msf_curz_dsi.curz_luma_horizontal_subpixel_offset, MSF_CURZ_DSI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_HORI_SUB_OFST, CURZ_HORI_SUB_OFST, 0, MFB_D1B_CURZ_2_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_VERT_INT_OFST, msf_curz_dsi.curz_luma_vertical_integer_offset, MSF_CURZ_DSI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_VERT_INT_OFST, CURZ_VERT_INT_OFST, 0, MFB_D1B_CURZ_2_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_VERT_SUB_OFST, msf_curz_dsi.curz_luma_vertical_subpixel_offset, MSF_CURZ_DSI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_VERT_SUB_OFST, CURZ_VERT_SUB_OFST, 0, MFB_D1B_CURZ_2_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_HORI_STEP, msf_curz_dsi.curz_horizontal_coeff_step, MSF_CURZ_DSI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_HORI_STEP, CURZ_HORI_STEP, 0, MFB_D1B_CURZ_2_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_2_VERT_STEP, msf_curz_dsi.curz_vertical_coeff_step, MSF_CURZ_DSI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_2_VERT_STEP, CURZ_VERT_STEP, 0, MFB_D1B_CURZ_2_VERT_STEP)\
    /* MSF_YURZ_IDI */\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_IN_WD, msf_yurz_idi.yurz_input_width, MSF_YURZ_IDI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_IN_IMG, YURZ_IN_WD, 0, MFB_D1B_YURZ_3_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_IN_HT, msf_yurz_idi.yurz_input_height, MSF_YURZ_IDI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_IN_IMG, YURZ_IN_HT, 0, MFB_D1B_YURZ_3_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_OUT_WD, msf_yurz_idi.yurz_output_width, MSF_YURZ_IDI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_OUT_IMG, YURZ_OUT_WD, 0, MFB_D1B_YURZ_3_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_OUT_HT, msf_yurz_idi.yurz_output_height, MSF_YURZ_IDI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_OUT_IMG, YURZ_OUT_HT, 0, MFB_D1B_YURZ_3_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_HORI_INT_OFST, msf_yurz_idi.yurz_luma_horizontal_integer_offset, MSF_YURZ_IDI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_HORI_INT_OFST, YURZ_HORI_INT_OFST, 0, MFB_D1B_YURZ_3_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_HORI_SUB_OFST, msf_yurz_idi.yurz_luma_horizontal_subpixel_offset, MSF_YURZ_IDI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_HORI_SUB_OFST, YURZ_HORI_SUB_OFST, 0, MFB_D1B_YURZ_3_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_VERT_INT_OFST, msf_yurz_idi.yurz_luma_vertical_integer_offset, MSF_YURZ_IDI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_VERT_INT_OFST, YURZ_VERT_INT_OFST, 0, MFB_D1B_YURZ_3_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_VERT_SUB_OFST, msf_yurz_idi.yurz_luma_vertical_subpixel_offset, MSF_YURZ_IDI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_VERT_SUB_OFST, YURZ_VERT_SUB_OFST, 0, MFB_D1B_YURZ_3_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_HORI_STEP, msf_yurz_idi.yurz_horizontal_coeff_step, MSF_YURZ_IDI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_HORI_STEP, YURZ_HORI_STEP, 0, MFB_D1B_YURZ_3_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_3_VERT_STEP, msf_yurz_idi.yurz_vertical_coeff_step, MSF_YURZ_IDI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_3_VERT_STEP, YURZ_VERT_STEP, 0, MFB_D1B_YURZ_3_VERT_STEP)\
    /* MSF_CURZ_IDI */\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_IN_WD, msf_curz_idi.curz_input_width, MSF_CURZ_IDI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_IN_IMG, CURZ_IN_WD, 0, MFB_D1B_CURZ_3_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_IN_HT, msf_curz_idi.curz_input_height, MSF_CURZ_IDI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_IN_IMG, CURZ_IN_HT, 0, MFB_D1B_CURZ_3_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_OUT_WD, msf_curz_idi.curz_output_width, MSF_CURZ_IDI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_OUT_IMG, CURZ_OUT_WD, 0, MFB_D1B_CURZ_3_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_OUT_HT, msf_curz_idi.curz_output_height, MSF_CURZ_IDI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_OUT_IMG, CURZ_OUT_HT, 0, MFB_D1B_CURZ_3_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_HORI_INT_OFST, msf_curz_idi.curz_luma_horizontal_integer_offset, MSF_CURZ_IDI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_HORI_INT_OFST, CURZ_HORI_INT_OFST, 0, MFB_D1B_CURZ_3_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_HORI_SUB_OFST, msf_curz_idi.curz_luma_horizontal_subpixel_offset, MSF_CURZ_IDI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_HORI_SUB_OFST, CURZ_HORI_SUB_OFST, 0, MFB_D1B_CURZ_3_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_VERT_INT_OFST, msf_curz_idi.curz_luma_vertical_integer_offset, MSF_CURZ_IDI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_VERT_INT_OFST, CURZ_VERT_INT_OFST, 0, MFB_D1B_CURZ_3_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_VERT_SUB_OFST, msf_curz_idi.curz_luma_vertical_subpixel_offset, MSF_CURZ_IDI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_VERT_SUB_OFST, CURZ_VERT_SUB_OFST, 0, MFB_D1B_CURZ_3_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_HORI_STEP, msf_curz_idi.curz_horizontal_coeff_step, MSF_CURZ_IDI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_HORI_STEP, CURZ_HORI_STEP, 0, MFB_D1B_CURZ_3_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_CURZ_3_VERT_STEP, msf_curz_idi.curz_vertical_coeff_step, MSF_CURZ_IDI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_CURZ_3_VERT_STEP, CURZ_VERT_STEP, 0, MFB_D1B_CURZ_3_VERT_STEP)\
    /* MSF_YURZ_DSWI */\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_IN_WD, msf_yurz_dswi.yurz_input_width, MSF_YURZ_DSWI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_IN_IMG, YURZ_IN_WD, 0, MFB_D1B_YURZ_4_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_IN_HT, msf_yurz_dswi.yurz_input_height, MSF_YURZ_DSWI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_IN_IMG, YURZ_IN_HT, 0, MFB_D1B_YURZ_4_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_OUT_WD, msf_yurz_dswi.yurz_output_width, MSF_YURZ_DSWI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_OUT_IMG, YURZ_OUT_WD, 0, MFB_D1B_YURZ_4_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_OUT_HT, msf_yurz_dswi.yurz_output_height, MSF_YURZ_DSWI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_OUT_IMG, YURZ_OUT_HT, 0, MFB_D1B_YURZ_4_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_HORI_INT_OFST, msf_yurz_dswi.yurz_luma_horizontal_integer_offset, MSF_YURZ_DSWI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_HORI_INT_OFST, YURZ_HORI_INT_OFST, 0, MFB_D1B_YURZ_4_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_HORI_SUB_OFST, msf_yurz_dswi.yurz_luma_horizontal_subpixel_offset, MSF_YURZ_DSWI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_HORI_SUB_OFST, YURZ_HORI_SUB_OFST, 0, MFB_D1B_YURZ_4_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_VERT_INT_OFST, msf_yurz_dswi.yurz_luma_vertical_integer_offset, MSF_YURZ_DSWI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_VERT_INT_OFST, YURZ_VERT_INT_OFST, 0, MFB_D1B_YURZ_4_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_VERT_SUB_OFST, msf_yurz_dswi.yurz_luma_vertical_subpixel_offset, MSF_YURZ_DSWI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_VERT_SUB_OFST, YURZ_VERT_SUB_OFST, 0, MFB_D1B_YURZ_4_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_HORI_STEP, msf_yurz_dswi.yurz_horizontal_coeff_step, MSF_YURZ_DSWI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_HORI_STEP, YURZ_HORI_STEP, 0, MFB_D1B_YURZ_4_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_4_VERT_STEP, msf_yurz_dswi.yurz_vertical_coeff_step, MSF_YURZ_DSWI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_4_VERT_STEP, YURZ_VERT_STEP, 0, MFB_D1B_YURZ_4_VERT_STEP)\
    /* MSF_YURZ_CONFI */\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_IN_WD, msf_yurz_confi.yurz_input_width, MSF_YURZ_CONFI_IN_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_IN_IMG, YURZ_IN_WD, 0, MFB_D1B_YURZ_5_IN_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_IN_HT, msf_yurz_confi.yurz_input_height, MSF_YURZ_CONFI_IN_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_IN_IMG, YURZ_IN_HT, 0, MFB_D1B_YURZ_5_IN_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_OUT_WD, msf_yurz_confi.yurz_output_width, MSF_YURZ_CONFI_OUT_WD,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_OUT_IMG, YURZ_OUT_WD, 0, MFB_D1B_YURZ_5_OUT_WD)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_OUT_HT, msf_yurz_confi.yurz_output_height, MSF_YURZ_CONFI_OUT_HT,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_OUT_IMG, YURZ_OUT_HT, 0, MFB_D1B_YURZ_5_OUT_HT)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_HORI_INT_OFST, msf_yurz_confi.yurz_luma_horizontal_integer_offset, MSF_YURZ_CONFI_Horizontal_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_HORI_INT_OFST, YURZ_HORI_INT_OFST, 0, MFB_D1B_YURZ_5_HORI_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_HORI_SUB_OFST, msf_yurz_confi.yurz_luma_horizontal_subpixel_offset, MSF_YURZ_CONFI_Horizontal_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_HORI_SUB_OFST, YURZ_HORI_SUB_OFST, 0, MFB_D1B_YURZ_5_HORI_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_VERT_INT_OFST, msf_yurz_confi.yurz_luma_vertical_integer_offset, MSF_YURZ_CONFI_Vertical_Integer_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_VERT_INT_OFST, YURZ_VERT_INT_OFST, 0, MFB_D1B_YURZ_5_VERT_INT_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_VERT_SUB_OFST, msf_yurz_confi.yurz_luma_vertical_subpixel_offset, MSF_YURZ_CONFI_Vertical_Subpixel_Offset,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_VERT_SUB_OFST, YURZ_VERT_SUB_OFST, 0, MFB_D1B_YURZ_5_VERT_SUB_OFST)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_HORI_STEP, msf_yurz_confi.yurz_horizontal_coeff_step, MSF_YURZ_CONFI_Horizontal_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_HORI_STEP, YURZ_HORI_STEP, 0, MFB_D1B_YURZ_5_HORI_STEP)\
    CMD(a, b, c, d, e, int, MFB_D1A_YURZ_5_VERT_STEP, msf_yurz_confi.yurz_vertical_coeff_step, MSF_YURZ_CONFI_Vertical_Coeff_Step,, REG_CMP_EQ(c, MSF_EN, 1), MFB_D1A_YURZ_5_VERT_STEP, YURZ_VERT_STEP, 0, MFB_D1B_YURZ_5_VERT_STEP)\

/* register table (Cmodel, platform, tile driver) for HW parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care, 4: shold compare isp_reg and reg map in program */
#define MSS_TILE_HW_REG_LUT(CMD, a, b, c, d, e) \
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_MSS_EN, top.mss_en, MSS_EN,, true, MSS_D1A_MSSTOP_TOP_CFG, MSSTOP_MSS_EN, 4, MSS_D1A_MSSTOP_MSS_EN)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_rdma_mssiy_en, mss.rdma_mssiy_en, MSS_RDMA_MSSIY_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_DMA_EN, MSSTOP_rdma_mssiy_en, 4, DIPCTL_D1A_MSS_OMC_EN)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_rdma_mssic_en, mss.rdma_mssic_en, MSS_RDMA_MSSIC_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_DMA_EN, MSSTOP_rdma_mssic_en, 4, MSS_D1A_MSSTOP_rdma_mssic_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_mssiy_unp_en, mss.mssiy_unp_en, MSS_MSSIY_UNP_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_mssiy_unp_en, 4, MSS_D1A_MSSTOP_mssiy_unp_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_mssic_unp_en, mss.mssic_unp_en, MSS_MSSIC_UNP_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_mssic_unp_en, 4, MSS_D1A_MSSTOP_mssic_unp_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_ydrz_en, mss.ydrz_en, MSS_DRZ_YDRZ_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_ydrz_en, 4, MSS_D1A_MSSTOP_ydrz_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_vdrz_en, mss.vdrz_en, MSS_DRZ_VDRZ_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_vdrz_en, 4, MSS_D1A_MSSTOP_vdrz_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_cdrz_en, mss.cdrz_en, MSS_DRZ_CDRZ_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_cdrz_en, 4, MSS_D1A_MSSTOP_cdrz_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_crp_drzy_en, mss.crp_drzy_en, MSS_CRP_DRZY_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_crp_drzy_en, 4, MSS_D1A_MSSTOP_crp_drzy_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_crp_drzc_en, mss.crp_drzc_en, MSS_CRP_DRZC_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_crp_drzc_en, 4, MSS_D1A_MSSTOP_crp_drzc_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_mssoy_pak_en, mss.mssoy_pak_en, MSS_MSSOY_PAK_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_mssoy_pak_en, 4, MSS_D1A_MSSTOP_mssoy_pak_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_mssoc_pak_en, mss.mssoc_pak_en, MSS_MSSOC_PAK_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_mssoc_pak_en, 4, MSS_D1A_MSSTOP_mssoc_pak_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_wdma_mssoy_en, mss.wdma_mssoy_en, MSS_WDMA_MSSOY_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_DMA_EN, MSSTOP_wdma_mssoy_en, 4, MSS_D1A_MSSTOP_wdma_mssoy_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_wdma_mssoc_en, mss.wdma_mssoc_en, MSS_WDMA_MSSOC_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_DMA_EN, MSSTOP_wdma_mssoc_en, 4, MSS_D1A_MSSTOP_wdma_mssoc_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_wif_en, mss.wif_en, MSS_WIF_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_wif_en, 4, MSS_D1A_MSSTOP_wif_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_crsp_en, mss.crsp_en, MSS_CRSP_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_crsp_en, 4, MSS_D1A_MSSTOP_crsp_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_crp_omcy_en, mss.crp_omcy_en, MSS_CRP_OMCY_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_crp_omcy_en, 4, MSS_D1A_MSSTOP_crp_omcy_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_crp_omcc_en, mss.crp_omcc_en, MSS_CRP_OMCC_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_crp_omcc_en, 4, MSS_D1A_MSSTOP_crp_omcc_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_omcoy_pak_en, mss.omcoy_pak_en, MSS_OMCOY_PAK_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_omcoy_pak_en, 4, MSS_D1A_MSSTOP_omcoy_pak_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_omcoc_pak_en, mss.omcoc_pak_en, MSS_OMCOC_PAK_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_ENG_EN, MSSTOP_omcoc_pak_en, 4, MSS_D1A_MSSTOP_omcoc_pak_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_wdma_omcoy_en, mss.wdma_omcoy_en, MSS_WDMA_OMCOY_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_DMA_EN, MSSTOP_wdma_omcoy_en, 4, MSS_D1A_MSSTOP_wdma_omcoy_en)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_wdma_omcoc_en, mss.wdma_omcoc_en, MSS_WDMA_OMCOC_EN,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSTOP_DMA_EN, MSSTOP_wdma_omcoc_en, 4, MSS_D1A_MSSTOP_wdma_omcoc_en)\
    /* SEL MUX */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_omc_en_SEL, top.omc_en_sel, OMC_EN_SEL,, true, MSS_D1A_MSSTOP_ENG_EN,  MSSTOP_omc_en_SEL, 4, MSS_D1A_MSSTOP_omc_en_SEL)\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSTOP_MSS_DRZ_SRC_SEL, top.drz_src_sel, DRZ_SRC_SEL,, true, MSS_D1A_MSSTOP_TOP_CFG,  MSSTOP_MSS_DRZ_SRC_SEL, 4, MSS_D1A_MSSTOP_MSS_DRZ_SRC_SEL)\
    /* MSS_RDMA_MSSIY */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSDMR_0_stride, mss_rdma.mssiy_stride, MSS_RDMA_MSSIY_STRIDE,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSDMR_0_STRIDE, MSSDMR_stride, 4, MSS_D1A_MSSDMR_0_stride)\
    /* MSS_RDMA_MSSIC */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSDMR_1_stride, mss_rdma.mssic_stride, MSS_RDMA_MSSIC_STRIDE,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSDMR_1_STRIDE, MSSDMR_stride, 4, MSS_D1A_MSSDMR_1_stride)\
    /* MSS_CRSP */\
    CMD(a, b, c, d, e, int, MSS_D1A_CRSP_cstep_y, mss_crsp.crsp_ystep, MSS_CRSP_STEP_Y,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_CRSP_STEP_OFST, CRSP_STEP_X, 4, MSS_D1A_CRSP_cstep_y)\
    CMD(a, b, c, d, e, int, MSS_D1A_CRSP_offset_x, mss_crsp.crsp_xoffset, MSS_CRSP_OFST_X,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_CRSP_STEP_OFST, CRSP_OFST_X, 0, MSS_D1A_CRSP_offset_x)\
    CMD(a, b, c, d, e, int, MSS_D1A_CRSP_offset_y, mss_crsp.crsp_yoffset, MSS_CRSP_OFST_Y,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_CRSP_STEP_OFST, CRSP_OFST_Y, 0, MSS_D1A_CRSP_offset_y)\
    /* MSS_MSSIY_UNP */\
    CMD(a, b, c, d, e, int, MSS_D1A_UNP_0_YUV_BIT, mss_unp.mssiy_yuv_bit, MSS_MSSIY_UNP_YUV_BIT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_UNP_0_CONT, UNP_YUV_BIT, 4, MSS_D1A_UNP_0_YUV_BIT)\
    CMD(a, b, c, d, e, int, MSS_D1A_UNP_0_YUV_DNG, mss_unp.mssiy_yuv_dng, MSS_MSSIY_UNP_YUV_DNG,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_UNP_0_CONT, UNP_YUV_DNG, 4, MSS_D1A_UNP_0_YUV_DNG)\
    /* MSS_MSSIC_UNP */\
    CMD(a, b, c, d, e, int, MSS_D1A_UNP_1_YUV_BIT, mss_unp.mssic_yuv_bit, MSS_MSSIC_UNP_YUV_BIT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_UNP_1_CONT, UNP_YUV_BIT, 4, MSS_D1A_UNP_1_YUV_BIT)\
    CMD(a, b, c, d, e, int, MSS_D1A_UNP_1_YUV_DNG, mss_unp.mssic_yuv_dng, MSS_MSSIC_UNP_YUV_DNG,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_UNP_1_CONT, UNP_YUV_DNG, 4, MSS_D1A_UNP_1_YUV_DNG)\
    /* MSS_DRZ_YDRZ */\
    CMD(a, b, c, d, e, int, MSS_D1A_YDRZ_0_IN_WD, mss_drz.ydrz_input_width, MSS_DRZ_YDRZ_IN_WD,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_YDRZ_0_IN_IMG, YDRZ_IN_WD, 0, MSS_D1B_YDRZ_0_IN_WD)\
    CMD(a, b, c, d, e, int, MSS_D1A_YDRZ_0_IN_HT, mss_drz.ydrz_input_height, MSS_DRZ_YDRZ_IN_HT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_YDRZ_0_IN_IMG, YDRZ_IN_HT, 0, MSS_D1B_YDRZ_0_IN_HT)\
    CMD(a, b, c, d, e, int, MSS_D1A_YDRZ_0_OUT_WD, mss_drz.ydrz_output_width, MSS_DRZ_YDRZ_OUT_WD,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_YDRZ_0_OUT_IMG, YDRZ_OUT_WD, 0, MSS_D1B_YDRZ_0_OUT_WD)\
    CMD(a, b, c, d, e, int, MSS_D1A_YDRZ_0_OUT_HT, mss_drz.ydrz_output_height, MSS_DRZ_YDRZ_OUT_HT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_YDRZ_0_OUT_IMG, YDRZ_OUT_HT, 0, MSS_D1B_YDRZ_0_OUT_HT)\
    /* MSS_MSSOY_PAK */\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_0_YUV_BIT, mss_pak.mssoy_yuv_bit, MSS_MSSOY_PAK_YUV_BIT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_0_CONT, PAK_YUV_BIT, 4, MSS_D1A_PAK_0_YUV_BIT)\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_0_YUV_DNG, mss_pak.mssoy_yuv_dng, MSS_MSSOY_PAK_YUV_DNG,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_0_CONT, PAK_YUV_DNG, 4, MSS_D1A_PAK_0_YUV_DNG)\
    /* MSS_MSSOC_PAK */\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_1_YUV_BIT, mss_pak.mssoc_yuv_bit, MSS_MSSOC_PAK_YUV_BIT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_1_CONT, PAK_YUV_BIT, 4, MSS_D1A_PAK_1_YUV_BIT)\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_1_YUV_DNG, mss_pak.mssoc_yuv_dng, MSS_MSSOC_PAK_YUV_DNG,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_1_CONT, PAK_YUV_DNG, 4, MSS_D1A_PAK_1_YUV_DNG)\
    /* MSS_WDMA_MSSOY */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSDMW_0_stride, mss_wdma.mssoy_stride, MSS_WDMA_MSSOY_STRIDE,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSDMW_0_STRIDE, MSSDMW_stride, 4, MSS_D1A_MSSDMW_0_stride)\
    /* MSS_WDMA_MSSOC */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSDMW_1_stride, mss_wdma.mssoc_stride, MSS_WDMA_MSSOC_STRIDE,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSDMW_1_STRIDE, MSSDMW_stride, 4, MSS_D1A_MSSDMW_1_stride)\
    /* MSS_OMCOY_PAK */\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_2_YUV_BIT, mss_pak.omcoy_yuv_bit, MSS_OMCOY_PAK_YUV_BIT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_2_CONT, PAK_YUV_BIT, 4, MSS_D1A_PAK_2_YUV_BIT)\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_2_YUV_DNG, mss_pak.omcoy_yuv_dng, MSS_OMCOY_PAK_YUV_DNG,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_2_CONT, PAK_YUV_DNG, 4, MSS_D1A_PAK_2_YUV_DNG)\
    /* MSS_OMCOC_PAK */\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_3_YUV_BIT, mss_pak.omcoc_yuv_bit, MSS_OMCOC_PAK_YUV_BIT,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_3_CONT, PAK_YUV_BIT, 4, MSS_D1A_PAK_3_YUV_BIT)\
    CMD(a, b, c, d, e, int, MSS_D1A_PAK_3_YUV_DNG, mss_pak.omcoc_yuv_dng, MSS_OMCOC_PAK_YUV_DNG,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_PAK_3_CONT, PAK_YUV_DNG, 4, MSS_D1A_PAK_3_YUV_DNG)\
    /* MSS_WDMA_OMCOY */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSDMW_2_stride, mss_wdma.omcoy_stride, MSS_WDMA_OMCOY_STRIDE,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSDMW_2_STRIDE, MSSDMW_stride, 4, MSS_D1A_MSSDMW_2_stride)\
    /* MSS_WDMA_OMCOC */\
    CMD(a, b, c, d, e, int, MSS_D1A_MSSDMW_3_stride, mss_wdma.omcoc_stride, MSS_WDMA_OMCOC_STRIDE,, REG_CMP_EQ(c, MSS_EN, 1), MSS_D1A_MSSDMW_3_STRIDE, MSSDMW_stride, 4, MSS_D1A_MSSDMW_3_stride)\

/* register table (Cmodel, , tile driver) for Cmodel only parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_CMODEL_PATH_LUT(CMD, a, b, c, d, e) \
    /* to add register only support by c model */\
    CMD(a, b, c, d, e, char *, ptr_tcm_dir_name,, data_path_ptr,,,,,,)\

/* register table (Cmodel, , tile driver) for Cmodel only parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_CMODEL_REG_LUT(CMD, a, b, c, d, e) \
    /* to add register only support by c model */\
    CMD(a, b, c, d, e, int, TDRI_A_BASE_ADDR,, TDRI_A_BASE_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int, TDRI_B_BASE_ADDR,, TDRI_B_BASE_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int, WPE_TDRI_A_BASE_ADDR,, WPE_TDRI_A_BASE_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int, WPE_TDRI_B_BASE_ADDR,, WPE_TDRI_B_BASE_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int, MFB_TDRI_A_BASE_ADDR,, MFB_TDRI_A_BASE_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int, MSS_TDRI_A_BASE_ADDR,, MSS_TDRI_A_BASE_ADDR,,,,,,)\
    /* FCSIM */\
    CMD(a, b, c, d, e, int, FCSIM_DL_FUNC_NUM,, FCSIM_DL_FUNC_NUM,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_FRAME_WIDTH,, FCSIM_DL_FRAME_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_FRAME_HEIGHT,, FCSIM_DL_FRAME_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_TILE_H_NUM,, FCSIM_DL_TILE_H_NUM,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_FIRST_TILE_WIDTH,, FCSIM_DL_FIRST_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_TILE_WIDTH,, FCSIM_DL_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_LAST_TILE_WIDTH,, FCSIM_DL_LAST_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_TILE_V_NUM,, FCSIM_DL_TILE_V_NUM,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_FIRST_TILE_HEIGHT,, FCSIM_DL_FIRST_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_TILE_HEIGHT,, FCSIM_DL_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int, FCSIM_DL_LAST_TILE_HEIGHT,, FCSIM_DL_LAST_TILE_HEIGHT,,,,,,)\

/* register table ( , platform, tile driver) for Platform only parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_PLATFORM_REG_LUT(CMD, a, b, c, d, e) \
    /* to add register only support by platform */\
    CMD(a, b, c, d, e, int,, sw.log_en, platform_log_en,, true,,,,)\

/* register table ( , , tile driver) for tile driver only parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_PLATFORM_DEBUG_REG_LUT(CMD, a, b, c, d, e) \
    CMD(a, b, c, d, e, int,,, platform_buffer_size,,,,,,)\
    CMD(a, b, c, d, e, int,,, platform_max_tpipe_no,,,,,,)\
    CMD(a, b, c, d, e, int,,, platform_isp_hex_no_per_tpipe,,,,,,)\
    CMD(a, b, c, d, e, int,,, platform_isp_hex_no_per_tpipe_wpe,,,,,,)\
    CMD(a, b, c, d, e, int,,, platform_isp_hex_no_per_tpipe_mfb,,,,,,)\
    CMD(a, b, c, d, e, int,,, platform_isp_hex_no_per_tpipe_mss,,,,,,)\
    CMD(a, b, c, d, e, int,,, platform_error_no,,,,,,)\

/* register table ( , , tile driver) for tile driver only parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_INTERNAL_TDR_REG_LUT(CMD, a, b, c, d, e) \
    /* tdr used only */\
    /* IMGI_D1 */\
    CMD(a, b, c, d, e, int,,, IMGI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMGI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMGI_TILE_YSIZE,,,,,,)\
    /* IMGBI_D1 */\
    CMD(a, b, c, d, e, int,,, IMGBI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMGBI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMGBI_TILE_YSIZE,,,,,,)\
    /* IMGCI_D1 */\
    CMD(a, b, c, d, e, int,,, IMGCI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMGCI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMGCI_TILE_YSIZE,,,,,,)\
    /* VIPI_D1 */\
    CMD(a, b, c, d, e, int,,, VIPI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, VIPI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, VIPI_TILE_YSIZE,,,,,,)\
    /* VIPBI_D1 */\
    CMD(a, b, c, d, e, int,,, VIPBI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, VIPBI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, VIPBI_TILE_YSIZE,,,,,,)\
    /* VIPCI_D1 */\
    CMD(a, b, c, d, e, int,,, VIPCI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, VIPCI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, VIPCI_TILE_YSIZE,,,,,,)\
    /* UFDI_D1 */\
    CMD(a, b, c, d, e, int,,, UFDI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFDI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFDI_TILE_YSIZE,,,,,,)\
    /* UNP_D1 */\
    CMD(a, b, c, d, e, int,,, UNP_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP_OFST_EDB,,,,,,)\
    /* UNP_D2 */\
    CMD(a, b, c, d, e, int,,, UNP2_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP2_OFST_EDB,,,,,,)\
    /* UNP_D3 */\
    CMD(a, b, c, d, e, int,,, UNP3_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP3_OFST_EDB,,,,,,)\
    /* UNP_D4 */\
    CMD(a, b, c, d, e, int,,, UNP4_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP4_OFST_EDB,,,,,,)\
    /* UNP_D5 */\
    CMD(a, b, c, d, e, int,,, UNP5_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP5_OFST_EDB,,,,,,)\
    /* UNP_D6 */\
    CMD(a, b, c, d, e, int,,, UNP6_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP6_OFST_EDB,,,,,,)\
    /* UNP_D7 */\
    CMD(a, b, c, d, e, int,,, UNP7_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP7_OFST_EDB,,,,,,)\
    /* UNP_D8 */\
    CMD(a, b, c, d, e, int,,, UNP8_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP8_OFST_EDB,,,,,,)\
    /* UNP_D9 */\
    CMD(a, b, c, d, e, int,,, UNP9_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP9_OFST_EDB,,,,,,)\
    /* UNP_D10 */\
    CMD(a, b, c, d, e, int,,, UNP10_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP10_OFST_EDB,,,,,,)\
    /* UNP_D11 */\
    CMD(a, b, c, d, e, int,,, UNP11_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP11_OFST_EDB,,,,,,)\
    /* UNP_D16 */\
    CMD(a, b, c, d, e, int,,, UNP16_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, UNP16_OFST_EDB,,,,,,)\
    /* UFD_D1 */\
    CMD(a, b, c, d, e, int,,, UFD_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_X_START,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_X_END,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_Y_START,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_Y_END,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_AU_SIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_AU_OFST,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_AU2_SIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_AU2_OFST,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_AU3_SIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_AU3_OFST,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_TILE_BOND_MODE,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFD_TILE_BOND2_MODE,,,,,,)\
    /* YUFD_D1 */\
    CMD(a, b, c, d, e, int,,, YUFD_WD_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_HT_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_X_START_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_X_END_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_Y_START_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_Y_END_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU_SIZE_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU_OFST_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU2_SIZE_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU2_OFST_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU3_SIZE_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU3_OFST_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_TILE_BOND_MODE_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_TILE_BOND2_MODE_L,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_WD_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_HT_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_X_START_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_X_END_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_Y_START_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_Y_END_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU_SIZE_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU_OFST_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU2_SIZE_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU2_OFST_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU3_SIZE_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_AU3_OFST_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_TILE_BOND_MODE_C,,,,,,)\
    CMD(a, b, c, d, e, int,,, YUFD_TILE_BOND2_MODE_C,,,,,,)\
    /* HLR_D1 */\
    CMD(a, b, c, d, e, int,,, HLR_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, HLR_TILE_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, HLR_TILE_IN_HT,,,,,,)\
    /* LTM_D1 */\
    CMD(a, b, c, d, e, int,,, LTM_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_IN_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_IN_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_XNUM_STR,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_XNUM_END,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_YNUM_STR,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_YNUM_END,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_XCNT_STR,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_XCNT_END,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_YCNT_STR,,,,,,)\
    CMD(a, b, c, d, e, int,,, LTM_TILE_BLK_YCNT_END,,,,,,)\
    /* DM_D1 */\
    CMD(a, b, c, d, e, int,,, DM_TILE_EDGE,,,,,,)\
    /* LDNR_D1 */\
    CMD(a, b, c, d, e, int,,, LDNR_TILE_EDGE,,,,,,)\
    /* LSC_D1 */\
    CMD(a, b, c, d, e, int,,, LSC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_TILE_XOFST,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_TILE_YOFST,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_XNUM,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_YNUM,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_LWIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, LSC_LHEIGHT,,,,,,)\
    /* DMGI_D1 */\
    CMD(a, b, c, d, e, int,,, DMGI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, DMGI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, DMGI_TILE_YSIZE,,,,,,)\
    /* DEPI_D1 */\
    CMD(a, b, c, d, e, int,,, DEPI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, DEPI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, DEPI_TILE_YSIZE,,,,,,)\
    /* TIMGO_D1 */\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_FULL_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, TIMGO_TILE_DUAL_XSTART,,,,,,)\
    /* G2CX_D1 */\
    CMD(a, b, c, d, e, int,,, G2CX_TILE_SHADE_XMID,,,,,,)\
    CMD(a, b, c, d, e, int,,, G2CX_TILE_SHADE_YMID,,,,,,)\
    CMD(a, b, c, d, e, int,,, G2CX_TILE_SHADE_XSP,,,,,,)\
    CMD(a, b, c, d, e, int,,, G2CX_TILE_SHADE_YSP,,,,,,)\
    CMD(a, b, c, d, e, int,,, G2CX_TILE_SHADE_VAR,,,,,,)\
    /* NDG_D1 */\
    CMD(a, b, c, d, e, int,,, NDG_TILE_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_RIGHT_LOSS,,,,,,)\
    /* NDG2_D1 */\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_RIGHT_LOSS,,,,,,)\
    /* SLK_D1 */\
    CMD(a, b, c, d, e, int,,, SLK1_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_OUT_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK1_OUT_TILE_HEIGHT,,,,,,)\
    /* SLK_D2 */\
    CMD(a, b, c, d, e, int,,, SLK2_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_OUT_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK2_OUT_TILE_HEIGHT,,,,,,)\
    /* SLK_D3 */\
    CMD(a, b, c, d, e, int,,, SLK3_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_OUT_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK3_OUT_TILE_HEIGHT,,,,,,)\
    /* SLK_D4 */\
    CMD(a, b, c, d, e, int,,, SLK4_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_OUT_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK4_OUT_TILE_HEIGHT,,,,,,)\
    /* SLK_D5 */\
    CMD(a, b, c, d, e, int,,, SLK5_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_OUT_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK5_OUT_TILE_HEIGHT,,,,,,)\
    /* SLK_D6 */\
    CMD(a, b, c, d, e, int,,, SLK6_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_OUT_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, SLK6_OUT_TILE_HEIGHT,,,,,,)\
    /* NDG_D1 */\
    CMD(a, b, c, d, e, int,,, NDG_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG_TILE_YEND,,,,,,)\
    /* NDG_D2 */\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, NDG2_TILE_YEND,,,,,,)\
    /* LCEI_D1 */\
    CMD(a, b, c, d, e, int,,, LCEI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCEI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCEI_TILE_YSIZE,,,,,,)\
    /* LCE_D1 */\
    CMD(a, b, c, d, e, int,,, LCE_TILE_OFFSET_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_OFFSET_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_BIAS_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_BIAS_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_IMAGE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_IMAGE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_SLM_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_SLM_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, LCE_TILE_EDGE,,,,,,)\
    /* CRZ_D1 */\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Luma_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Luma_Vertical_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Chroma_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Chroma_Vertical_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Luma_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Luma_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Chroma_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZ_Tile_Chroma_Vertical_Subpixel_Offset,,,,,,)\
    /* CRZO_D1 */\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_FULL_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZO_TILE_DUAL_XSTART,,,,,,)\
    /* CRZBO_D1 */\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRZBO_TILE_FULL_YSIZE,,,,,,)\
    /* EE_D1 */\
    CMD(a, b, c, d, e, int,,, EE_TILE_EDGE,,,,,,)\
    /* AKS_D1 */\
    CMD(a, b, c, d, e, int,,, AKS_TILE_EDGE,,,,,,)\
    /* NR3D_D1 */\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_ON_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_ON_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_ON_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_ON_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, NR3D_TILE_Y,,,,,,)\
    /* CRSP_D1 */\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP_TILE_CROP_YEND,,,,,,)\
    /* CRSP_D2 */\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CRSP2_TILE_CROP_YEND,,,,,,)\
    /* DCE_D1 */\
    CMD(a, b, c, d, e, int,,, DCES_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCES_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCES_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCES_TILE_CROP_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCES_HSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCES_VSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCES_CLEAR,,,,,,)\
    /* DCESO_D1 */\
    CMD(a, b, c, d, e, int,,, DCESO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCESO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCESO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, DCESO_TILE_YOFFSET,,,,,,)\
    /* IMG3O_D1 */\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_FULL_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3O_TILE_DUAL_XSTART,,,,,,)\
    /* IMG3BO_D1 */\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3BO_TILE_FULL_YSIZE,,,,,,)\
    /* IMG3CO_D1 */\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, IMG3CO_TILE_FULL_YSIZE,,,,,,)\
    /* SRZ_D1 */\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Luma_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Luma_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Luma_Vertical_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ1_Tile_Luma_Vertical_Subpixel_Offset,,,,,,)\
    /* SRZ_D3 */\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Luma_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Luma_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Luma_Vertical_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ3_Tile_Luma_Vertical_Subpixel_Offset,,,,,,)\
    /* SRZ_D4 */\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Luma_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Luma_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Luma_Vertical_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, SRZ4_Tile_Luma_Vertical_Subpixel_Offset,,,,,,)\
    /* DFE_D1 */\
    CMD(a, b, c, d, e, int,,, DFE_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, DFE_TILE_XIDX,,,,,,)\
    CMD(a, b, c, d, e, int,,, DFE_TILE_YIDX,,,,,,)\
    CMD(a, b, c, d, e, int,,, DFE_TILE_START_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, DFE_TILE_START_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, DFE_TILE_IN_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, DFE_TILE_IN_HEIGHT,,,,,,)\
    /* FEO_D1 */\
    CMD(a, b, c, d, e, int,,, FEO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, FEO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, FEO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, FEO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, FEO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, FEO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, FEO_TILE_FULL_YSIZE,,,,,,)\
    /* C02_D1 */\
    CMD(a, b, c, d, e, int,,, C02_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02_TILE_CROP_YEND,,,,,,)\
    /* C02_D2 */\
    CMD(a, b, c, d, e, int,,, C02D2_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02D2_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02D2_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02D2_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, C02D2_TILE_CROP_YEND,,,,,,)\
    /* C24_D1 */\
    CMD(a, b, c, d, e, int,,, C24_TILE_EDGE,,,,,,)\
    /* C24_D2 */\
    CMD(a, b, c, d, e, int,,, C24D2_TILE_EDGE,,,,,,)\
    /* C24_D3 */\
    CMD(a, b, c, d, e, int,,, C24D3_TILE_EDGE,,,,,,)\
    /* C42_D1 */\
    CMD(a, b, c, d, e, int,,, C42_TILE_EDGE,,,,,,)\
    /* C42_D2 */\
    CMD(a, b, c, d, e, int,,, C42D2_TILE_EDGE,,,,,,)\
    /* C42_D4 */\
    CMD(a, b, c, d, e, int,,, C42D4_TILE_EDGE,,,,,,)\
    /* YNR_D1 */\
    CMD(a, b, c, d, e, int,,, YNR_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, YNR_LTM_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, YNR_LTM_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, YNR_LTM_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, YNR_LTM_RIGHT_LOSS,,,,,,)\
    /* CNR_D1 */\
    CMD(a, b, c, d, e, int,,, CNR_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, CNR_BOK_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, CNR_BOK_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, CNR_BOK_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, CNR_BOK_RIGHT_LOSS,,,,,,)\
    /* COLOR_D1 */\
    CMD(a, b, c, d, e, int,,, COLOR_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, COLOR_CROP_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, COLOR_CROP_V,,,,,,)\
    /* OBC_D1 */\
    CMD(a, b, c, d, e, int,,, OBC_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, OBC_TILE_LE_INV_CTL,,,,,,)\
    /* BPC_D1 */\
    CMD(a, b, c, d, e, int,,, BPC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, BPC_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, BPC_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, BPC_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, BPC_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, BPC_TILE_LE_INV_CTL,,,,,,)\
    /* ZFUS_D1 */\
    CMD(a, b, c, d, e, int,,, ZFUS_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, ZFUS_TILE_LE_INV_CTL,,,,,,)\
    /* SMTI_D1 */\
    CMD(a, b, c, d, e, int,,, SMT1I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1I_TILE_YSIZE,,,,,,)\
    /* SMTO_D1 */\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TILE_FULL_YSIZE,,,,,,)\
    /* SMTI_D2 */\
    CMD(a, b, c, d, e, int,,, SMT2I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2I_TILE_YSIZE,,,,,,)\
    /* SMTO_D2 */\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TILE_FULL_YSIZE,,,,,,)\
    /* SMTI_D3 */\
    CMD(a, b, c, d, e, int,,, SMT3I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3I_TILE_YSIZE,,,,,,)\
    /* SMTO_D3 */\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TILE_FULL_YSIZE,,,,,,)\
    /* SMTI_D4 */\
    CMD(a, b, c, d, e, int,,, SMT4I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4I_TILE_YSIZE,,,,,,)\
    /* SMTO_D4 */\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TILE_FULL_YSIZE,,,,,,)\
    /* SMTI_D5 */\
    CMD(a, b, c, d, e, int,,, SMT5I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5I_TILE_YSIZE,,,,,,)\
    /* SMTO_D5 */\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TILE_FULL_YSIZE,,,,,,)\
    /* SMTI_D6 */\
    CMD(a, b, c, d, e, int,,, SMT6I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6I_TILE_YSIZE,,,,,,)\
    /* SMTO_D6 */\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TILE_FULL_YSIZE,,,,,,)\
    /* UFBCD */\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_FRAME_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_FRAME_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_CLIP_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_CLIP_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_CLIP_OFSET_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_CLIP_OFSET_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_LUMA_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCD_TILE_LUMA_YEND,,,,,,)\
    /* UFBCE */\
    CMD(a, b, c, d, e, int,,, UFBCE_TILE_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCE_TILE_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCE_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, UFBCE_TILE_HT,,,,,,)\
    /* MFBI */\
    CMD(a, b, c, d, e, int,,, MFBI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBI_TILE_YSIZE,,,,,,)\
    /* MFBI_B */\
    CMD(a, b, c, d, e, int,,, MFBI_B_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBI_B_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBI_B_TILE_YSIZE,,,,,,)\
    /* MFB3I */\
    CMD(a, b, c, d, e, int,,, MFB3I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB3I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB3I_TILE_YSIZE,,,,,,)\
    /* MFB4I */\
    CMD(a, b, c, d, e, int,,, MFB4I_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB4I_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB4I_TILE_YSIZE,,,,,,)\
    /* MFB_C02 */\
    CMD(a, b, c, d, e, int,,, MFB_C02_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_C02_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_C02_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_C02_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_C02_TILE_CROP_YEND,,,,,,)\
    /* MFB_CRSP */\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRSP_TILE_CROP_YEND,,,,,,)\
    /* MFB_Y_UNP */\
    CMD(a, b, c, d, e, int,,, MFB_Y_UNP_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_Y_UNP_OFST_EDB,,,,,,)\
    /* MFB_C_UNP */\
    CMD(a, b, c, d, e, int,,, MFB_C_UNP_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_C_UNP_OFST_EDB,,,,,,)\
    /* MFB */\
    CMD(a, b, c, d, e, int,,, MFB_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_TILE_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_TILE_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_TILE_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_TILE_RIGHT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_CONF_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_CONF_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_CONF_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_CONF_RIGHT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_WT_TOP_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_WT_BOTTOM_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_WT_LEFT_LOSS,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_WT_RIGHT_LOSS,,,,,,)\
    /* MFB_SRZ */\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Luma_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Luma_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Luma_Vertical_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB_SRZ_Tile_Luma_Vertical_Subpixel_Offset,,,,,,)\
    /* MFBO */\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_TILE_FULL_YSIZE,,,,,,)\
    /* MFBO_B */\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFBO_B_TILE_FULL_YSIZE,,,,,,)\
    /* MFB2O */\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MFB2O_TILE_FULL_YSIZE,,,,,,)\
    /* MSF */\
    CMD(a, b, c, d, e, int,,, MSF_LAST_TILE_FLAG,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_FIRST_TILE_FLAG,,,,,,)\
    /* MSF_UNP_BASEIY */\
    CMD(a, b, c, d, e, int,,, MSF_UNP_BASEIY_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_UNP_BASEIY_OFST_EDB,,,,,,)\
    /* MSF_UNP_BASEIC */\
    CMD(a, b, c, d, e, int,,, MSF_UNP_BASEIC_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_UNP_BASEIC_OFST_EDB,,,,,,)\
    /* MSF_UNP_REFIY */\
    CMD(a, b, c, d, e, int,,, MSF_UNP_REFIY_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_UNP_REFIY_OFST_EDB,,,,,,)\
    /* MSF_UNP_REFIC */\
    CMD(a, b, c, d, e, int,,, MSF_UNP_REFIC_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_UNP_REFIC_OFST_EDB,,,,,,)\
    /* MSF_UNP_DSIY */\
    CMD(a, b, c, d, e, int,,, MSF_UNP_DSIY_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_UNP_DSIY_OFST_EDB,,,,,,)\
    /* MSF_UNP_DSIC */\
    CMD(a, b, c, d, e, int,,, MSF_UNP_DSIC_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_UNP_DSIC_OFST_EDB,,,,,,)\
    /* MSF_RDMA_BASEIY */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_BASEIY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_BASEIY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_BASEIY_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_BASEIC */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_BASEIC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_BASEIC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_BASEIC_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_REFIY */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_REFIY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_REFIY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_REFIY_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_REFIC */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_REFIC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_REFIC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_REFIC_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_DSIY */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSIY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSIY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSIY_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_DSIC */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSIC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSIC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSIC_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_IDIY */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_IDIY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_IDIY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_IDIY_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_IDIC */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_IDIC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_IDIC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_IDIC_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_WEI */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_WEI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_WEI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_WEI_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_DSWI */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSWI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSWI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_DSWI_TILE_YSIZE,,,,,,)\
    /* MSF_RDMA_CONFI */\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_CONFI_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_CONFI_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_RDMA_CONFI_TILE_YSIZE,,,,,,)\
    /* MSF_WDMA_FSOY */\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOY_TILE_FULL_YSIZE,,,,,,)\
    /* MSF_WDMA_FSOC */\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_FSOC_TILE_FULL_YSIZE,,,,,,)\
    /* MSF_WDMA_WEO */\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_WEO_TILE_FULL_YSIZE,,,,,,)\
    /* MSF_WDMA_DSWO */\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WDMA_DSWO_TILE_FULL_YSIZE,,,,,,)\
    /* MSF_CDRZ_BASEI */\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_BASEI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_BASEI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_BASEI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_BASEI_Tile_Output_Image_H,,,,,,)\
    /* MSF_CDRZ_REFI */\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_REFI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_REFI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_REFI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CDRZ_REFI_Tile_Output_Image_H,,,,,,)\
    /* MSF_YDRZ_BASEI */\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_BASEI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_BASEI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_BASEI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_BASEI_Tile_Output_Image_H,,,,,,)\
    /* MSF_YDRZ_REFI */\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_REFI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_REFI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_REFI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YDRZ_REFI_Tile_Output_Image_H,,,,,,)\
    /* MSF_CURZ_BASEI */\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_BASEI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_CURZ_REFI */\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_REFI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_CURZ_DSI */\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_DSI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_CURZ_IDI */\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CURZ_IDI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_YURZ_REFI */\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_REFI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_YURZ_BASEI */\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_BASEI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_YURZ_DSI */\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_YURZ_IDI */\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_IDI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_YURZ_DSWI */\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_DSWI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_YURZ_CONFI */\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Output_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Horizontal_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Horizontal_Integer_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Vertical_Subpixel_Offset,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_YURZ_CONFI_Tile_Vertical_Integer_Offset,,,,,,)\
    /* MSF_SLK */\
    CMD(a, b, c, d, e, int,,, MSF_SLK_IN_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_IN_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_IN_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_IN_TILE_YOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_OUT_TILE_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_OUT_TILE_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_OUT_TILE_XOFF,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_SLK_OUT_TILE_YOFF,,,,,,)\
    /* MSF_CRP_FSO */\
    CMD(a, b, c, d, e, int,,, MSF_CRP_FSO_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_FSO_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_FSO_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_FSO_YEND,,,,,,)\
    /* MSF_CRP_WEO */\
    CMD(a, b, c, d, e, int,,, MSF_CRP_WEO_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_WEO_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_WEO_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_WEO_YEND,,,,,,)\
    /* MSF_CRP_DSWO */\
    CMD(a, b, c, d, e, int,,, MSF_CRP_DSWO_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_DSWO_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_DSWO_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_CRP_DSWO_YEND,,,,,,)\
    /* MSF */\
    CMD(a, b, c, d, e, int,,, MSF_TILE_ROI_X1,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_TILE_ROI_Y1,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_TILE_ROI_X2,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_TILE_ROI_Y2,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_HT,,,,,,)\
    /* MSF_GF_NS */\
    CMD(a, b, c, d, e, int,,, MSF_GF_INIT_XCNT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_GF_INIT_YCNT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_NS_INIT_XCNT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSF_NS_INIT_YCNT,,,,,,)\
    /* MSF_TILE_IDX */\
    CMD(a, b, c, d, e, int,,, MSF_TILE_IDX,,,,,,)\
    /* MSS */\
    CMD(a, b, c, d, e, int,,, MSS_TILE_EDGE,,,,,,)\
    /* MSS_RDMA_MSSIY */\
    CMD(a, b, c, d, e, int,,, MSS_RDMA_MSSIY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_RDMA_MSSIY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_RDMA_MSSIY_TILE_YSIZE,,,,,,)\
    /* MSS_RDMA_MSSIC */\
    CMD(a, b, c, d, e, int,,, MSS_RDMA_MSSIC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_RDMA_MSSIC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_RDMA_MSSIC_TILE_YSIZE,,,,,,)\
    /* MSS_WDMA_MSSOY */\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOY_TILE_FULL_YSIZE,,,,,,)\
    /* MSS_WDMA_MSSOC */\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_MSSOC_TILE_FULL_YSIZE,,,,,,)\
    /* MSS_WDMA_OMCOY */\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOY_TILE_FULL_YSIZE,,,,,,)\
    /* MSS_WDMA_OMCOC */\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_OFFSET_ADDR,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_YSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_XOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_YOFFSET,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_FULL_XSIZE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_WDMA_OMCOC_TILE_FULL_YSIZE,,,,,,)\
    /* MSS_DRZ_YDRZ */\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_YDRZ_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_YDRZ_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_YDRZ_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_YDRZ_Tile_Output_Image_H,,,,,,)\
    /* MSS_DRZ_VDRZ */\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_VDRZ_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_VDRZ_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_VDRZ_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_VDRZ_Tile_Output_Image_H,,,,,,)\
    /* MSS_DRZ_CDRZ */\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_CDRZ_Tile_Input_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_CDRZ_Tile_Input_Image_H,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_CDRZ_Tile_Output_Image_W,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_DRZ_CDRZ_Tile_Output_Image_H,,,,,,)\
    /* MSS_CRSP */\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRSP_TILE_CROP_YEND,,,,,,)\
    /* MSS_OMC */\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_OFST_X,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_OFST_Y,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_EDGE,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_CROP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_CROP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_CROP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_OMC_TILE_CROP_YEND,,,,,,)\
    /* MSS_UNP_MSSIY */\
    CMD(a, b, c, d, e, int,,, MSS_UNP_MSSIY_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_UNP_MSSIY_OFST_EDB,,,,,,)\
    /* MSS_UNP_MSSIC */\
    CMD(a, b, c, d, e, int,,, MSS_UNP_MSSIC_OFST_STB,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_UNP_MSSIC_OFST_EDB,,,,,,)\
    /* MSS_CRP_DRZY */\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZY_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZY_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZY_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZY_YEND,,,,,,)\
    /* MSS_CRP_DRZC */\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZC_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZC_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZC_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_DRZC_YEND,,,,,,)\
    /* MSS_CRP_OMCOY */\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCY_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCY_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCY_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCY_YEND,,,,,,)\
    /* MSS_CRP_OMCOC */\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCC_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCC_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCC_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, MSS_CRP_OMCC_YEND,,,,,,)\
    /* Internal */\
    CMD(a, b, c, d, e, int,,, CTRL_IMGI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_IMGBI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_IMGCI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_VIPI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_VIPBI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_VIPCI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DEPI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DMGI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_LCEI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_IMG3O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_IMG3BO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_IMG3CO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP5_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP7_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP8_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP9_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP10_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP11_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP16_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_COLOR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_NR3D_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SLK1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SLK2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SLK3_EN,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SLK4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SLK5_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SLK6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_NDG_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_NDG2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_YCNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_TIMGO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_G2CX_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C42_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_YNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PCA_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_EE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_AKS_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK5_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK7_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK8_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAK16_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PAKG_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UFDI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UFBCD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UFBCE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UNP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_LSC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_WB_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_HLR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_LTM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_LDNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_FLC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CCM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CCM2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_GGM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_GGM2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C24D2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C24D3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C2G_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_IGGM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CCM3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_GGM3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DCE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DCES_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DCESO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_G2C_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C42D2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_LCE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRZO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRZBO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PLNW1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_PLNW2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_DFE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_FEO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SRZ1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SRZ3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SRZ4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C02_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C24_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRSP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MIX1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MIX2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MIX3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1I_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2I_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3I_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4I_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5I_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6I_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1_TRD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1_TRU_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1_CRPINL_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1_CRPINR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT1_CRPOUT_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2_TRD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2_TRU_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2_CRPINL_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2_CRPINR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT2_CRPOUT_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3_TRD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3_TRU_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3_CRPINL_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3_CRPINR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT3_CRPOUT_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4_TRD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4_TRU_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4_CRPINL_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4_CRPINR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT4_CRPOUT_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5_TRD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5_TRU_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5_CRPINL_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5_CRPINR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT5_CRPOUT_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6_TRD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6_TRU_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6_CRPINL_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6_CRPINR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_SMT6_CRPOUT_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRZ_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_BS_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_BPC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_OBC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_C02D2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_UFD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_YUFD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_ZFUS_EN,,,,,,)\
    /* SMT_D1 */\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINL_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINL_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINL_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINL_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINR_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINR_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINR_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPINR_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPOUT_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPOUT_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPOUT_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_CRPOUT_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_LEFT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_RIGHT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_TRU_IN_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1_TRU_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT1O_TDR_OFFSET,,,,,,)\
    /* SMT_D2 */\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINL_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINL_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINL_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINL_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINR_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINR_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINR_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPINR_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPOUT_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPOUT_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPOUT_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_CRPOUT_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_LEFT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_RIGHT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_TRU_IN_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2_TRU_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT2O_TDR_OFFSET,,,,,,)\
    /* SMT_D3 */\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINL_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINL_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINL_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINL_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINR_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINR_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINR_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPINR_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPOUT_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPOUT_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPOUT_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_CRPOUT_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_LEFT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_RIGHT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_TRU_IN_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3_TRU_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT3O_TDR_OFFSET,,,,,,)\
    /* SMT_D4 */\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINL_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINL_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINL_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINL_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINR_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINR_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINR_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPINR_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPOUT_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPOUT_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPOUT_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_CRPOUT_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_LEFT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_RIGHT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_TRU_IN_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4_TRU_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT4O_TDR_OFFSET,,,,,,)\
    /* SMT_D5 */\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINL_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINL_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINL_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINL_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINR_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINR_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINR_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPINR_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPOUT_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPOUT_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPOUT_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_CRPOUT_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_LEFT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_RIGHT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_TRU_IN_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5_TRU_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT5O_TDR_OFFSET,,,,,,)\
    /* SMT_D6 */\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINL_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINL_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINL_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINL_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINR_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINR_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINR_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPINR_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPOUT_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPOUT_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPOUT_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_CRPOUT_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_LEFT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_RIGHT_DISABLE,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_TRU_IN_HT,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6_TRU_IN_WD,,,,,,)\
    CMD(a, b, c, d, e, int,,, SMT6O_TDR_OFFSET,,,,,,)\
    /* MCRP_D1 */\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP_YEND,,,,,,)\
    /* MCRP_D2 */\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP2_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP2_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP2_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_MCRP2_YEND,,,,,,)\
    /* CRP_D1 */\
    CMD(a, b, c, d, e, int,,, CTRL_CRP_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP_YEND,,,,,,)\
    /* CRP_D2 */\
    CMD(a, b, c, d, e, int,,, CTRL_CRP2_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP2_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP2_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP2_YEND,,,,,,)\
    /* CRP_D3 */\
    CMD(a, b, c, d, e, int,,, CTRL_CRP3_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP3_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP3_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP3_YEND,,,,,,)\
    /* CRP_D4 */\
    CMD(a, b, c, d, e, int,,, CTRL_CRP4_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP4_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP4_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, CTRL_CRP4_YEND,,,,,,)\
    /* WPE_DL */\
    CMD(a, b, c, d, e, int,,, WPE_FRAME_WIDTH,,,,,,)\
    CMD(a, b, c, d, e, int,,, WPE_FRAME_HEIGHT,,,,,,)\
    CMD(a, b, c, d, e, int,,, WPE_END_XSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, WPE_END_XEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, WPE_END_YSTART,,,,,,)\
    CMD(a, b, c, d, e, int,,, WPE_END_YEND,,,,,,)\
    CMD(a, b, c, d, e, int,,, WPE_DL_LAST_TILE,,,,,,)\

/* register table ( , , tile driver) for tile driver only parameters */
/* a, b, c, d, e reserved */
/* data type */
/* register name of current c model */
/* register name of HW ISP & platform parameters */
/* internal variable name of tile */
/* array bracket [xx] */
/* valid condition by tdr_en to print platform log with must string, default: false */
/* isp_reg.h reg name */
/* isp_reg.h field name */
/* direct-link param 0: must be equal, 1: replaced by MDP, 2: don't care */
#define ISP_TILE_INTERNAL_REG_LUT(CMD, a, b, c, d, e) \
    /* tdr_control_en */\
    CMD(a, b, c, d, e, int,,, LOG_IMGI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_IMGBI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_IMGCI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_VIPI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_VIPBI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_VIPCI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UFDI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP7_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP8_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP9_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP10_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UNP11_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UFBCD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UFBCE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_UFD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_YUFD_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_OBC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PAK_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PAK6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PAK7_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PAK8_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRP2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_BPC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_ZFUS_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_LSC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_WB_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_HLR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_LTM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_LDNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_FLC_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CCM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CCM2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_GGM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_GGM2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRP3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRP4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C42_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C42D2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_G2C_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_G2CX_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_TIMGO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_YNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CNR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_COLOR_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_NR3D_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SLK1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SLK2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SLK3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SLK4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SLK5_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SLK6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_NDG_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_NDG2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C24_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C24D2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C24D3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C2G_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_IGGM_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CCM3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_GGM3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DCE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DCES_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DCESO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_EE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_AKS_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_IMG3O_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_IMG3BO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_IMG3CO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRZO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRZBO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DEPI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DMGI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_LCEI_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_LCE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SRZ1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SRZ3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SRZ4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRZ_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PLNR1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PLNW1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_PLNW2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C02_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_C02D2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_CRSP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_MCP_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_MCP2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_DFE_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_FEO_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SMT2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SMT3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SMT4_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SMT5_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_SMT6_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_MIX1_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_MIX2_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_MIX3_EN,,,,,,)\
    CMD(a, b, c, d, e, int,,, LOG_WPE_DL_EN,,,,,,)\

#endif
