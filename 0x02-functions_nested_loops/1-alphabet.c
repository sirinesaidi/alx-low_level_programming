#include "main.h"


	/**
	 * Description: program that prints alphabet using 1-alphabet.c prototype
         *print_alphabet - print all alphabet in lowercase
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
