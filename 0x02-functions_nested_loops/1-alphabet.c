#include "main.h"
<<<<<<< HEAD

/**
 * print_alphabet - utilizes the _putchar to print the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
=======
	/**
         * main - Entry point
         * Description :print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
>>>>>>> 59b8bd2dee96fbf909ec7a3d60558dae7ea0b4ca
