// TODO: Вывести на экран содержимое файла с программой на языке С, выделяя в
//строке все идентификаторы массивов

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <malloc.h>
#define MAXLINE 1024

int main(void) {
	char line[MAXLINE], * ptr;
	int i = 0, k = 0, lenghWord = 0, startflag = 0, flag =0;
	HANDLE hStdout;
	FILE* file;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	file = fopen("code.txt", "r+t");
	if (file == NULL)
		return 10;
	while (!feof(file))
	{



		if (fgets(line, MAXLINE, file) == NULL)
			break;
		else {
			
			i = 0;
			flag = 0;
			startflag = 0;
			while (i < MAXLINE) {
				if (line[i] == ' ' || line[i] == '.' || line[i] == ',' || line[i] == ' \n' || line[i] == '\0' || line[i] == ']' || line[i] == '[' || line[i] == '!' || line[i] == '(' || line[i] == ')' || line[i] == '&') {
					if (flag) {
						flag = 0;
						if (line[i] == '[') {
							SetConsoleTextAttribute(hStdout, (WORD)((0 << 4) | 4));
							while (startflag < i) {
								printf("%c", line[startflag++]);
							}
							SetConsoleTextAttribute(hStdout, (WORD)((0 << 4) | 2));
						}
						else {
							while (startflag < i) {
								printf("%c", line[startflag++]);
							}
						}
					}
					printf("%c", line[i]);
				}
				else {
					if (!flag)
					{
						startflag = i;
						flag = 1;
					}

				}
				i++;
				if (line[i - 1] == '\0')
					break;
			}
		}
	}
}
