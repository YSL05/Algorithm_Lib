/********************************************************
 * Author: YSL
 * Version: 1.0.0
 * Date:  2024.09.15
 * Note: Calculate the modulo power exponent. g: base x: exponent p: mode value
 ********************************************************/

#include <stdlib.h>

int ModExpRepeatedSquaring(int g, int x, int p)
{
    int result = 1;
    g = g % p;
    while (x > 0) {
        // Use bitwise AND operation to determine the last bit
        if ((x & 1) == 1) {
            result = result * g % p;
        }
        // Use left shift to implement modulo 2
        x = x >> 1;
        g = g * g % p;
    }
    return result;
}