#ifndef __SOCS__
#define __SOCS__

#include "soc.h"

// List of supported SOCs
enum {
  // Broadcom //
  SOC_BCM_2835,
  SOC_BCM_2836,
  SOC_BCM_2837,
  SOC_BCM_2837B0,
  SOC_BCM_2711,
  SOC_BCM_21553,
  SOC_BCM_21553T,
  SOC_BCM_21663,
  SOC_BCM_21664,
  SOC_BCM_28155,
  SOC_BCM_23550,
  SOC_BCM_28145,
  SOC_BCM_2157,
  SOC_BCM_21654,
  // Hisilicon //
  SOC_HISILICON_3620,
  SOC_HISILICON_3630,
  SOC_HISILICON_3650,
  SOC_HISILICON_3660,
  SOC_HISILICON_3670,
  SOC_HISILICON_3680,
  SOC_HISILICON_3690,
  // Exynos //
  SOC_EXYNOS_3475,
  SOC_EXYNOS_4210,
  SOC_EXYNOS_4212,
  SOC_EXYNOS_4412,
  SOC_EXYNOS_5250,
  SOC_EXYNOS_5410,
  SOC_EXYNOS_5420,
  SOC_EXYNOS_5422,
  SOC_EXYNOS_5430,
  SOC_EXYNOS_5433,
  SOC_EXYNOS_5260,
  SOC_EXYNOS_7270,
  SOC_EXYNOS_7420,
  SOC_EXYNOS_7570,
  SOC_EXYNOS_7870,
  SOC_EXYNOS_7872,
  SOC_EXYNOS_7880,
  SOC_EXYNOS_7884,
  SOC_EXYNOS_7885,
  SOC_EXYNOS_7904,
  SOC_EXYNOS_8890,
  SOC_EXYNOS_8895,
  SOC_EXYNOS_9110,
  SOC_EXYNOS_9609,
  SOC_EXYNOS_9610,
  SOC_EXYNOS_9611,
  SOC_EXYNOS_9810,
  SOC_EXYNOS_9820,
  SOC_EXYNOS_9825,
  SOC_EXYNOS_1080,
  SOC_EXYNOS_990,
  SOC_EXYNOS_980,
  SOC_EXYNOS_880,
  // Mediatek //
  SOC_MTK_MT6893,
  SOC_MTK_MT6891,
  SOC_MTK_MT6889,
  SOC_MTK_MT6885Z,
  SOC_MTK_MT6853,
  SOC_MTK_MT6873,
  SOC_MTK_MT6875,
  SOC_MTK_MT6761D,
  SOC_MTK_MT6761,
  SOC_MTK_MT6762D,
  SOC_MTK_MT6755,
  SOC_MTK_MT6755M,
  SOC_MTK_MT6755T,
  SOC_MTK_MT6757,
  SOC_MTK_MT6762,
  SOC_MTK_MT6763V,
  SOC_MTK_MT6763T,
  SOC_MTK_MT6757CD,
  SOC_MTK_MT6758,
  SOC_MTK_MT6765,
  SOC_MTK_MT6771,
  SOC_MTK_MT6768,
  SOC_MTK_MT6771T,
  SOC_MTK_MT6771V,
  SOC_MTK_MT6779,
  SOC_MTK_MT6795,
  SOC_MTK_MT6795T,
  SOC_MTK_MT6797,
  SOC_MTK_MT6797M,
  SOC_MTK_MT6797D,
  SOC_MTK_MT6797T,
  SOC_MTK_MT6797X,
  SOC_MTK_MT6799,
  SOC_MTK_MT6515,
  SOC_MTK_MT6516,
  SOC_MTK_MT6517,
  SOC_MTK_MT6572,
  SOC_MTK_MT6572M,
  SOC_MTK_MT6573,
  SOC_MTK_MT6575,
  SOC_MTK_MT6577,
  SOC_MTK_MT6577T,
  SOC_MTK_MT6580,
  SOC_MTK_MT6582,
  SOC_MTK_MT6582M,
  SOC_MTK_MT6589,
  SOC_MTK_MT6589T,
  SOC_MTK_MT6592,
  SOC_MTK_MT6595,
  SOC_MTK_MT6732,
  SOC_MTK_MT6735,
  SOC_MTK_MT6735M,
  SOC_MTK_MT6735P,
  SOC_MTK_MT6737,
  SOC_MTK_MT6737M,
  SOC_MTK_MT6737T,
  SOC_MTK_MT6739,
  SOC_MTK_MT6750,
  SOC_MTK_MT6750S,
  SOC_MTK_MT6750T,
  SOC_MTK_MT6752,
  SOC_MTK_MT6753,
  SOC_MTK_MT6850,
  SOC_MTK_MT8121,
  SOC_MTK_MT8125,
  SOC_MTK_MT8127,
  SOC_MTK_MT8135,
  SOC_MTK_MT8163A,
  SOC_MTK_MT8163B,
  SOC_MTK_MT8167B,
  SOC_MTK_MT8173,
  SOC_MTK_MT8176,
  SOC_MTK_MT8321,
  SOC_MTK_MT8382,
  SOC_MTK_MT8581,
  SOC_MTK_MT8735,
  SOC_MTK_MT8765B,
  SOC_MTK_MT8783,
  // Snapdragon //
  SOC_SNAPD_QSD8650,
  SOC_SNAPD_QSD8250,
  SOC_SNAPD_MSM7627,
  SOC_SNAPD_MSM7227,
  SOC_SNAPD_MSM7627A,
  SOC_SNAPD_MSM7227A,
  SOC_SNAPD_MSM7625,
  SOC_SNAPD_MSM7225,
  SOC_SNAPD_MSM7625A,
  SOC_SNAPD_MSM7225A,
  SOC_SNAPD_MSM8655,
  SOC_SNAPD_MSM8255,
  SOC_SNAPD_APQ8055,
  SOC_SNAPD_MSM7630,
  SOC_SNAPD_MSM7230,
  SOC_SNAPD_MSM8660,
  SOC_SNAPD_MSM8260,
  SOC_SNAPD_APQ8060,
  SOC_SNAPD_MSM8225,
  SOC_SNAPD_MSM8625,
  SOC_SNAPD_APQ8060A,
  SOC_SNAPD_MSM8960,
  SOC_SNAPD_MSM8260A,
  SOC_SNAPD_MSM8627,
  SOC_SNAPD_MSM8227,
  SOC_SNAPD_APQ8064,
  SOC_SNAPD_MSM8960T,
  SOC_SNAPD_MSM8110,
  SOC_SNAPD_MSM8210,
  SOC_SNAPD_MSM8610,
  SOC_SNAPD_MSM8112,
  SOC_SNAPD_MSM8212,
  SOC_SNAPD_MSM8612,
  SOC_SNAPD_MSM8225Q,
  SOC_SNAPD_MSM8625Q,
  SOC_SNAPD_MSM8208,
  SOC_SNAPD_MSM8905,
  SOC_SNAPD_MSM8909,
  SOC_SNAPD_QM215,
  SOC_SNAPD_APQ8028,
  SOC_SNAPD_MSM8228,
  SOC_SNAPD_MSM8628,
  SOC_SNAPD_MSM8928,
  SOC_SNAPD_MSM8926,
  SOC_SNAPD_APQ8030AB,
  SOC_SNAPD_MSM8226,
  SOC_SNAPD_MSM8230AB,
  SOC_SNAPD_MSM8626,
  SOC_SNAPD_MSM8630,
  SOC_SNAPD_MSM8630AB,
  SOC_SNAPD_MSM8930,
  SOC_SNAPD_MSM8930AB,
  SOC_SNAPD_MSM8916,
  SOC_SNAPD_MSM8929,
  SOC_SNAPD_MSM8917,
  SOC_SNAPD_MSM8920,
  SOC_SNAPD_SDM429,
  SOC_SNAPD_MSM8937,
  SOC_SNAPD_MSM8940,
  SOC_SNAPD_SDM439,
  SOC_SNAPD_SDM450,
  SOC_SNAPD_SM4250_AA,
  SOC_SNAPD_APQ8064T,
  SOC_SNAPD_APQ8064M,
  SOC_SNAPD_MSM8936,
  SOC_SNAPD_MSM8939,
  SOC_SNAPD_MSM8952,
  SOC_SNAPD_MSM8953,
  SOC_SNAPD_MSM8953_PRO,
  SOC_SNAPD_SDM630,
  SOC_SNAPD_SDM632,
  SOC_SNAPD_SDM636,
  SOC_SNAPD_MSM8956,
  SOC_SNAPD_MSM8976,
  SOC_SNAPD_MSM8976_PRO,
  SOC_SNAPD_SDM660,
  SOC_SNAPD_SM6115,
  SOC_SNAPD_SM6125,
  SOC_SNAPD_SDM670,
  SOC_SNAPD_SM6150,
  SOC_SNAPD_SM6350,
  SOC_SNAPD_SDM710,
  SOC_SNAPD_SDM712,
  SOC_SNAPD_SM7125,
  SOC_SNAPD_SM7150_AA,
  SOC_SNAPD_SM7150_AB,
  SOC_SNAPD_SM7150_AC,
  SOC_SNAPD_SM7225,
  SOC_SNAPD_SM7250_AA,
  SOC_SNAPD_SM7250_AB,
  SOC_SNAPD_SM7250_AC,
  SOC_SNAPD_MSM8974AA,
  SOC_SNAPD_MSM8974AB,
  SOC_SNAPD_MSM8974AC,
  SOC_SNAPD_MSM8974PRO_AB,
  SOC_SNAPD_MSM8974PRO_AC,
  SOC_SNAPD_APQ8084,
  SOC_SNAPD_MSM8992,
  SOC_SNAPD_MSM8994,
  SOC_SNAPD_MSM8996,
  SOC_SNAPD_MSM8996_PRO_A,
  SOC_SNAPD_MSM8998,
  SOC_SNAPD_APQ8098,
  SOC_SNAPD_SDM845,
  SOC_SNAPD_SDM850,
  SOC_SNAPD_SM8150,
  SOC_SNAPD_SM8150_AC,
  SOC_SNAPD_SM8250,
  SOC_SNAPD_SM8250_AB,
  SOC_SNAPD_SM8350,
  SOC_SNAPD_SM8450,
  // APPLE
  SOC_APPLE_M1,
  SOC_APPLE_M1_PRO,
  SOC_APPLE_M1_MAX,
  SOC_APPLE_M1_ULTRA,
  SOC_APPLE_M2,
  // ALLWINNER
  SOC_ALLWINNER_A10,
  SOC_ALLWINNER_A13,
  SOC_ALLWINNER_A10S,
  SOC_ALLWINNER_A20,
  SOC_ALLWINNER_A23,
  SOC_ALLWINNER_A31,
  SOC_ALLWINNER_A31S,
  SOC_ALLWINNER_A33,
  SOC_ALLWINNER_A40,
  SOC_ALLWINNER_A50,
  SOC_ALLWINNER_A80,
  SOC_ALLWINNER_A83T,
  SOC_ALLWINNER_HZP,
  SOC_ALLWINNER_H3,
  SOC_ALLWINNER_H8,
  SOC_ALLWINNER_H5,
  SOC_ALLWINNER_H6,
  SOC_ALLWINNER_H616,
  SOC_ALLWINNER_R8,
  SOC_ALLWINNER_R16,
  SOC_ALLWINNER_R40,
  SOC_ALLWINNER_R58,
  SOC_ALLWINNER_R328
};

inline static VENDOR get_soc_vendor_from_soc(SOC soc) {
  if(soc >= SOC_BCM_2835 && soc <= SOC_BCM_21654) return SOC_VENDOR_BROADCOM;
  else if(soc >= SOC_HISILICON_3620 && soc <= SOC_HISILICON_3690) return SOC_VENDOR_KIRIN;
  else if(soc >= SOC_EXYNOS_3475 && soc <= SOC_EXYNOS_880) return SOC_VENDOR_EXYNOS;
  else if(soc >= SOC_MTK_MT6893 && soc <= SOC_MTK_MT8783) return SOC_VENDOR_MEDIATEK;
  else if(soc >= SOC_SNAPD_QSD8650 && soc <= SOC_SNAPD_SM8450) return SOC_VENDOR_SNAPDRAGON;
  else if(soc >= SOC_APPLE_M1 && soc <= SOC_APPLE_M2) return SOC_VENDOR_APPLE;
  else if(soc >= SOC_ALLWINNER_A10 && soc <= SOC_ALLWINNER_R328) return SOC_VENDOR_ALLWINNER;
  return SOC_VENDOR_UNKNOWN;
}

#endif
