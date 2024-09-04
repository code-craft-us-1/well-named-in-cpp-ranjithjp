#pragma once
#include <string>

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;

        const char* MajorColorNames[5] = {
        "White", "Red", "Black", "Yellow", "Violet"
        };

        const char* MinorColorNames[5] = {
            "Blue", "Orange", "Green", "Brown", "Slate"
        };
    public:
        static constexpr int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
        static constexpr int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

        ColorPair(MajorColor major, MinorColor minor) :
            majorColor(major), 
            minorColor(minor)
        {}

        ColorPair() = delete;
        ColorPair(const ColorPair&) = default;
        ColorPair& operator= (const ColorPair&) = default;
        ~ColorPair() = default;

        MajorColor getMajor() const {
            return majorColor;
        }

        MinorColor getMinor() const {
            return minorColor;
        }
        std::string ToString() const {
            return MajorColorNames[majorColor] + std::string(" ") + MinorColorNames[minorColor];
        }
    };
}
