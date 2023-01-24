# printf
***
## Mandatory Tasks ##
***
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life - Write a function that produces output according to a format.
    * Returns: the number of characters printed (excluding the null byte used to end output to strings)
    * write output to stdout, the standard output stream
    * `format` is a character string. The format string is composed of zero or more directives. 
    * You need to handle the following conversion specifiers:
        * `c`
        * `s`
        * `%`
1. Education is when you read the fine print. Experience is what you get if you don't. Handle the following conversion specifiers:
    * `d`
    * `i`
## Advanced Tasks ##
***
2. With a face like mine, I do better in print - Handle the following custom conversion specifiers:
    * `b`: the unsigned int argument is converted to binary
3. What one has not experienced, one will never understand in print - Handle the following conversion specifiers
    * `u`
    * `o`
    * `x`
    * `X`
4. Nothing in fine print is ever good news - Use a local buffer of 1024 chars in order to call `write` as little as possible.
5. My weakness is wearing too much leopard print - Handle the following custom conversion specifier:
    * `S` : prints the string.
    * Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print - Handle the following conversion specifier: `p`.
7. The big print gives and the small print takes away - Handle the following flag characters for non-custom conversion specifiers:
    * `+`
    * `space`
    * `#`
8. Sarcasm is lost in print - Handle the following length modifiers for non-custom conversion specifiers:
    * `l`
    * `h`
* Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`
9. Print some money and give it to us for the rain forests - Handle the field width for non-custom conversion specifiers.
10. The negative is the equivalent of the composer's score, and the print the performance
    * Handle the precision for non-custom conversion specifiers.
