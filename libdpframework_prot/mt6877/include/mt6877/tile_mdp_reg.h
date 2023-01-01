#ifndef __TILE_MDP_REG_H__
#define __TILE_MDP_REG_H__

#include "DpTileScaler.h"

class DpRingBufferPool;
typedef int32_t (*pullBufferDataCB) (DpRingBufferPool *pBuf,
                                     int32_t bufID,
                                     int32_t left,
                                     int32_t right,
                                     int32_t top,
                                     int32_t bottom);

typedef int32_t (*fitConstraintCB) (DpRingBufferPool *pBuf,
                                    int32_t orgLeft,
                                    int32_t orgRight,
                                    int32_t orgTop,
                                    int32_t orgBottom,
                                    int32_t &newLeft ,
                                    int32_t &newRight,
                                    int32_t &newTop,
                                    int32_t &newBottom);
/* id enum */
#define MDP_TILE_FUNC_ID_ENUM_DECLARE \
    TILE_FUNC_MDP_BASE = (10000),\
    TILE_FUNC_CAMIN_ID = TILE_FUNC_MDP_BASE + 6, \
    TILE_FUNC_CAMIN2_ID,\
    TILE_FUNC_RDMA0_ID,\
    TILE_FUNC_RDMA1_ID,\
    TILE_FUNC_HDR0_ID,\
    TILE_FUNC_COLOR0_ID,\
    TILE_FUNC_AAL0_ID,\
    TILE_FUNC_AAL1_ID,\
    TILE_FUNC_PRZ0_ID,\
    TILE_FUNC_PRZ1_ID,\
    TILE_FUNC_TDSHP0_ID,\
    TILE_FUNC_TDSHP1_ID,\
    TILE_FUNC_WROT0_ID,\
    TILE_FUNC_WROT1_ID

