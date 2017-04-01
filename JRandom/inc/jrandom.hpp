#pragma once

#include <cstdlib>
#include <time.h>

namespace Tools
{
    class JRandom
    {
    public:
        static int random(int min, int max);
        static float randomf(float min, float max);
    };
}