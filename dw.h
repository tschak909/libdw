/**
 * @brief  Simple binding for DriveWire I/O functions to CMOC
 * @author Thomas Cherryhomes
 * @email  thom dot cherryhomes at gmail dot com
 */

#ifndef DW_H
#define DW_H

/**
 * @brief Write string at s to DriveWire with length l
 * @param s pointer to string buffer
 * @param l length of string (0-65535 bytes)
 * @return # of bytes actually written
 */
int dwwrite(const char *s, int l);

/**
 * @brief Read string to s from DriveWire with expected length l
 * @param s pointer to string buffer
 * @param l expected length of string (0-65535 bytes)
 * @return # of bytes actually read
 */
int dwread(char *s, int l);

#endif /* DW_H */
