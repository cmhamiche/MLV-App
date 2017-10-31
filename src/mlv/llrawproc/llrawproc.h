/*
 * Copyright (C) 2017 bouncyball
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#ifndef _llrawproc_h
#define _llrawproc_h

#include "llrawproc_object.h"
#include "../mlv_object.h"

llrawprocObject_t * initLLRawProcObject();
void freeLLRawProcObject(llrawprocObject_t * llrawproc);

/* all low level raw processing takes place here */
void applyLLRawProcObject(mlvObject_t * video, uint16_t * raw_image_buff, size_t raw_image_size);

/* LLRawProcObject variable handling */
enum { FR_OFF, FR_ON };
int llrpGetFixRawMode(mlvObject_t * video);
void llrpSetFixRawMode(mlvObject_t * video, int value);

enum { VS_OFF, VS_ON, VS_FORCE };
int llrpGetVerticalStripeMode(mlvObject_t * video);
void llrpSetVerticalStripeMode(mlvObject_t * video, int value);

enum { FP_OFF, FP_ON, FP_CROPREC };
int llrpGetFocusPixelMode(mlvObject_t * video);
void llrpSetFocusPixelMode(mlvObject_t * video, int value);

enum { FPI_MLVFS, FPI_RAW2DNG };
int llrpGetFocusPixelInterpolationMethod(mlvObject_t * video);
void llrpSetFocusPixelInterpolationMethod(mlvObject_t * video, int value);

enum { BP_OFF, BP_ON, FP_AGGRESSIVE };
int llrpGetBadPixelMode(mlvObject_t * video);
void llrpSetBadPixelMode(mlvObject_t * video, int value);

enum { BPI_MLVFS, BPI_RAW2DNG };
int llrpGetBadPixelInterpolationMethod(mlvObject_t * video);
void llrpSetBadPixelInterpolationMethod(mlvObject_t * video, int value);

enum { CS_OFF, CS_2x2, CS_3x3, CS_5x5 };
int llrpGetChromaSmoothMode(mlvObject_t * video);
void llrpSetChromaSmoothMode(mlvObject_t * video, int value);

enum { PN_OFF, PN_ON };
int llrpGetPatternNoiseMode(mlvObject_t * video);
void llrpSetPatternNoiseMode(mlvObject_t * video, int value);

int llrpGetDeflickerTarget(mlvObject_t * video);
void llrpSetDeflickerTarget(mlvObject_t * video, int value);

enum { DISO_OFF, DISO_20BIT, DISO_FAST };
int llrpGetDualIsoMode(mlvObject_t * video);
void llrpSetDualIsoMode(mlvObject_t * video, int value);

enum { DISOI_AMAZE, DISOI_MEAN23 };
int llrpGetDualIsoInterpolationMethod(mlvObject_t * video);
void llrpSetDualIsoInterpolationMethod(mlvObject_t * video, int value);

int llrpGetDualIsoAliasMapMode(mlvObject_t * video);
void llrpSetDualIsoAliasMapMode(mlvObject_t * video, int value);

int llrpGetDualIsoFullResBlendingMode(mlvObject_t * video);
void llrpSetDualIsoFullResBlendingMode(mlvObject_t * video, int value);

#endif
