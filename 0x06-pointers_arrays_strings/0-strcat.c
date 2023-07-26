#include "main.h"

/**
 *_strcat - function commute two strings
 * @dest: Destination string 
 * @src: Source string
 * Return: A pointer to the destination string @dest.
 */
 
char *_strcat(char *dest, char *src)
{
  int s, b;

  s = strlen(dest);
  b = 0;

  while (src[b] != '\0') {
    dest[s + b] = src[b];
    b++;
  }

  dest[s + b] = '\0';
  return dest;
}

