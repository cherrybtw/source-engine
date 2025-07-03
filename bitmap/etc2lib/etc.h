#pragma once

#include "etc1_android.h"


unsigned char * etc2_encode_image_rgba(const unsigned char* image, int width, int height, int *size);
unsigned char * etc2_encode_image_rgb(const unsigned char* image, int width, int height, int *size);
unsigned int etc2_data_size_rgba(int width, int height);
unsigned int etc2_data_size_rgb(int width, int height);

extern void EncodeC(const unsigned char *a_pafSourceRGBA,
             unsigned int a_uiSourceWidth,
             unsigned int a_uiSourceHeight,
             int a_format,
             int a_eErrMetric,
             float a_fEffort,
             unsigned int a_uiJobs,
             unsigned int a_uimaxJobs,
             unsigned char **a_ppaucEncodingBits,
             unsigned int *a_puiEncodingBitsBytes,
             unsigned int *a_puiExtendedWidth,
             unsigned int *a_puiExtendedHeight);
