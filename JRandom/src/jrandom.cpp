#include "jrandom.hpp"

namespace Tools
{
    int JRandom::random(int min, int max)
    {
        return min + std::rand() % (max + 1);
    }

    float JRandom::randomf(float min, float max)
    {
        return (max - min) * std::rand() / RAND_MAX + min;
    }
}