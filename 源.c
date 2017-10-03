#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int s;
	scanf_s("%d", &s);
	switch (s)
	{
	case 1:
	{
		printf("Monday");
		break;
	}
	default:
	{
		printf("Error");
		break;
	}
	}
	system("pause");
}