#include <unistd.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Error)
 */
int main(void)
{

	char content[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n";
	write(2, content, strlen(content));
	return (1);
}
