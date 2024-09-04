#include "ColorCoderMgr.h"

namespace TelCoColorCoder
{
    ColorPair CColerCoderMgr::GetColorFromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / ColorPair::numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % ColorPair::numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int CColerCoderMgr::GetPairNumberFromColor(MajorColor major, MinorColor minor)
    {
        return major * ColorPair::numberOfMinorColors + minor + 1;
    }

    std::string CColerCoderMgr::GetColorCodeManual()
    {
        std::string colorCodeManual = "Major Minor  Value \n";
        for (int i = 1; i <= 25;i++)
        {
            colorCodeManual += GetColorFromPairNumber(i).ToString() + std::string(" -> ") + std::to_string(i) + std::string("\n");
        }
        return colorCodeManual;
    }
}