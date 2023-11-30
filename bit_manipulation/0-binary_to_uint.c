#include <stdio.h>
#include "main.h"

unsigned int binaryToUnsignedInt(const char *binary)
{
	unsigned int result = 0;

	while (*binary != '\0')

	{
		result = (result << 1) + (*binary++ - '0');

	}

	return (result);

}

int main(void);
{
	const char *binaryNumber = "101010";

	printf("Binary number %s in decimal: %u\n", binaryNumber, result);

	return (0);
}
