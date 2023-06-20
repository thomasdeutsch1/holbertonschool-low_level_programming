#include "main.h"

/**
 *  ** print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *   ** followed by a new line
 *    **/

int _islower(int c);


int _islower(int c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	} else {
		return 0;
	}
}
