//
//  GSLog.hpp
//  GameSprite
//
//  Created by tuyoo on 2018/1/5.
//  Copyright © 2018年 lu ning. All rights reserved.
//

#ifndef GSLog_hpp
#define GSLog_hpp

#include <stdio.h>
#include "GSMacro.h"
NAMESPACE_GS_BEGIN

class GSLog{
public:
    static void LOGD(const char * tag, const char * info);
};

NAMESPACE_GS_END
#endif /* GSLog_hpp */
