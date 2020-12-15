/*#include <stdio.h>
#include <string.h>
#include <malloc.h>
char** masInt, ** masChar, ** masDouble, * ptr, key[6] = {'e','x','t','e','r','n'}, line[1024];
int lenghInt = 0, lenghChar = 0, lenghDouble = 0, i = 1, k = 0, h =0, s =0, flagI1=12, flagI2, flagC1=13, flagC2, flagD1=13, flagD2, lenghword = 0;
FILE* file;

int AddInt() {
	while (1) {
		lenghInt++;
		masInt = (char**)realloc(masInt, lenghInt * sizeof(char*));
		
		while (*(ptr + flagI1 + k) != ',' && *(ptr + flagI1 + k) != ';') {
			k++;
		}
		flagI2 = flagI1 + k;
		masInt[lenghInt - 1] = (char*)calloc(flagI2 - flagI1+1, sizeof(char));
		for (int b = 0; b < flagI2 - flagI1; b++) {
			masInt[lenghInt - 1][b] = *(ptr + flagI1+b);
		}
		masInt[lenghInt - 1][flagI2 - flagI1] = '\0';
		if (*(ptr + flagI2 + 1) == '\n' || *(ptr + flagI2 + 1) == '\0') {
			k = 0;
			return;
		}
		flagI1 = flagI2 + 2;
		k = 0;
	}

}
int AddChar() {
	while (1) {
		lenghChar++;
		masChar = (char**)realloc(masChar, lenghChar * sizeof(char*));
		
		while (*(ptr + flagC1 + k) != ',' && *(ptr + flagC1 + k) != ';') {
			k++;
		}
		flagC2 = flagC1 + k;
		masChar[lenghChar - 1] = (char*)calloc(flagC2 - flagC1+1, sizeof(char));
		for (int b = 0; b < flagC2 - flagC1; b++) {
			masChar[lenghChar - 1][b] = *(ptr + flagC1+b);
		}
		masChar[lenghChar - 1][flagC2 - flagC1] = '\0';
		if (*(ptr + flagC2 + 1) == '\n' || *(ptr + flagC2 + 1) == '\0') {
			k = 0;
			return;
		}
		flagC1 = flagC2 + 2;
		k = 0;
	}
}
int AddDouble() {
	while (1) {
		lenghDouble++;
		masDouble = (char**)realloc(masDouble, lenghDouble * sizeof(char*));
		while (*(ptr + flagD1 + k) != ',' && *(ptr + flagD1 + k) != ';') {
			k++;
		}
		flagD2 = flagD1 + k;
		masDouble[lenghDouble - 1] = (char*)calloc(flagD2 - flagD1+1, sizeof(char));
		for (int b = 0; b < flagD2 - flagD1; b++) {
			masDouble[lenghDouble - 1][b] = *(ptr + flagD1+b);
		}
		masDouble[lenghDouble - 1][flagD2 - flagD1] = '\0';
		if (*(ptr + flagD2 + 1) == '\n' || *(ptr + flagD2 + 1) == '\0') {
			k = 0;
			return;
		}
		flagD1 = flagD2 + 2;
		k=0;
	}
}

int looking(void){
	while (!feof(file)) {
		i = 0;
		s = 0;
		ptr = fgets(line, 1024, file);
		if (*ptr == NULL) {
			break;
		}
		while (*ptr != '\0') {

			if (*(ptr + i + s) == key[0]) {
				while (*(ptr + i + s) = key[i]) {
					i++;
					if (i == 6) {
						if (*(ptr + i + s + 1) == 'i') {
							AddInt();
							*(ptr) = '\0';
							flagI1 = 11;
						}
						else if (*(ptr + i + s + 1) == 'c') {
							AddChar();
							*(ptr) = '\0';
							flagC1 = 12;
						}
						else if (*(ptr + i + s + 1) == 'd') {
							AddDouble();
							*(ptr) = '\0';
							flagD1 = 14;
						}

						break;
					}
				}
			}
			else if (*(ptr + i + s) == ' ') {
				s++;
			}else if (*(ptr + i + s) == '\t') {
				s++;
			}
			else
				*(ptr) = '\0';
		}
	}
}

int main(int argc, char* argv[]) {
	int j = 0;
	masInt = (char**)calloc(0, sizeof(char*));
	masChar = (char**)calloc(0, sizeof(char*));
	masDouble = (char**)calloc(0, sizeof(char*));
	for (int z = 1; z < argc; z++) {
		fopen_s(&file, argv[z], "r+t");
		
		looking();
	}
	printf("Extern int variables:\n");
	for (int b = 0; b < lenghInt; b++) {
		while (masInt[b][j] != '\0') {
			printf("%c", masInt[b][j]);
			j++;
		}
		j = 0;
		printf("\n");
	}
	printf("Extern char variables:\n");
	for (int b = 0; b < lenghChar; b++) {
		while(masChar[b][j] != '\0') {
			printf("%c", masChar[b][j]);
			j++;
		}
		j = 0;
		printf("\n");
	}
	printf("Extern doble variables:\n");
	for (int b = 0; b < lenghDouble; b++) {
		while (masDouble[b][j] != '\0') {
			printf("%c", masDouble[b][j]);
			j++;
		}
		j = 0;
		printf("\n");
	}
}*/