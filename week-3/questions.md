
# Questions

## What's `stdint.h`?

A header file in the C standard library.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

Specifies the dfferent data types & their sizes. This helps to organise and store the data with the least amount of confusion. We have 3 different sizes of integers for that take up either 1, 2, or 4 bytes. For the 4 byte integers, they can be signed or unsigned which means that you read them differently.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE: 1 byte
DWORD: 4 bytes
LONG: 4 bytes
WORD: 2 bytes

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The first two bytes must be a WORD, this word identifies the file format. For BMP files this should be BM (HEX: 0x4D42).

## What's the difference between `bfSize` and `biSize`?

bfSize is the size, in bytes, of the bitmap file.
biSize is the number of bytes required by the header (structure)

## What does it mean if `biHeight` is negative?

That the bitmap is a top-down DIB (device independent bitmap) and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

Because you might not be able to open the infile, or couldn't create the output file. Possibly because the user has entered the correct amount of arguments, but one of the file addresses cannot be found ie the in or out file doesn't actually exist. 

## Why is the third argument to `fread` always `1` in our code? (For example, see lines 40, 44, and 75.)

Because fread() takes an argument in the 3rd position that is the number of elements, we are only ever converting one element.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

sets the file position of the stream to the given offset, ie skips over padding if there is any

## What is `SEEK_CUR`?

The current position of the file pointer.
