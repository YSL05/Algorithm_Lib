"""
 * Author: YSL
 * Version: 1.0.0
* Date:  2024.09.15
 * Note: Calculate the modulo power exponent. g: base x: exponent p: mode value
"""

def ModExpRepeatedSquaring(g, x, p):
    c = g % p
    d = x
    r = 1
    while(d > 0):
        if (d & 0x1 == 1):
            r = (r * c) % p
        d = d >> 0x1
        c = (c * c) % p
    return r