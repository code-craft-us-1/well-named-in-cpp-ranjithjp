#pragma once

#include "ColorPair.h"

namespace TelCoColorCoder
{
    class CColerCoderMgr
    {
    public:
        static ColorPair GetColorFromPairNumber(int pairNumber);

        static int GetPairNumberFromColor(MajorColor major, MinorColor minor);

        static std::string GetColorCodeManual();
    };
}