/* error enum */
#define MDP_TILE_ERROR_MESSAGE_ENUM(n, CMD) \
    /* Ring Buffer control */\
    CMD(n, MDP_MESSAGE_BUFFER_EMPTY, ISP_TPIPE_MESSAGE_FAIL)\
    /* RDMA check */\
    CMD(n, MDP_MESSAGE_RDMA_NULL_DATA, ISP_TPIPE_MESSAGE_FAIL)\
    /* HDR check */\
    CMD(n, MDP_MESSAGE_HDR_NULL_DATA, ISP_TPIPE_MESSAGE_FAIL)\
    /* AAL check */\
    CMD(n, MDP_MESSAGE_AAL_NULL_DATA, ISP_TPIPE_MESSAGE_FAIL)\
    /* PRZ check */\
    CMD(n, MDP_MESSAGE_PRZ_NULL_DATA, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, MDP_MESSAGE_RESIZER_SCALING_ERROR, ISP_TPIPE_MESSAGE_FAIL)\
    /* TDSHP check */\
    CMD(n, MDP_MESSAGE_TDSHP_BACK_LT_FORWARD, ISP_TPIPE_MESSAGE_FAIL)\
    /* WROT check */\
    CMD(n, MDP_MESSAGE_WROT_NULL_DATA, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, MDP_MESSAGE_WROT_INVALID_FORMAT, ISP_TPIPE_MESSAGE_FAIL)\
    /* WDMA check */\
    CMD(n, MDP_MESSAGE_WDMA_NULL_DATA, ISP_TPIPE_MESSAGE_FAIL)\
    /* General status */\
    CMD(n, MDP_MESSAGE_INVALID_STATE, ISP_TPIPE_MESSAGE_FAIL)\
    CMD(n, MDP_MESSAGE_UNKNOWN_ERROR, ISP_TPIPE_MESSAGE_FAIL)\

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
#define MDP_TILE_HW_REG_LUT(CMD, a, b, c, d, e) \
    /* Common */\
    /* module enable register */\
    CMD(a, b, c, d, e, int, enable_ISP,, CAMIN_EN,,,,,, enable_ISP,,)\
    CMD(a, b, c, d, e, int, enable_ISP2,, CAMIN2_EN,,,,,, enable_ISP2,,)\
    CMD(a, b, c, d, e, int, enable_MDP_RDMA0,, RDMA0_EN,,,,,, enable_MDP_RDMA0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_RDMA1,, RDMA1_EN,,,,,, enable_MDP_RDMA1,,)\
    CMD(a, b, c, d, e, int, enable_MDP_HDR0,, HDR0_EN,,,,,, enable_MDP_HDR0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_COLOR0,, COLOR0_EN,,,,,, enable_MDP_COLOR0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_AAL0,, AAL0_EN,,,,,, enable_MDP_AAL0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_AAL1,, AAL1_EN,,,,,, enable_MDP_AAL1,,)\
    CMD(a, b, c, d, e, int, enable_MDP_PRZ0,, PRZ0_EN,,,,,, enable_MDP_PRZ0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_PRZ1,, PRZ1_EN,,,,,, enable_MDP_PRZ1,,)\
    CMD(a, b, c, d, e, int, enable_MDP_TDSHP0,, TDSHP0_EN,,,,,, enable_MDP_TDSHP0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_TDSHP1,, TDSHP1_EN,,,,,, enable_MDP_TDSHP1,,)\
    CMD(a, b, c, d, e, int, enable_MDP_PQ0_SOUT,, PQ0_SOUT_EN,,,,,, enable_MDP_PQ0_SOUT,,)\
    CMD(a, b, c, d, e, int, enable_MDP_PQ1_SOUT,, PQ1_SOUT_EN,,,,,, enable_MDP_PQ1_SOUT,,)\
    CMD(a, b, c, d, e, int, enable_MDP_WROT0,, WROT0_EN,,,,,, enable_MDP_WROT0,,)\
    CMD(a, b, c, d, e, int, enable_MDP_WROT1,, WROT1_EN,,,,,, enable_MDP_WROT1,,)\
    /* MUX - mout */\
    CMD(a, b, c, d, e, int, DISP_isp_mout_en, ISP0_MOUT_EN, CAMIN_OUT,,,,,, DISP_isp_mout_en,,)\
    CMD(a, b, c, d, e, int, DISP_isp2_mout_en, ISP1_MOUT_EN, CAMIN2_OUT,,,,,, DISP_isp2_mout_en,,)\
    CMD(a, b, c, d, e, int, DISP_mdp_rdma0_mout_en, MDP_RDMA0_MOUT_EN, RDMA0_OUT,,,,,, DISP_mdp_rdma0_mout_en,,)\
    CMD(a, b, c, d, e, int, DISP_mdp_rdma1_mout_en, MDP_RDMA1_MOUT_EN, RDMA1_OUT,,,,,, DISP_mdp_rdma1_mout_en,,)\
    /* MUX - sel in */\
    CMD(a, b, c, d, e, int, DISP_mdp_pq0_sel, MDP_PQ0_SEL_IN, PQ0_SEL,,,,,, DISP_mdp_pq0_sel,,)\
    CMD(a, b, c, d, e, int, DISP_mdp_pq1_sel, MDP_PQ1_SEL_IN, PQ1_SEL,,,,,, DISP_mdp_pq1_sel,,)\
    CMD(a, b, c, d, e, int, DISP_mdp_wrot0_sel, MDP_WROT0_SEL_IN, WROT0_SEL,,,,,, DISP_mdp_wrot0_sel,,)\
    CMD(a, b, c, d, e, int, DISP_mdp_wrot1_sel, MDP_WROT1_SEL_IN, WROT1_SEL,,,,,, DISP_mdp_wrot1_sel,,)\
    /* MUX - sel out */\
    CMD(a, b, c, d, e, int, DISP_mdp_pq0_sout, MDP_PQ0_SOUT_SEL, PQ0_SOUT,,,,,, DISP_mdp_pq0_sout,,)\
    CMD(a, b, c, d, e, int, DISP_mdp_pq1_sout, MDP_PQ1_SOUT_SEL, PQ1_SOUT,,,,,, DISP_mdp_pq1_sout,,)\


typedef struct TILE_FUNC_DATA_STRUCT
{
} TILE_FUNC_DATA_STRUCT;

#define USE_DP_TILE_SCALER  1
#define RDMA_CROP_LEFT_TOP  0//(!TILE_SCALER_FORMAT_YUV422)
#define AAL_MIN_WIDTH       50
#define HDR_MIN_WIDTH       16
#define HFG_MIN_WIDTH       9   // HFG min + TDSHP crop

#define ISP_MESSAGE_ENUM    ISP_TILE_MESSAGE_ENUM
#define ISP_MESSAGE_OK      ISP_MESSAGE_TILE_OK

class DpRingBufferPool;

typedef struct MDP_RDMA_DATA : public TILE_FUNC_DATA_STRUCT
{
    DpColorFormat       m_sourceColorFormat;
    bool                m_isRingBufferMode;
    DpRingBufferPool    *m_pRingBufferPool;
    pullBufferDataCB    m_pPullDataFunc;
    fitConstraintCB     m_pFitConstraintFunc;
    bool                m_isVideoBlockMode;
    uint32_t            m_videoBlockShiftW;
    uint32_t            m_videoBlockShiftH;
    uint32_t            m_cropOffsetX;
    uint32_t            m_cropOffsetY;
    uint32_t            m_cropWidth;
    uint32_t            m_cropHeight;
    uint32_t            m_identifier;
    bool                m_alphaRot;

    MDP_RDMA_DATA()
        : m_sourceColorFormat(DP_COLOR_UNKNOWN),
          m_isRingBufferMode(false),
          m_pRingBufferPool(NULL),
          m_pPullDataFunc(NULL),
          m_pFitConstraintFunc(NULL),
          m_isVideoBlockMode(false),
          m_videoBlockShiftW(0),
          m_videoBlockShiftH(0),
          m_cropOffsetX(0),
          m_cropOffsetY(0),
          m_cropWidth(0),
          m_cropHeight(0),
          m_identifier(0),
          m_alphaRot(false)
    {
    }
} MDP_RDMA_DATA;

