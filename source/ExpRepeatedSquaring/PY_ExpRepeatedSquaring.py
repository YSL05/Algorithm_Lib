"""
 * Author: YSL
 * Version: 1.0.0
 * Date:  2024.09.15
 * Note: Calculate power exponent. g: base x: exponent
"""

def ExpRepeatedSquaring(g, x):
    c = g
    d = x
    r = 1
    while(d > 0):
        if (d & 0x1 == 1):
            r = (r * c)
        d = d >> 0x1
        c = (c * c)
    return r