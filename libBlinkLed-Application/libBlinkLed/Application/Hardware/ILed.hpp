#pragma once

/**
 * @file ILed.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

namespace Application::Hardware
{
    class ILed
    {
    public:
        virtual ~ILed() {}

        virtual void Toggle() = 0;
    };
}
