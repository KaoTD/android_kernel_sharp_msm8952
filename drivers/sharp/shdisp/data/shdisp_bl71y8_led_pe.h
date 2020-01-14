/* drivers/sharp/shdisp/data/shdisp_bl71y8_led_pe.h  (Display Driver)
 *
 * Copyright (C) 2014 SHARP CORPORATION
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/* ------------------------------------------------------------------------- */
/* SHARP DISPLAY DRIVER FOR KERNEL MODE                                      */
/* ------------------------------------------------------------------------- */
#ifndef SHDISP_BL71Y8_LED_PE_H
#define SHDISP_BL71Y8_LED_PE_H

/* ------------------------------------------------------------------------- */
/* INCLUDE FILES                                                             */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* MACROS(Register Value)                                                    */
/* ------------------------------------------------------------------------- */
#define BDIC_REG_CH3_A_VAL_FIX                      (0x1E)
#define BDIC_REG_CH3_B_VAL_FIX                      (0x00)
#define BDIC_REG_CH3_A_VAL_ANI                      (0x00)
#define BDIC_REG_CH3_B_VAL_ANI                      (0x1E)
#define BDIC_REG_CH3_C_VAL                          (0x00)
/* ------------------------------------------------------------------------- */
/* MACROS                                                                    */
/* ------------------------------------------------------------------------- */
#define SHDISP_RGB                                  (3)
#define SHDISP_TRI_LED_COLOR_TBL_NUM                (11)
#define SHDISP_COL_VARI_KIND                        (3)
#define SHDISP_HANDSET_COLOR_WHITE                  (0x01)
#define SHDISP_HANDSET_COLOR_BLACK                  (0x06)
#define SHDISP_HANDSET_COLOR_PINK                   (0x02)
#define SHDISP_COL_VARI_DEFAULT                     SHDISP_HANDSET_COLOR_WHITE

#define SHDISP_TRI_LED_ANIME_2PAGE                  (2)
#define SHDISP_TRI_LED_ANIME_3PAGE                  (3)

#ifdef SHDISP_ANIME_COLOR_LED
#define SHDISP_BDIC_TRI_LED_INTERVAL_HISPEED        (2)
#define SHDISP_BDIC_TRI_LED_INTERVAL_STANDARD       (2)
#define SHDISP_BDIC_TRI_LED_INTERVAL_BREATH         (3)
#define SHDISP_BDIC_TRI_LED_INTERVAL_LONG_BREATH    (3)
#define SHDISP_BDIC_TRI_LED_INTERVAL_WAVE           (3)
#define SHDISP_BDIC_TRI_LED_INTERVAL_FLASH          (2)
#define SHDISP_BDIC_TRI_LED_INTERVAL_AURORA         (2)
#define SHDISP_BDIC_TRI_LED_INTERVAL_RAINBOW        (2)
#define SHDISP_BDIC_TRI_LED_INTERVAL_EMOPATTERN     (0)
#define SHDISP_BDIC_TRI_LED_COUNT_EMOPATTERN        (0)
#define SHDISP_BDIC_TRI_LED_COLOR_WHITE             (7)
#define SHDISP_BDIC_TRI_LED_COLOR_MAGENTA           (5)
#endif /* SHDISP_ANIME_COLOR_LED */
/* ------------------------------------------------------------------------- */
/* MACROS(Register Value)                                                    */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* VARIABLES                                                                 */
/* ------------------------------------------------------------------------- */
static const struct shdisp_bdic_led_color_index shdisp_triple_led_color_index_tbl[SHDISP_TRI_LED_COLOR_TBL_NUM] = {
    {0, 0, 0,   0},
    {1, 0, 0,   1},
    {0, 1, 0,   2},
    {1, 1, 0,   3},
    {0, 0, 1,   4},
    {1, 0, 1,   5},
    {0, 1, 1,   6},
    {1, 1, 1,   7},
    {1, 2, 2,   8},
    {2, 0, 0,   9},
    {0, 2, 0,  10}
};

static const unsigned char shdisp_clrvari_index[SHDISP_COL_VARI_KIND] = {
    SHDISP_HANDSET_COLOR_WHITE,
    SHDISP_HANDSET_COLOR_BLACK,
    SHDISP_HANDSET_COLOR_PINK,
};

static const unsigned char shdisp_trickle_led_tbl[3] = { 0x7F, 0x00, 0x00 };

static const unsigned char shdisp_triple_led_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
  {
    { 0x00, 0x00, 0x00 },
    { 0x7F, 0x00, 0x00 },
    { 0x00, 0x46, 0x00 },
    { 0x76, 0x42, 0x00 },
    { 0x00, 0x00, 0x7F },
    { 0x7A, 0x00, 0x4B },
    { 0x00, 0x41, 0x7B },
    { 0x4F, 0x46, 0x50 },
    { 0x50, 0x64, 0x7F },
    { 0x7F, 0x00, 0x00 },
    { 0x00, 0x46, 0x00 }
  },
  {
    { 0x00, 0x00, 0x00 },
    { 0x19, 0x00, 0x00 },
    { 0x00, 0x0B, 0x00 },
    { 0x14, 0x0B, 0x00 },
    { 0x00, 0x00, 0x18 },
    { 0x14, 0x00, 0x0D },
    { 0x00, 0x0B, 0x12 },
    { 0x19, 0x18, 0x1F },
    { 0x15, 0x25, 0x34 },
    { 0x19, 0x00, 0x00 },
    { 0x00, 0x0B, 0x00 }
  },
  {
    { 0x00, 0x00, 0x00 },
    { 0x15, 0x00, 0x00 },
    { 0x00, 0x12, 0x00 },
    { 0x10, 0x10, 0x00 },
    { 0x00, 0x00, 0x3B },
    { 0x15, 0x00, 0x2F },
    { 0x00, 0x12, 0x36 },
    { 0x10, 0x18, 0x1F },
    { 0x10, 0x20, 0x46 },
    { 0x15, 0x00, 0x00 },
    { 0x00, 0x12, 0x00 }
  }
};

