#pragma once

enum EnWorkModel
{
    VP_Model_Unknow,            //未知
    VP_Model_SelectConveyor,    //选择传送带
    VP_Model_SelectVisionMode,  //选择视觉模式
    VP_Model_SetCalibrationMode,//设置标定模式
    VP_Model_SetDetectionMode,  //设置检测模式

};


enum EnConveyorColor
{
    VP_Color_Unknow,
    VP_Color_White = '1',       //白色
    VP_Color_Green = '2',       //绿色
    VP_Color_Quit = 'Q',        //退出

};


enum EnVisionMode
{
    VP_Vision_Unknow,
    VP_Vision_Calibration = '1',        //标定模式
    VP_Vision_PolygonsDetection = '2',  //多边形检测
    VP_Vision_Back = 'R',               //返回
    VP_Vision_Quit = 'Q'                //退出

};


enum EnCalibrationMode
{
    VP_Calib_Unknow,
    VP_Calib_FindCircles = 'S', //找圆
    VP_Calib_Test = 'T',        //显示测试图像
    VP_Calib_Calibration = 'C', //标定
    VP_Calib_Quit = 'Q',        //退出

};


enum EnDetectionMode
{
    VP_Detection_Unknow,
    VP_Detection_Find = 'S',    //识别
    VP_Detection_Test = 'T',    //显示测试图像
    VP_Detection_Save = 'F',    //保存参数
    VP_Detection_Quit = 'Q',    //退出

};