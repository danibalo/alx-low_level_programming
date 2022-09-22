/**
 **_strcat - concanates two strings
 *@dest: the destination string
 * @src: the source string to be concatenate.
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len] = src[i];
	return (dest);
}

