#pragma once

#include <cstdlib>
#include <time.h>

namespace Tools
{
    class JRandom
    {
    public:
        static int RandomI(int min, int max);
        static float RandomF(float min, float max);
        static double RandomD(double min, double max);
        static void PrintVersion();
    };
}