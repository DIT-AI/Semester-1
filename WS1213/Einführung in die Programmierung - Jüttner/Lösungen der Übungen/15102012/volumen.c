/*
Oberfläche und Volumen eines Quaders
=======================================================================
Schreiben Sie ein C-Programm, das Länge, Breite und Höhe eines Quaders
als Gleitkommazahlen einliest und sowohl die Oberfläche als auch das
Volumen des Quaders berechnet und ausgibt.
Einlesen geschieht mittels scanf(“%f“,&variablenname), Ausgeben mittels
printf(“%f“, variablenname);
=======================================================================
R.Drexler
16.10.2012
 */
#include<stdio.h>
#include<stdlib.h>

/*Funktionen zu Berechnung:*/

	void volum (float l, float w, float h) {
	float volum_value = l * w * h;
	printf("\nVolumen Quader = %.2f m^3\n\n",volum_value);
	}

	void surface (float l, float w, float h) {
		float side1 = l * w * 2;
		float side2 = l * h * 2;
		float side3 = w * h * 2;
		float surface_value = side1 + side2 + side3;
		printf("\nOberflaeche Quader = %.2f m^2\n\n", surface_value);
	}


int main(void) {

	/*Überschrift*/
	printf("\nBERECHNUNG DES VOLUMEN UND DER OBERFLAECHE EINES QUADERS\n\n");

	/*Variablendefinition*/
	float length = 0, width = 0, height = 0;

	/*Benutzereingabe*/
	printf("Bitte Laenge des Quaders eingeben: ");
	scanf("%f",&length);
	printf("Bitte Breite des Quaders eingeben: ");
	scanf("%f",&width);
	printf("Bitte Hoehe des Quaders eingeben: ");
	scanf("%f",&height);

	volum(length, width, height);
	surface(length, width, height);


	system("Pause");
	

}



