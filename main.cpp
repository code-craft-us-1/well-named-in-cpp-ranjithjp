#include "ColorCodeTest.h"


int main() {
    ColorCodeTest::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    ColorCodeTest::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    ColorCodeTest::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    ColorCodeTest::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    ColorCodeTest::testcolorCodeManual();

    return 0;
}
