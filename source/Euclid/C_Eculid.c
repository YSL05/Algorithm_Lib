/********************************************************
 * Author: YSL
 * Version: 1.0.0
 * Date:  2024.09.15
 * Note: Calculate the greatest common divisor of two integers.
 ********************************************************/

int Euclid(int a, int b)
{
    if (b == 0) {
        return a;
    } else {
        return Euclid(b, a % b);
    }
}