#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	char Vorname[20];
	char Nachname[20];
	char Adresse[20];
	char Wohnort[20];
	fflush(stdin);

	printf("Geben Sie Ihren Vornamen ein:\n");
	scanf("%s", Vorname);
	printf("Geben Sie Ihren Nachnamen ein:\n");
	scanf("%s", Nachname);
	printf("Geben Sie Ihre Adresse ein:\n");
	scanf("%s", Adresse);
	printf("Geben Sie Ihren Wohnort ein:\n");
	scanf("%s", Wohnort);
	
	printf("\nIhr Briefkopf:\n\n");
	printf("%s", Vorname);
	printf(" %s", Nachname);
	printf("\n%s", Adresse);
	printf("\n%s\n", Wohnort);

	system("PAUSE");

}
