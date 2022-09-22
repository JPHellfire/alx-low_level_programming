/**
* _strcat - two strings
* @dest: pointer to string
* @src: pointer to source string
* Return: pointer to resulting string
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0')
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
