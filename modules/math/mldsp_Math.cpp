#include "mldsp_Math.hpp"

const bool mldsp::Math::isOdd(const int value)
{
    return value % 2 /* == 1 */;
}

const bool mldsp::Math::isEven(const int value)
{
    return value % 2 == 0;
}

const bool mldsp::Math::isMultipleOf(const int dividend, const int divisor)
{
    return dividend % divisor == 0;
}
