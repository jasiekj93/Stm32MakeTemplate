#include <libBlinkLed/Hal/System.hpp>
#include <libBlinkLed/Hal/Led.hpp>
#include <libBlinkLed/Application/Program.hpp>

extern "C"
int main()
{
    Driver::System::Init();
    Hal::Led led;
    Hal::System system;

    Application::Program program(led, system);

    while (true)
    {
        program.Execute();
    }

    return 0;
}