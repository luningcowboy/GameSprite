//
//  AppController.cpp
//  GameSprite
//
//  Created by tuyoo on 2018/1/5.
//  Copyright © 2018年 lu ning. All rights reserved.
//

#include "AppController.hpp"
#include <GLUT/GLUT.h>
#include "GSLog.hpp"
NAMESPACE_GS_BEGIN

AppController * AppController::create( int argc, char** argv, float width, float height )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_3_2_CORE_PROFILE);
    glutInitWindowPosition(500.0f, 100.0f);
    glutInitWindowSize(width, height);
    glutCreateWindow("GameSprite");
    return nullptr;
}

void AppController::update(int value)
{
    GSLog::LOGD("AppController", "update");
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, update, 0);
}
void AppController::mainloop()
{
    glutSwapBuffers();
}
void AppController::startUp()
{
    glutDisplayFunc(&AppController::mainloop);
    glutTimerFunc(1000 / 60, &AppController::update, 0);
    //glutSpecialFunc(&AppController::onSpecialKeyDown);
    //glutSpecialUpFunc(&AppController::onSpecialKeyUp);
    //glutKeyboardFunc(&AppController::onKeyDown);
    //glutKeyboardUpFunc(&AppController::onKeyUp);
    //glutMouseFunc(&AppController::onMouseClickEvent);
    //glutMotionFunc(&AppController::onMouseMoveEvent);
    glutMainLoop();
}

NAMESPACE_GS_END
