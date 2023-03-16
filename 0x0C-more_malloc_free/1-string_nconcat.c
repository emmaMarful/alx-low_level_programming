#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source, string to be concatenated
 * @n: size of byte in s2
 * Return: return if s1 and s2 is equal to null or return
 * null if dest is equal to null or return the pointer dest
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *dest;
        unsigned int i, s1Len, dest_len = 0;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i]; i++)
                s1Len++;

        dest = malloc(sizeof(char) * (s1Len + 1));

        if (string1 == NULL)
                return (NULL);

        for (i = 0; s1[i]; i++)
                dest[dest_len++] = s1[i];

        for (i = 0; i < n; i++)
                dest[dest_len++] = s2[i];

        dest[dest_len] = '\0';

        return (dest);
}

