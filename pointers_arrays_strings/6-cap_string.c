#include "main.h"

/**
 
cap_string - Capitalize all words
@s: the string
Return: a pointer to change
*/

char cap_string(chars)
{
    int count = 0, i;
    int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

    if ((s + count) >= 97 &&(s + count) <= 122)
        (s + count) =(s + count) - 32;
    count++;
    while ((s + count) != '\0')
    {
        for (i = 0; i < 13; i++)
        {
            if ((s + count) == sep_words[i])
            {
                if (((s + (count + 1)) >= 97) && ((s + (count + 1)) <= 122))
                    (s + (count + 1)) =(s + (count + 1)) - 32;
                break;
            }
        }
        count++;
    }
    return (s);
}
