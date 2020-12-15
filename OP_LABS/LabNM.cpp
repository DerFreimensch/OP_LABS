/*
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<locale.h>
#include<stdlib.h>
int i, j, size = 0, width = 0, si = 0, s = 1, k = 0, b=0;
char* ptr1, *ptr2;
char** arr;
char line[1024];
void sort();


int main()
{
	setlocale(LC_ALL, "Russian");
	FILE* f1, * f2;


	f1 = fopen("Start.txt", "r");
	f2 = fopen("End.txt", "w");

	if (f1 == NULL)
	{
		printf("Ошибка при открытии файла Start\n");
		return;
	}

	if (f2 == NULL)
	{
		printf("Ошибка при открытии файла End\n");
		return;
	}

	arr = (char**)calloc(size, sizeof(char*));

	while (!feof(f1))
	{


		ptr1 = fgets(line, 1024, f1); 
		ptr2 = ptr1;
		if (*ptr1 == NULL) {
			break;
		}
		width = 0;
		b = 0;
		size++;
		arr = (char**)realloc(arr, size * sizeof(char*));

		arr[size - 1] = (char*)calloc(width, sizeof(char));
		while (ptr1 != '\0') {
			if (ptr1 == '\0' || ptr1 == '\n')
			{
				break;
			}
			while (*ptr2  != '\n')
			{
				width++;
				ptr2++;
			}
			arr[size - 1] = (char*)realloc(arr[size - 1], (++width) * sizeof(char));
			while (*ptr1 != '\n')
			{
				
				arr[size - 1][b] = *ptr1;
				ptr1++;
				b++;
			}
			
			arr[size - 1][++b] = '\n';
			break;
		}
	}
	sort();
	si = 0;
	k = 0;
	while (si < size - 1)
	{
		while (arr[si][k] != '\n') {
			fputc(arr[si][k], f2);
			k++;
		}
		k = 0;
		si++;
		if (arr[si][0] != '\n') {
			fputc('\n', f2);
		}
	}
	fclose(f1);
	fclose(f2);

	return 0;
}


void sort()
{

	i = 0;
	while (si != size - 1) {
		while (i + s < size - 1) {
			if (strcmp(arr[i], arr[i + s]) == 0) {
				arr[i + s] = (char*)calloc(1, sizeof(char));
				arr[i + s][0] = '\n';
			}
			s++;
		}
		i++;
		s = 1;
		si++;
	}
	si = 0;
}*/