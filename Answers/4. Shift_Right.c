/*
 * Does shift right always add zeros to the left? Explain your answer.
 * No, not always. It depends on two factors:
 * 1. Whether the integer being shifted is signed or unsigned.
 * 2. Whether the shift right operator performs an arithmetic or logical shift.
 *
 * In the case of an unsigned integer or data type:
 * The shift right operator >> simply adds zeros to the left. This is because unsigned integers
 * cannot represent negative numbers, and the operation does not need to preserve a sign bit.
 * Example: If a is unsigned, a >> 3 shifts the bits to the right and adds zeros to the left.
 *
 * In the case of a signed data type with an arithmetic shift:
 * The leftmost bit (sign bit) is copied to preserve the sign of the number, and the rightmost bit is lost.
 * Example: If a is 11 (positive) in binary (1011), a >> 3 results in 0001.
 * If a is -4 in binary two's complement (11111100 for 8-bit representation), a >> 2 results in 11111111,
 * as ones are added to the left to maintain the negative sign.
 *
 * In the case of a signed data type with a logical shift:
 * Logical right shift for signed integers is not directly supported in C. However, if you cast the signed
 * integer to an unsigned type, the right shift will be logical, adding zeros to the left.
 * Example: If a is 11 (positive) in binary (1011), (unsigned)a >> 3 results in 0001.
 */
