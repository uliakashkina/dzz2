#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "functions.h"

int ex_1;
char* wordChanger(char* str)
{
	int len = strlen(str);

	char* res = malloc((len + 1) * sizeof(char));

	int first;
	int last;
	int flag = 0;
	for (int i = 0; i < len; i++)
	{
		if (flag == 0 && str[i] == ' ')
		{
			first = i;
			flag = 1;
		}
		if (str[i] == ' ')
			last = i;
	}
	global = 0;
	for (int i = last + 1; i < len; i++) {
		res[global] = str[i];
		global++;
	}
	res[global] = ' ';
	global++;
	for (int i = first + 1; i < last; i++)
	{
		res[global] = str[i];
		global++;
	}
	res[global] = ' ';
	global++;
	for (int i = 0; i < first; i++)
	{
		res[global] = str[i];
		global++;
	}
	res[global] = '\0';
	str = res;

	return str;


}
void ex_2()
{
	struct person
	{
		char Surname[256];
		char Name[256];
		char SecondName[256];
		char Gender[256];
		char Job[256];
		int Day;
		int Month;
		int Year;
		int Age;
	};

	int N = 0;

	scanf_s("%d", &N);

	struct person* Arr = (struct person*)malloc(N * sizeof(struct person));

	for (int i = 0; i < N; i++)
	{
		scanf_s("%s", Arr[i].Surname, 256);
		scanf_s("%s", Arr[i].Name, 256);
		scanf_s("%s", Arr[i].SecondName, 256);
		scanf_s("%s", Arr[i].Gender, 256);
		scanf_s("%s", Arr[i].Job, 256);
		scanf_s("%d", &Arr[i].Day);
		scanf_s("%d", &Arr[i].Month);
		scanf_s("%d", &Arr[i].Year);
		Arr[i].Age = 2021 - Arr[i].Year;
		if (strcmp(Arr[i].Job, "Engineer") == 0)
		{
			if (strcmp(Arr[i].Gender, "M") == 0)
			{
				if (Arr[i].Age >= 65)
				{
					printf("%s %s %s, %s, %s, %d.%d.%d", Arr[i].Surname, \
						Arr[i].Name, Arr[i].SecondName, Arr[i].Gender, Arr[i].Job, \
						Arr[i].Day, Arr[i].Month, Arr[i].Year);
				}
			}
			else
			{
				if (Arr[i].Age >= 60)
				{
					printf("%s %s %s, %s, %s, %d.%d.%d", Arr[i].Surname, \
				 		Arr[i].Name, Arr[i].SecondName, Arr[i].Gender, Arr[i].Job, \
						Arr[i].Day, Arr[i].Month, Arr[i].Year);
				}
			}
		}
	}
}