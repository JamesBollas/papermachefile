# papermachefile
Used to create large files quickly for testing networking or other purposes.

-----
Installation:
- clone this repo
- run `gcc papermachefile.c -o papermachefile` in the repo

-----
Usage:
`./papermachefile [output-filename] [output-size-in-bytes]`

-----
Seeks to the byte specified by the second argument and writes a single byte to the file.
This (dependent on filesystem and probably other things) will create a file with a minimal size on disk, but a large apparent size.
