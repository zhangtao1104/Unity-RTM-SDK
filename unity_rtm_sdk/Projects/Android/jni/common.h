//
//  common.hpp
//  agoraRTMCWrapper
//
//  Created by 张涛 on 2020/9/11.
//  Copyright © 2020 张涛. All rights reserved.
//
#pragma once
#include <stdio.h>

#if defined(_WIN32)
#define AGORARTC_EXPORT
#pragma comment(lib, "../sdk/lib/agora_rtm_sdk.lib")
#include "../../../include/IAgoraRtmCallManager.h"
#include "../../../include/IAgoraRtmService.h"
#elif defined(__APPLE__)
#include "../../../include/IAgoraRtmCallManager.h"
#include "../../../include/IAgoraRtmService.h"
#elif defined(__ANDROID__) || defined(__linux__)
#include "../../include/IAgoraRtmCallManager.h"
#include "../../include/IAgoraRtmService.h"

#endif