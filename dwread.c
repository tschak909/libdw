/**
 * @brief Read string to s from DriveWire with expected length l
 * @param s pointer to string buffer
 * @param l expected length of string (0-65535 bytes)
 * @return # of bytes actually read
 */
int dwread(char *s, int l)
{
  asm
    {
    pshs x,y
    ldx :s
    ldy :l
    jsr [0xD93F]
    puls y,x
    }
}
