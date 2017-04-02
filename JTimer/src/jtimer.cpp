#include "jtimer.hpp"
#include "jversion.hpp"

namespace Tools
{
    JTimer::JTimer(bool startTimer = false)
    {
        if (startTimer)
        {
            Reset();
        }
    }

    double JTimer::GetTime(Time unit)
    {
        double divisor = 0.0;
        std::chrono::duration<double> d = std::chrono::system_clock::now() - _start;

        switch (unit)
        {
        case nanoseconds:
            divisor = 1.0;
            break;

        case microseconds:
            divisor = 1e3;
            break;

        case milliseconds:
            divisor = 1e6;
            break;

        case seconds:
            divisor = 1e9;
            break;

        case minutes:
            divisor = 60e9;
            break;

        case hours:
            divisor = 36e11;
            break;

        default:
            throw "Wrong Unit specified!";
        }

        return std::chrono::duration_cast<std::chrono::nanoseconds>(d).count() / divisor;
    }

    void JTimer::Reset()
    {
        _start = std::chrono::system_clock::now();
    }

    void JTimer::PrintVersion()
    {
        JVersion::JTimer::PrintVersion();
    }
}
