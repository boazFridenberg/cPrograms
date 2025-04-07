#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Q10();

void main()
{
	printf("start programing: \n=================\n");
	Q10();
	//Q4();
	/*int x = 13579;
	int y = 24;
	printf("%d", merge(x, y));*/
	
	
}


void Q2()
{
	int num, countOfEven =  0, countOfOod = 0;
	printf("enter number: \n");
	scanf("%d", &num);
	while (num > 0)
	{
		int digit = num % 10;
			if (digit % 2 == 0){
				countOfEven++;
			}
			else {
				countOfOod++;
			}
			num /= 10;
	}
	if (countOfEven > countOfOod)
	{
		printf("the even is bigger \n");
	}
	else if (countOfEven < countOfOod) {
		printf("the even is smaller \n");
		}
	else
	{
		printf("equel \n");
	}
}

//Q3
unsigned long reverse(unsigned int x)
{
	int reversed = 0;
	while (x > 0) {
		reversed = reversed * 10 + (x % 10);
		x /= 10;
	}

	return reversed;
}
//Q4
unsigned long merge(unsigned int a, unsigned int b)
{
	int result = 0, factor = 1;
	while (a > 0 || b > 0) {
		if (b > 0) {
			result += (b % 10) * factor;
			b /= 10;
			factor *= 10;
		}
		if (a > 0) {
			result += (a % 10) * factor;
			a /= 10;
			factor *= 10;
		}
	}

	return result;
}

void Q6()
{
	for (int i = 1000; i <= 9900; i++)
	{
		int sum = i / 100 + i % 100;
		if (sum * sum == i)
		{
			printf("%d\n", i);
		}
	}
}

void Q7()
{
	float rBig, rSmall;
	printf("enter the big and the small: \n");
	scanf("%f%f", &rBig, &rSmall);
	float areaBig = (rBig * rBig) * 3.14;
	float areaSmall = (rSmall * rSmall) * 3.14;
	printf("%f\n", (areaBig - areaSmall));
	float cBig = (rBig * 2) * 3.14;
	float cSmall = (rSmall * 2) * 3.14;
	float avg = (cBig + cSmall) / 2;
	printf("%f\n", (rBig - rSmall) * avg);
		
}

void Q8()
{
	
	float c, f;
	printf("enter the temp: \n");
	scanf("%f", &c);
	f = ((c * (9.0 / 5)) + 32);
	printf("%f\n", f);

	float c2, f2;
	printf("enter the temp: \n");
	scanf("%f", &f2);
	c2 = (f2 - 32) * (5.0 / 9);
	printf("%f\n", c2);

	float f3 = 0;
	for (int i = -273; i <= 101; i += 11)
	{
		f3 = ((i * (9.0 / 5)) + 32);
		printf("%d\t%f\n", i, f3);
		f3 = 0;
	}

}

void Q9()
{
	for (int i = 100; i <= 999; i++)
	{
		int digit1 = pow(i%10, 3);
		int testI = i / 10;
		int digit2 = pow(testI % 10, 3);
		int digit3 = pow(testI / 10, 3);
		int sum = digit1 + digit2 + digit3;
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}
void Q10()
{
	for (int i = 10000; i < 99999; i++)
	{
		int num = reverse(i);
		if (num == i * 4)
		{
			printf("%d\t%d\n", i, num);
		}
	}
}