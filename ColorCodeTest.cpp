#include "ColorCodeTest.h"
#include <iostream>

void ColorCodeTest::testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::CColerCoderMgr::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void ColorCodeTest::testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::CColerCoderMgr::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void ColorCodeTest::testcolorCodeManual()
{
    std::cout << TelCoColorCoder::CColerCoderMgr::GetColorCodeManual() << std::endl;
}