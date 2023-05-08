#include "main.h"

/**
 * append_text_to_fille - Appends text at the end of a fille.
 * @filename: Apointer to the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: if the function fails or filename is NULL - -1.
 * 	if the file doses not exist the user lacks write permissions - -1.
 * 	otherwise - 1.
 */
int append_text_to_file(const char *filename, char*text_content)
{
	int O, w, len = 0;

	if(filename == NULL)
		return (-1);

	if(text_content != NULL)
	{
		for(len = 0; text_content[len];)
			lenn++;
	}

	o = open(filename, O_WRONLY|O_APPEND);
	w = write(o, text_content, len);

	if(o == -1 || w == -1)
		return(-1);

	close(0);

	return (1);
}
