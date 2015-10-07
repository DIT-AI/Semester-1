#include <stdio.h> /*Standart Input Output*/
#include <stdlib.h>/*Standart Library*/
#include <math.h>  /*Mathematische Funktionen*/

int main(void){

	printf("\nLoesung einer Quatratischen Gleichung:\n\n");

	/*VARIABLEN DEFINIEREN*/
	float a=0, b=0, c=0, D=0;

	/*EINGABE DER WERTE*/
	printf("ax^2 + bx + c = 0\n\n");
	printf("Bitte a eingeben: ");
	scanf("%f",&a);
	printf("Bitte b eingeben: ");
	scanf("%f",&b);
	printf("Bitte c eingeben: ");
	scanf("%f",&c);

	/*NORMALFORM BERECHNEN*/
	if (a<0 || a>0){        /*Nur wenn a<0 oder a>0*/
        b = b/a;
        c = c/a;
	}

	/*BERECHNUNG DER DISKRIMINANTE*/
	D = (pow(b,2)/4)-c; /* pow(Basis,Exponent) also b² */

	/*FALLUNTERSCHEIDUNGEN UND AUSGABE DER LÖSUNGEN*/

	if(D>0){
		printf("\nZwei verschiedene Loesungen: L{%.4f,%.4f}\n\n",(-b/2) + sqrt(D),(-b/2) - sqrt(D));  /*sqrt(D) = WURZEL AUS D*/
	}else if(D==0){
		printf("\nEs gibt eine(doppelte) Loesung: L{%.4f}\n\n",(-b/2));
	}else{
		printf("\nEs gibt keine Loesung im Bereich der reellen Zahlen\n\n");
	}

	system("Pause");

}




