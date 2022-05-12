#pragma once

/**
 * @file Led.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

#include <libBlinkLed/Application/Hardware/ILed.hpp>

namespace Test::Mock::Hardware
{
    class Led : public Application::Hardware::ILed
    {
    public:
        void Toggle() override { status = !status; }

        bool status = false;
    };
}