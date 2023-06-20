#include "main.h"

/**
 *  * _isalpha - if else
 *   * @c: int
 *    * Description: _isalpha
 *     * Return: Descrition
 *      */


int _isalpha(int c);


int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
