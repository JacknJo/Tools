#pragma once

//! C++ includes.
#include <chrono>

//! Gui includes.

//! Project includes.

namespace Tools
{
    class JTimer
    {

    public:
        enum Time
        {
            nanoseconds,
            microseconds,
            milliseconds,
            seconds,
            minutes,
            hours
        };

        //! Methods
        JTimer(bool startTimer);

        double GetTime(Time unit = milliseconds);
        void Reset();
        void Stop();

    private:
        //! Methods

    public:
        //! Members

    private:
        //! Members
        std::chrono::system_clock::time_point _start;
        std::chrono::duration<double> _delta;
    };
}
