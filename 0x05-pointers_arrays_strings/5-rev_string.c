#include "holberton.h"
/**
 *rev_string - Reverse a string
 *@s: pointer of a string
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i, j, k;
char l;
for (i = 0; s[i]; i++)
/* Esto me recorre el string para saber el largo*/
;
k = i;
/*variable K es igual al largo de mi string*/
for (i--, j = 0; j < k / 2; i--, j++)
/*
 *me ubica en el punto final del string
 *y me trae los caracteres del ultimo al primero
 */
{
l = s[j];
s[j] = s[i];
s[i] = l;
}
}
