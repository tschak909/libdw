# libdw

A quick binding for the DriveWire READ and WRITE routines that use the known vectors:

| Subroutine | Address
|---         |---
| READ       | [0xD93F]
| WRITE      | [0xD941]

In either case, The function signature is the same:

* s = The pointer to the string buffer in memory
* l = The length of bytes to read or write

This is intended to use with the CMOC compiler: http://perso.b2b2c.ca/~sarrazip/dev/cmoc.html

## Author

Thomas Cherryhomes &lt;thom dot cherryhomes at gmail dot com&gt;


