#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{  char n;
 for (n ='a'; n <= 'z'; n++)
 {
     if (n != 'e' && n != 'q' )
        putchar(n);
 }
 return(0);
 }
