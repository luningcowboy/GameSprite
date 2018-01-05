//
//  GSLog.cpp
//  GameSprite
//
//  Created by tuyoo on 2018/1/5.
//  Copyright © 2018年 lu ning. All rights reserved.
//

#include "GSLog.hpp"
#include <iostream>
using namespace std;
NAMESPACE_GS_BEGIN
void GSLog::LOGD(const char * tag, const char * info)
{
    cout<< tag << ":" << info << endl;
}
NAMESPACE_GS_END
