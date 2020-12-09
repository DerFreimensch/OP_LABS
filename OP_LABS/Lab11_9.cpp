// TODO: Вывести на экран содержимое файла с программой на языке С, выделяя в
//строке все идентификаторы массивов

/*#include <stdio.h>
#include <string.h>
#include <windows.h>
#define MAXLINE 1024

int main(void) {
	char line[MAXLINE], word[100][MAXLINE], *ptr;
	int flag = 0, i = 0, k =0;
	HANDLE hStdout;
	FILE* file;
	WORD foregroundColor0;
	WORD backgroundColor;
	WORD textAttribute;
	foregroundColor0 = FOREGROUND_INTENSITY |
		FOREGROUND_RED;
	backgroundColor = BACKGROUND_INTENSITY |
		BACKGROUND_BLUE |
		BACKGROUND_GREEN |
		BACKGROUND_RED;
	SetConsoleTextAttribute(hStdout,
		foregroundColor0 | backgroundColor);
	file = fopen("code.txt", "r+t");
	if (file == NULL)
		return 10;
	while (!feof(file))
	{
		ptr = fgets(line, MAXLINE, file);
		if (ptr == NULL)
			break;
		if (*ptr == '\0' || *ptr == '\n') {
			break;
		}
		else if (flag == 0 && (*ptr != ' ' || *ptr == '(')) {
			flag = 1;
			while (flag == 1) {
				if (*(ptr + i) == '[') {
					for (int l = 0; l < i; l++) {
						word[k][l] = *(ptr + l);
					}
				}
				if (*(ptr + i) == ' ') {
					flag = 0;
				}
				i++;
			}
		}
}*/