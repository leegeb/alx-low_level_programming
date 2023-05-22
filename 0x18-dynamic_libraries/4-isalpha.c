#include "main.h"
/**
 * _isalpha -> checks for alphabetic character
 * @c: a character that will be checked
 * Return: 1 and 0 based on conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
