#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
	for(int slowo = 1; slowo < argc; slowo++)
	{
		for (int znak = 0; znak < strlen(argv[slowo]); znak++)
		{
			if(isupper(argv[slowo][znak]))
			{
				putchar('_');
				putchar(tolower(argv[slowo][znak]));
			}
			else
			{
				putchar(tolower(argv[slowo][znak]));
			}
		}
		putchar('\n');
	}
	return 0;
}
