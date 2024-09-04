#pragma once

#include <assert.h>
#include "ColorCoderMgr.h"

class ColorCodeTest final
{
public:
    static void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor,
        TelCoColorCoder::MinorColor expectedMinor);

    static void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor,
        int expectedPairNumber);

    static void testcolorCodeManual();

};