//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include <base/ovlibrary/ovlibrary.h>

//--------------------------------------------------------------------
// Related to FFmpeg
//--------------------------------------------------------------------
const char *GetFFmpegConfiguration();
const char *GetFFmpegVersion();
const char *GetFFmpegAvFormatVersion();
const char *GetFFmpegAvCodecVersion();
const char *GetFFmpegAvUtilVersion();
const char *GetFFmpegAvFilterVersion();
const char *GetFFmpegSwResampleVersion();
const char *GetFFmpegSwScaleVersion();
std::shared_ptr<ov::Error> InitializeFFmpeg();

//--------------------------------------------------------------------
// Related to SRTP
//--------------------------------------------------------------------
const char *GetSrtpVersion();
std::shared_ptr<ov::Error> InitializeSrtp();

//--------------------------------------------------------------------
// Related to SRT
//--------------------------------------------------------------------
const char *GetSrtVersion();
std::shared_ptr<ov::Error> InitializeSrt();

//--------------------------------------------------------------------
// Related to OpenSSL
//--------------------------------------------------------------------
const char *GetOpenSslConfiguration();
const char *GetOpenSslVersion();
std::shared_ptr<ov::Error> InitializeOpenSsl();

//--------------------------------------------------------------------
// Related to jemalloc
//--------------------------------------------------------------------
const char *GetJemallocVersion();
