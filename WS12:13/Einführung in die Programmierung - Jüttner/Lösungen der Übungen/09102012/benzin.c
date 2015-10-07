/*
 * benzin.c
 *
 *  Created on: 09.10.2012
 *      Author: R. Drexler
 */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	printf("\nBERECHNUNG BENZINVERBRAUCH 09.10.2012");
	printf("R.Drexler\n");

	//Variablen Deklaration

	double dist = 0, fuel = 0, consu = 0;

	//Daten einlesen

	printf("\nBitte gefahrene Kilometer eingeben: ");
	scanf("%lf",&dist);
	printf("\nBitte verbrauchte Menge eingeben: ");
	scanf("%lf",&fuel);

	consu = fuel / dist * 100;

	//Ausgabe auf zwei Stellen nach dem Komma
	printf ("\n\nVerbrauch pro 100km/h : %.2lf l\n",consu);
    
    system("Pause");
}


