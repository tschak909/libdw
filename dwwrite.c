/**
 * @brief  Simple binding for DriveWire I/O functions to CMOC
 * @author Thomas Cherryhomes
 * @email  thom dot cherryhomes at gmail dot com
 */

/**
 * @brief Write string at s to DriveWire with length l
 * @param s pointer to string buffer
 * @param l length of string (0-65535 bytes)
 * @return # of bytes actually written
 */
int dwwrite(const char *s, int l)
{
  asm
    {
        pshs x,y
        ldx :s
	ldy :l
        jsr [0xD941]
	puls y,x
    }
}
