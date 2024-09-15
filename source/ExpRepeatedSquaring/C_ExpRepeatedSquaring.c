/********************************************************
 * Author: YSL
 * Version: 1.0.0
 * Note: Calculate power exponent. g: base x: exponent
 ********************************************************/

#include <stdlib.h>

double ExpRepeatedSquaring(int g, int x)
{
    double result = 1;
    while (x > 0) {
        // Use bitwise AND operation to determine the last bit
        if ((x & 1) == 1) {
            result = result * g;
        }
        // Use left shift to implement modulo 2
        x = x >> 1;
        g = g * g;
    }
    return result;
}