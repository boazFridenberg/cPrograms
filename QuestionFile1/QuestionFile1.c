#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Q2();
void Q3();
void Q4();
void Q7();
void Q10();
void Q11();
void Q12();
void Q13();

void main()
{
	printf("start programing: \n=================\n");

	Q13();
	
}

void Q2()
{
	int num1, num2, sum = 0;
	printf("enter two numbers: ");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if (num1 > num2)
	{
		for (size_t i = num2; i <= num1; i++)
		{
			sum += i;
		}
	}
	else
	{
		for (size_t i = num1; i <= num2; i++)
		{
			sum += i;
		}
	}

	printf("your sum is: %d", sum);
}

void Q3()
{
	int kids, age, min = 0, max = 0;
	printf("enter how much kids: ");
	scanf("%d", &kids);
	for (size_t i = 0; i < kids; i++)
	{
		printf("enter the age: ");
		scanf("%d", &age);
		if (age > max)
		{
			max = age;
		}
		else if (age < min)
		{
			min = age;
		}
	}
	if (max - min > 3)
	{
		printf("the class is homogenit");
	}
	else
	{
		printf("the class is hatrogenit");
	}
}
void Q4()
{
	int m, n, num, num1, num2;
	num1 = 0, num2 = 0;
	printf("enter in a fixed number \n");
	printf("enter the amount of numbers you would like yo comair to the fix number");
	scanf("%d%d", &m, &n);
	for (int i = 0; i < n; i++) {
		printf("enter in a number");
		scanf("%d", &num);
		if (num1 <= num2 && num > num1) {
			num1 = num;
		}
		else if (num > num2) {
			num2 = num;
		}
	}
	if (num1 + num2 > m) {
		printf("there is two numbers that thier sum is biger then the valeu of m");
	}
	else {
		printf("there is no two numbers that thier sum is bigger then m");
	}
}

void Q7()
{
	int num, hours, minutes, seconds;
	printf("enter the seconds: \n");
	scanf("%d", &num);
	if (num < 86400)
	{
		hours = num / 3600;
		minutes = (num - (hours * 3600)) / 60;
		seconds = (num - (hours * 3600)) - (minutes * 60);
	}
	printf("the time is- %d:%d:%d", hours, minutes, seconds);
}

void Q10()
{
	int a, q, n;
	printf("enter the numbers: \n");
	scanf("%d %d %d", &a, &q, &n);
	printf("%d", a);
	for (int i = 1; i < n; i++)
	{
		a *= q;
		printf(" %d", a);
	}

}

void Q11()
{
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0) 
		{
			printf(" %d", i);
		}
	}
}

void Q12()
{
	int a;
	printf("enter number between 1 to 18: \n");
	scanf("%d", &a);
	if (1 < a < 18)
	{
		for (int i = 1; i <= a; i++)
		{
			int num = a - i;
			printf(" %d%d", i, num);
		}
	}
	else
	{
		printf("wrong number \n");
	}

}

void Q13()
{
	for (int i = 10; i < 100; i++)
	{
		for (int j = 10; j < 100; j++)
		{
			if (i % 10 == j / 10)
			{
				printf("%d %d\n", i, j);
			}
		}
	}
}



