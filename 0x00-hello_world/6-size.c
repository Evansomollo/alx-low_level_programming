#include <stdio>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Succes)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: Xlu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: Xlu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: Xlu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int:Xlu byte(s)\n", (unsigned long)sizeof(d));
printf(:size of a float: Xlu byte(s)\n", (unsigned long)sizeof(f));
return (0)
}

