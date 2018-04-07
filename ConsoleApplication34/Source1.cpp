#include <stdio.h>
#include<time.h>
#include<iostream>
#include<locale.h>
#include "Header.h"
int i, j;
void ProstoeChislo( int *n)
{
	for (i = 1; i < *n; i++)
	{
		if (*n % i == 0)
	{
		printf("„исло €вл€етс€ простым %d\n", *n);
	}
	}


}
void FillArray(int *mas, int len)
{
	for ( i = 0; i < len; i++)
	{
		mas[i] = 1 + rand() % 40;
	}

}
void PrintArray(int *mas, int len)
{
	for ( i = 0; i < len; i++)
	{
		printf("%d\t", mas[i]);
	}
	printf("\n");
}
void LinPoisk(int *mas, int len,int key)
{
	for (i = 0; i < len; i++) 
	{
		if (mas[i] == key)     
		{
		printf("элемент найден за %d шагов\n",i);
		break;
		}


	}
	printf("элемент не найден за %d шагов\n",i);
}
void BinarMas(int *mas, int len, int key)
{
	int count = 0;
	int left = 0, right = len - 1;
	int search = -1;
	while (left <= right)
	{
		count++;
		int mid = (left + right) / 2;
		if (key == mas[mid])
		{
			search = mid;
			break;
		}
		if (key < mas[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	if (search == -1)
		printf("Ёлемент не найден!!!\n");
	else
		printf("mas[ %d ] = %d за %d проходов\n", search, mas[search], count);


}
