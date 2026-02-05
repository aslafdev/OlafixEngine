//
// Created by aslaf on 2/5/2026.
//
#pragma once

#include "Core.h"


namespace ox {
    class ENGINE_API Application {
    public:
        Application()=default;
        virtual ~Application()=default;
        void run();
    };

    Application* CreateApplication();
};