typedef struct MDP_HDR_DATA : public TILE_FUNC_DATA_STRUCT
{
    bool m_isRelay;

    MDP_HDR_DATA()
        : m_isRelay(false)
    {
    }
} MDP_HDR_DATA;

typedef struct MDP_TCC_DATA : public TILE_FUNC_DATA_STRUCT
{
} MDP_TCC_DATA;

typedef struct MDP_FG_DATA : public TILE_FUNC_DATA_STRUCT
{
} MDP_FG_DATA;

typedef struct MDP_AAL_DATA : public TILE_FUNC_DATA_STRUCT
{
    bool m_YCropFromFrameTop;

    MDP_AAL_DATA()
        : m_YCropFromFrameTop(false)
    {
    }
} MDP_AAL_DATA;

typedef struct MDP_PRZ_DATA : public TILE_FUNC_DATA_STRUCT
{
    bool                        m_use121filter;
    uint32_t                    m_coeffStepX;
    uint32_t                    m_coeffStepY;
    uint32_t                    m_precisionX;
    uint32_t                    m_precisionY;

    int32_t                     m_cropOffsetX;
    int32_t                     m_cropSubpixX;
    int32_t                     m_cropWidth;
    int32_t                     m_cropOffsetY;
    int32_t                     m_cropSubpixY;
    int32_t                     m_cropHeight;

    bool                        m_horDirScale;
    DP_TILE_SCALER_ALGO_ENUM    m_horAlgorithm;
    bool                        m_verDirScale;
    DP_TILE_SCALER_ALGO_ENUM    m_verAlgorithm;
    int32_t                     m_C42OutFrameW;
    int32_t                     m_C24InFrameW;
    int32_t                     m_rszOutTileW;
    int32_t                     m_rszBackXLeft;
    int32_t                     m_rszBackXRight;
    uint32_t                    m_verticalFirst;
    uint32_t                    m_verCubicTrunc;

    MDP_PRZ_DATA()
        : m_use121filter(true),
          m_coeffStepX(0),
          m_coeffStepY(0),
          m_precisionX(0),
          m_precisionY(0),
          m_cropOffsetX(0),
          m_cropSubpixX(0),
          m_cropWidth(0),
          m_cropOffsetY(0),
          m_cropSubpixY(0),
          m_cropHeight(0),
          m_horDirScale(false),
          m_horAlgorithm(static_cast<DP_TILE_SCALER_ALGO_ENUM>(0)),
          m_verDirScale(false),
          m_verAlgorithm(static_cast<DP_TILE_SCALER_ALGO_ENUM>(0)),
          m_C42OutFrameW(0),
          m_C24InFrameW(0),
          m_rszOutTileW(0),
          m_rszBackXLeft(0),
          m_rszBackXRight(0),
          m_verticalFirst(0),
          m_verCubicTrunc(0)
    {
    }
} MDP_PRZ_DATA;

typedef struct MDP_TDSHP_DATA : public TILE_FUNC_DATA_STRUCT
{
    bool m_HFGEnable;

    MDP_TDSHP_DATA()
        : m_HFGEnable(false)
    {
    }
} MDP_TDSHP_DATA;

typedef struct MDP_WROT_DATA : public TILE_FUNC_DATA_STRUCT
{
    DpColorFormat   m_targetFormat;
    uint32_t        m_rotationAngle;
    bool            m_flipHorizontal;
    bool            m_enAlphaRot;
    bool            m_enWriteCrop;
    int32_t         m_outXOffset;
    int32_t         m_outCropWidth;
    uint32_t        m_FIFOMaxSize;
    uint32_t        m_maxLineCount;
    uint32_t        m_identifier;

    MDP_WROT_DATA()
        : m_targetFormat(DP_COLOR_UNKNOWN),
          m_rotationAngle(0),
          m_flipHorizontal(false),
          m_enAlphaRot(false),
          m_enWriteCrop(false),
          m_outXOffset(0),
          m_outCropWidth(0),
          m_FIFOMaxSize(0),
          m_maxLineCount(0),
          m_identifier(0)
    {
    }
} MDP_WROT_DATA;

#endif
