#include "jrandom.hpp"
#include "jversion.hpp"

namespace Tools
{
    int JRandom::RandomI(int min, int max)
    {
        return min + std::rand() % (max + 1);
    }

    float JRandom::RandomF(float min, float max)
    {
        return (max - min) * std::rand() / (float)RAND_MAX + min;
    }

    double JRandom::RandomD(double min, double max)
    {
        return (max - min) * std::rand() / (double)RAND_MAX + min;
    }

    void JRandom::PrintVersion()
    {
        JVersion::JRandom::PrintVersion();
    }
}