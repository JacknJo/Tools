#pragma once

namespace Tools
{
    class JMath
    {
    public:
        static float Sigmoid(float x);
        static float Relu(float x);
        static double CosineInterpolate(double y1, double y2, double mu);
        static int RoundToInt(float x);
        static void PrintVersion();
    };
}