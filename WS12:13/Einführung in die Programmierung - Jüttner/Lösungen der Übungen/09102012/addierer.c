/*
 * addierer.c
 *
 *  Created on: 09.10.2012
 *      Author: rudi
 */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("\nADDIERER 09.10.2012");
	printf("R.Drexler\n\n");

	int zahl1 = 0, zahl2 = 0, summe = 0;

	printf("\nBitte 1. Summanten eingeben: ");
	scanf("%d",&zahl1);
	printf("\nBitte 2. Summanten eingeben: ");
	scanf("%d",&zahl2);

	//Berechnung der Summe

	summe = zahl1 + zahl2;

	//Ausgabe Ergebnis;

	printf("\n\n%d + %d = %d\n\n",zahl1,zahl2,summe);
	
	system("Pause");
}


