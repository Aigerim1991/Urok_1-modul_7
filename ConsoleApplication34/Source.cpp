#include <stdio.h>
#include<time.h>
#include<iostream>
#include<locale.h>
#include "Header.h"
#define len 10
int f;
void main()
{
	setlocale(LC_ALL, "rus");
	do
	{
		printf("¬ведите номер задани€: ");
		scanf("%d", &f);
		switch (f)
		{
		case 1:
		{
			int n=100;
			int *p;
			p = &n;
			printf("%d ќбъ€вите указатель на целое число, называемое адресом %p\n", *p,p);
		}break;
		case 2:
		{
			char *W=NULL;
			W= (char*)malloc(sizeof(char) * 10);
			char *str = NULL;
			str = (char*)malloc(sizeof(char) * 10);
			str="text";
			W = str;
			puts(W);
		}
		break;
		case 3:
		{
			char *mas = NULL;
			mas = (char*)malloc(sizeof(char) * 10);
			mas = "Hello";
			puts(mas);
		}
		break;
		case 4:
		{
			int n;
			printf("¬ведите число:");
			scanf("%d", &n);
			ProstoeChislo(&n);
		}
		break;
		case 5:
		{
			int mas[len];
			int key;
			printf("¬ведите key:");
			scanf("%d", &key);
	 FillArray(mas, len);
	PrintArray(mas, len);
	LinPoisk(mas, len, key);

		}
		break;
		case 6:
		{
			int mas[len];
			int key;
			printf("¬ведите key:");
			scanf("%d", &key);
			FillArray(mas, len);
			PrintArray(mas, len);
			BinarMas(mas, len, key);
		}
		break;
		case 7:
		{
			int count = 10, *temp, sum = 0;
			temp = &count;
			*temp = 20;
			temp = &sum;
			*temp = count;
			printf("count=%d,*temp=%d,sum=%d\n", count, *temp, sum);
		}
		break;
		default:
			break;
		}

	} while (f>0);

}