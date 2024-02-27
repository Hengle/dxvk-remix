/*
* Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
* DEALINGS IN THE SOFTWARE.
*/
#pragma once

#include "rtx/utility/shader_types.h"
#include "../../../../rtx_render/rtx_replacement_material_texture_type.h"

// ToDo rename
#define DECODE_AND_ADD_OPACITY_BINDING_TEXTURE_INPUT                  0
#define DECODE_AND_ADD_OPACITY_BINDING_ALBEDO_OPACITY_TEXTURE_INPUT   1

#define DECODE_AND_ADD_OPACITY_BINDING_TEXTURE_OUTPUT   10

#define DECODE_AND_ADD_OPACITY_BINDING_LINEAR_SAMPLER   20

#define DECODE_AND_ADD_OPACITY_CS_DIMENSIONS 16, 8, 1

struct DecodeAndAddOpacityArgs {
  uint2 resolution;
  float2 rcpResolution;
      
  float normalIntensity;
  float scale;
  ReplacementMaterialTextureType::Enum textureType;
};
