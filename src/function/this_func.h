/*
 * @Author: cy
 * @Email: 964028708@qq.com
 * @Date: 2024-05-22 15:47:17
 * @LastEditTime: 2025-01-17 01:19:15
 * @FilePath: /cy_frame/src/function/this_func.h
 * @Description: 此项目的一些功能函数
 * @BugList: 
 * 
 * Copyright (c) 2024 by Cy, All Rights Reserved. 
 * 
 */

#ifndef _THIS_FUNC_H_
#define _THIS_FUNC_H_

#include <string>
#include <stdint.h>

// char转short
#define CHARTOSHORT(H,L) (((H) << 8) | (L)) 

// char转int
#define CHARTOINT(D1,D2,D3,D4) (((D4) << 24) | ((D3) << 16) |((D2) << 8) | (D1))

// 发送按键
#define SENDKEY(k,down) analogInput(k,down)

/// @brief 打印项目信息
/// @param name 
void printProjectInfo(const char* name);

/// @brief 打印按键映射
void printKeyMap();

/// @brief 发送按键
/// @param code 
/// @param value 
void analogInput(int code, int value);

/// @brief 刷新屏保
void refreshScreenSaver();

/// @brief 写入当前时间到文件
/// @param filename 
void writeCurrentDateTimeToFile(const std::string& filename);

/// @brief 从文件读取时间
/// @param filename 
void setDateTimeFromFile(const std::string& filename);

/// @brief 默认重启（保存当前时间）
void defaultReboot();

#endif