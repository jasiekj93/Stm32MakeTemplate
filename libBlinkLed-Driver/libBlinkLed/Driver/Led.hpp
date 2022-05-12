#pragma once

/**
 * @file Led.hpp
 * @author Adrian Szczepanski
 * @date 23-07-2021
 * @brief 
 * @details
 */

namespace Driver
{
    class Led
    {
    public:
        Led();

        void Toggle();

    private:
        static bool _isInitalized;
    };
}