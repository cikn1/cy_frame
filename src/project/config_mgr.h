/*
 * @Author: cy
 * @Email: 964028708@qq.com
 * @Date: 2024-05-22 15:53:50
 * @LastEditTime: 2025-02-20 22:20:46
 * @FilePath: /cy_frame/src/project/config_mgr.h
 * @Description:
 * @BugList:
 *
 * Copyright (c) 2024 by Cy, All Rights Reserved.
 *
 */

#ifndef __CONFIG_MGR_H__
#define __CONFIG_MGR_H__

#include <core/handler.h>
#include <core/uieventsource.h>
#include <core/preferences.h>
#include "common.h"

#define g_config configMgr::ins()

class configMgr :public MessageHandler {
private:
    enum {
        MSG_SAVE,
    };

    Message  mMsg;
    Looper*  mLooper;
    uint64_t mNextBakTime;

    cdroid::Preferences mConfig; // 配置文件读写

private:
    configMgr();
    void update();
public:
    ~configMgr();
    static configMgr* ins() {
        static configMgr stIns;
        return &stIns;
    }
    void handleMessage(Message& message)override;

    void init();

    // 亮度
    int  getBrightness();
    void setBrightness(int value);
};


#endif // __CONFIG_MGR_H__