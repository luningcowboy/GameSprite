//
//  main.cpp
//  GameSprite
//
//  Created by tuyoo on 2018/1/5.
//  Copyright © 2018年 lu ning. All rights reserved.
//

#include <iostream>
#include "AppController.hpp"
#include "GameSprite.h"
US_NAMESPACE_GS
int main(int argc, char ** argv) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    float width = 1024.0f;
    float height = 768.0f;
    
    AppController * app = AppController::create(argc, argv, width, height);
    app->startUp();
    return 0;
}
