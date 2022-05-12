#include "System.hpp"
#include "main.h"

using namespace Driver;

extern "C"
void SysTick_Handler(void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

void System::Init()
{
    HAL_Init();
    SystemClock_Config();
}

void System::Delay(uint32_t ms)
{
    HAL_Delay(ms);
}

extern "C"
int _write(int file, char *ptr, int len)
{
    for(int i = 0; i < len; i++)
        ITM_SendChar((*ptr++));

    return len;
}   