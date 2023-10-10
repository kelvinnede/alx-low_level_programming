#include <unistd.h>

void _putchar(char c)
{
	    write(1, &c, 1);
}

void print_alphabet_x10(void)
{
	    int i = 0;
	        char letter;

		    while (i < 10)
			        {
					        letter = 'a';
						        while (letter <= 'z')
								        {
										            _putchar(letter);
											                letter++;
													        }

							        _putchar('\n');
								        i++;
									    }
}

int main(void)
{
	    print_alphabet_x10();
	        return 0;
}

