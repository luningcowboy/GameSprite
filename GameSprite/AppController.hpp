//
//  AppController.hpp
//  GameSprite
//
//  Created by tuyoo on 2018/1/5.
//  Copyright © 2018年 lu ning. All rights reserved.
//

#ifndef AppController_hpp
#define AppController_hpp
#include "GSMacro.h"
NAMESPACE_GS_BEGIN

class AppController{
public:
    static AppController * create( int argc, char** argv, float width, float height );
private:
    static void update(int value);
    static void mainloop();
public:
    void startUp();
private:
    AppController() = default;
    
};

NAMESPACE_GS_END
#endif /* AppController_hpp */
