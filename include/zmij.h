#ifndef ZMIJ_H
#define ZMIJ_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ZMIJ_BUFFER_SIZE - minimum buffer size required by zmij_write_f64.
 */
#define ZMIJ_BUFFER_SIZE 24

/**
 * zmij_write_f64 - convert a finite double to the shortest decimal
 * representation.
 *
 * @param value   A finite double-precision floating-point value.
 *                Must NOT be NaN or Infinity.
 * @param buffer  Pointer to a buffer of at least ZMIJ_BUFFER_SIZE bytes.
 * @return        Pointer to one past the last byte written (NOT null-terminated).
 *
 * Example:
 *   char buf[ZMIJ_BUFFER_SIZE];
 *   char *end = zmij_write_f64(3.14, buf);
 *   *end = '\0';  // null-terminate if needed
 *   printf("%s\n", buf);  // prints "3.14"
 */
uint8_t *zmij_write_f64(double value, uint8_t *buffer);

#ifdef __cplusplus
}
#endif

#endif /* ZMIJ_H */
