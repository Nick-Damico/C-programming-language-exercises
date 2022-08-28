// Exercise 1-22 from chapter 03 of The C Programming Book vol2.

// TEST
// THIS SHOULD NOT APPEAR
/*
    TEST
    NONE OF THIS
    SHOULD
    PRINT */

#include <stdio.h>

int main(void)
{
    int bs = 0;
    char prev_char, cur_char;
    int in_single_line_comment = 0;
    int in_multiline_comment = 0;

    while ((cur_char = getchar()) != EOF)
    {
        // Exit if at the end of a single or multiline comment.
        if (in_single_line_comment)
        {
            // Detect end of comment.
            if (cur_char == '\n')
                in_single_line_comment = 0;

            prev_char = cur_char;
            continue;
        }
        if (in_multiline_comment)
        {
            // Detect end of comment.
            if (cur_char == '/' && prev_char == '*')
            {
                in_multiline_comment = 0;
                cur_char = ' '; // Do not print the current char '/' on the next iteration.
            }
            prev_char = cur_char;
            continue;
        }

        // Detect Comment and Set flag if in a single or multi line comment.
        if (prev_char == '/' && cur_char == '/')
        {
            in_single_line_comment = 1;
            bs = 0;
            prev_char = cur_char;
            continue;
        }
        if (prev_char == '/' && cur_char == '*')
        {
            in_multiline_comment = 1;
            bs = 0;
            prev_char = cur_char;
            continue;
        }

        // Print Non-commented characters or whitespace.
        if (cur_char != ' ')
        {
            while (bs > 0)
            {
                putchar(' ');
                bs--;
            }
            if (prev_char != ' ')
                putchar(prev_char);
            prev_char = cur_char;
        }
        else
        {
            if (bs == 0)
            {
                putchar(prev_char);
                prev_char = cur_char;
            }
            bs++;
            continue;
        }
    }

    return 0;
}
