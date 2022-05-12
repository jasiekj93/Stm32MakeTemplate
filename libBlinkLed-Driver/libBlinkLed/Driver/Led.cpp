#include "Led.hpp"

#include "gpio.h"
#include "main.h"

using namespace Driver;

bool Led::_isInitalized = false;

Led::Led()
{
    if(_isInitalized == false)
    {
        MX_GPIO_Init();
        _isInitalized = true;
    }
}

void Led::Toggle()
{
    HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
}