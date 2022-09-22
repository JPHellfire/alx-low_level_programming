1 #include "main.h"
  2 /**
  3 * _strcat- function of two strings.
  4 *
  5 * @dest: pointer to destination char
  6 * @src: pointer to source char
  7 * Return: char
  8 */
  9 char *_strcat(char *dest, char *src)
 10 {
 11 unsigned int i = 0;
 12 unsigned int j = 0;
 13 while (*(dest + i) != '\0')
 14 i++;
 15 while (*(src + j) != '\0')
 16 {
 17 *(dest + i) = *(src + j);
 18 i++;
 19 j++;
 20 }
 21 return (dest);
 22 }
