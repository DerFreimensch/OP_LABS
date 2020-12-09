/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int NumbersOfTeams;
int cnt = 0;
int* index, ** plays, * points;
char** teams;
char teamName[15];
int teamA, teamB;
int cntg = 0;
struct team
{
	char name[50];
	int score[50];
	int total;
};

void teamplay() {
	while (cntg != NumbersOfTeams * (NumbersOfTeams - 1) / 2) {
		teamA = 1 + rand() % NumbersOfTeams;
		teamB = 1 + rand() % NumbersOfTeams;
		if (teamA == teamB) {
			teamplay();
		}
		else if (plays[teamA - 1][teamB - 1] == 0 || plays[teamA - 1][teamB - 1] == 1 || plays[teamA - 1][teamB - 1] == 3) {
			teamplay();
		}
		else {
			printf("Write result of game between team %d and %d\n", teamA, teamB);
			scanf("%d", &plays[teamA - 1][teamB - 1]);
			getchar();
			scanf("%d", &plays[teamB - 1][teamA - 1]);
			getchar();
			cntg++;
		}
	}
}

int main(void)
{

	printf("Write number of teams: ");
	scanf_s("%d", &NumbersOfTeams);
	getchar();
	index = (int*)calloc(NumbersOfTeams, sizeof(int));
	points = (int*)calloc(NumbersOfTeams, sizeof(int));
	teams = (char**)calloc(NumbersOfTeams, sizeof(char*));
	teams[NumbersOfTeams] = (char*)calloc(cnt, sizeof(char));

	plays = (int**)calloc(NumbersOfTeams, sizeof(int*));

	for (int j = 0; j < NumbersOfTeams; j++)
	{
		index[j] = j + 1;
	}
	for (int j = 0; j < NumbersOfTeams; j++)
	{
		printf("Print name of team N%d: ", j + 1);
		cnt = 0;
		teams[j] = (char*)calloc(cnt, sizeof(char));
		gets(teamName);
		while (cnt != sizeof(teamName))
		{
			cnt++;
			teams[j] = (char*)realloc(teams[j], cnt * sizeof(char));
			teams[j][cnt - 1] = teamName[cnt - 1];
			teamName[cnt - 1] = ' ';
		}
		
	}
	for (int j = 0; j < NumbersOfTeams; j++)
	{
		plays[j] = (int*)calloc(NumbersOfTeams, sizeof(int));
		for (int k = 0; k < NumbersOfTeams; k++)
		{
			if (j == k)
			{

			}
			else {
				plays[j][k] = -1;
			}
		}
	}
	printf("Rules of filling the play's table: \n\n");
	printf("If win first team write 3 then ENTER and write 0\nIf win second team write 0 then ENTER and write 3\nIf draw write 1, press ENTER and write 1\n\n");
	teamplay();
	printf("Number| Team Names      | Table         | Points\n");
	for (int j = 0; j < NumbersOfTeams; j++)
	{
		printf("%d     | ", index[j]);
		
		for (int l = 0; l < 15; l++) {
			printf("%c", teams[j][l]);
		}
		printf(" | ");
		for (int k = 0; k < NumbersOfTeams; k++)
		{
			if (j == k)
			{
				printf(" + ");
			}
			else {
				printf(" %d ", plays[j][k]);
			}
		}
		printf("\n");
	}
	
}*/