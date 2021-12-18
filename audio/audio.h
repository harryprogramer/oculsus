/**
 * OculSus Audio (OclSA) 
 * @file audio.h
 * @author many 
 * @brief 
 * @version 0.1
 * @date 2021-12-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef OCULSUS_AUDIO_API
#define OCULSUS_AUDIO_API

#include "../utypes.h"

#define OCL_MEMORY_ISSUE    0xA003
#define OCL_IO_ALREADY_OPEN 0xA002
#define OCL_NO_DEVICE       0xA001
#define OCL_UNKNOWN         0xA000

OCLEnum oclaOpenDevice(OCLFloat sampleRate);

NONE oclaDestroy();

#endif