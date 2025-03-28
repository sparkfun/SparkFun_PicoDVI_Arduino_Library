/**
 * @file SparkFun_PicoDVI.h
 * @brief Arduino header file for the SparkFun Pico DVI (Digital Video Interface)
 *
 * This file implements the Sparkfun specific functions for the Pico DVI and
 * subclasses the implementation from the AdaFruit DVI library
 *
 * @author SparkFun Electronics
 * @date 2025
 * @copyright Copyright (c) 2025, SparkFun Electronics Inc. This project is released under the MIT License.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <PicoDVI.h>

// Define our config for the IOT Redboard RP2350
static const struct dvi_serialiser_cfg sparkfun_iot_redboard_rp2350_dvi_cfg = {
    .pio = pio1,
    .sm_tmds = {0, 1, 2},
    .pins_tmds = {18, 16, 12},
    .pins_clk = 14,
    .invert_diffpairs = true
};