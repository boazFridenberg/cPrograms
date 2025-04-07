#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int power(int base, int exp);


void main()
{
	printf("sand box: \n=========\n");
	printf("int = %d, char = %c\n", 'a', 'a');
	printf("int = %d, char = %c\n\n", 122, 122);

	char ch = '4';
	int num = ch - '0';
	printf("ch as a char: %c, as int: %d\n", ch, ch);
	printf("number is: %d\n\n", num);

	for (size_t i = 0; i <= 10; i+=2)
	{
		printf("i = %d\n\n", i);
	}

	int result = power(2, 3);
	printf("%d\n\n", result);

	int base, exp, res;
	printf("enter two nymbers: ");
	scanf("%d%d", &base, &exp);
	res = power(base, exp);
	printf("%d\n\n", res);

}

int power(int base, int exp)
{
	int result = 1;
	for (size_t i = 0; i < exp; i++)
	{
		result *= base;
	}
	return result;
}