static const unsigned char shdisp_triple_led_anime_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_ANIME_2PAGE][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
  {
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x7F, 0x00, 0x00 },
        { 0x00, 0x46, 0x00 },
        { 0x76, 0x42, 0x00 },
        { 0x00, 0x00, 0x7F },
        { 0x7A, 0x00, 0x4B },
        { 0x00, 0x41, 0x7B },
        { 0x4F, 0x46, 0x50 },
        { 0x50, 0x64, 0x7F },
        { 0x7F, 0x00, 0x00 },
        { 0x00, 0x46, 0x00 }
    }
  },
  {
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x19, 0x00, 0x00 },
        { 0x00, 0x0B, 0x00 },
        { 0x14, 0x0B, 0x00 },
        { 0x00, 0x00, 0x18 },
        { 0x14, 0x00, 0x0D },
        { 0x00, 0x0B, 0x12 },
        { 0x19, 0x18, 0x1F },
        { 0x15, 0x25, 0x34 },
        { 0x19, 0x00, 0x00 },
        { 0x00, 0x0B, 0x00 }
    }
  },
  {
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x15, 0x00, 0x00 },
        { 0x00, 0x12, 0x00 },
        { 0x10, 0x10, 0x00 },
        { 0x00, 0x00, 0x3B },
        { 0x15, 0x00, 0x2F },
        { 0x00, 0x12, 0x36 },
        { 0x10, 0x18, 0x1F },
        { 0x10, 0x20, 0x46 },
        { 0x15, 0x00, 0x00 },
        { 0x00, 0x12, 0x00 }
    }

  }
};

#ifdef SHDISP_ANIME_COLOR_LED
static const unsigned char shdisp_triple_led_anime_high_speed_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
    {
        { 0x00, 0x00, 0x00 },
        { 0x7F, 0x00, 0x00 },
        { 0x00, 0x46, 0x00 },
        { 0x76, 0x42, 0x00 },
        { 0x00, 0x00, 0x7F },
        { 0x7A, 0x00, 0x4B },
        { 0x00, 0x41, 0x7B },
        { 0x4F, 0x46, 0x50 },
        { 0x50, 0x64, 0x7F },
        { 0x7F, 0x00, 0x00 },
        { 0x00, 0x46, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x19, 0x00, 0x00 },
        { 0x00, 0x0B, 0x00 },
        { 0x14, 0x0B, 0x00 },
        { 0x00, 0x00, 0x18 },
        { 0x14, 0x00, 0x0D },
        { 0x00, 0x0B, 0x12 },
        { 0x19, 0x18, 0x1F },
        { 0x15, 0x25, 0x34 },
        { 0x19, 0x00, 0x00 },
        { 0x00, 0x0B, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x15, 0x00, 0x00 },
        { 0x00, 0x12, 0x00 },
        { 0x10, 0x10, 0x00 },
        { 0x00, 0x00, 0x3B },
        { 0x15, 0x00, 0x2F },
        { 0x00, 0x12, 0x36 },
        { 0x10, 0x18, 0x1F },
        { 0x10, 0x20, 0x46 },
        { 0x15, 0x00, 0x00 },
        { 0x00, 0x12, 0x00 }
    }
};

static const unsigned char shdisp_triple_led_anime_breath_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_ANIME_3PAGE][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    }
};

static const unsigned char shdisp_triple_led_anime_long_breath_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_ANIME_3PAGE][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    }
};

static const unsigned char shdisp_triple_led_anime_wave_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_ANIME_3PAGE][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    }
};

static const unsigned char shdisp_triple_led_anime_flash_tbl[SHDISP_COL_VARI_KIND][SHDISP_TRI_LED_ANIME_3PAGE][SHDISP_TRI_LED_COLOR_TBL_NUM][3] = {
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    },
    {
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        },
        {
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 },
            { 0x00, 0x00, 0x00 }
        }
    }
};

static const unsigned char shdisp_triple_led_anime_aurora_tbl[SHDISP_COL_VARI_KIND][3][3] = {
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    }
};

static const unsigned char shdisp_triple_led_anime_rainbow_tbl[SHDISP_COL_VARI_KIND][3][3] = {
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    },
    {
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 },
        { 0x00, 0x00, 0x00 }
    }
};

static const unsigned char shdisp_triple_led_anime_emopattern_tbl[SHDISP_COL_VARI_KIND][3][3] = {
    {
        { 0x1E, 0x00, 0x12 },
        { 0x51, 0x00, 0x32 },
        { 0x7A, 0x00, 0x4B }
    },
    {
        { 0x05, 0x00, 0x03 },
        { 0x0D, 0x00, 0x08 },
        { 0x14, 0x00, 0x0D }
    },
    {
        { 0x05, 0x00, 0x0B },
        { 0x0E, 0x00, 0x1F },
        { 0x15, 0x00, 0x2F }
    }
};
#endif /* SHDISP_ANIME_COLOR_LED */

/* ------------------------------------------------------------------------- */
/* TYPES                                                                     */
/* ------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------- */
/* PROTOTYPES                                                                */
/* ------------------------------------------------------------------------- */

#endif /* SHDISP_BL71Y8_LED_PE_H */

/* ------------------------------------------------------------------------- */
/* END OF FILE                                                               */
/* ------------------------------------------------------------------------- */
