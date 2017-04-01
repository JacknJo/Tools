#include "jmath.hpp"
#include "jversion.hpp"

#include <stdlib.h>
#include <math.h>

namespace Tools
{
    float JMath::Relu(float x)
    {
        if (x < 0)
        {
            return 0;
        }
        else
        {
            return x;
        }
    }

    float JMath::Sigmoid(float x)
    {
        #ifdef TRUE_SIGMOID
        return 1 / (1 + exp(-x));
        #else

        return 2 / (1 + exp(-x)) - 1;
        #endif
    }

    double JMath::CosineInterpolate(double y1, double y2, double mu)
    {
        double mu2;
        mu2 = (1 - cos(mu * M_PI)) / 2;
        return (y1 * (1 - mu2) + y2 * mu2);
    }

    int JMath::RoundToInt(float f)
    {
        if (f < 0)
        {
            return abs(f - (int)f) < 0.5 ? (int)f : (int)f - 1;
        }
        else
        {
            return abs(f - (int)f) < 0.5 ? (int)f : (int)f + 1;
        }
    }

    void JMath::PrintVersion()
    {
        JVersion::JMath::PrintVersion();
    }
}
