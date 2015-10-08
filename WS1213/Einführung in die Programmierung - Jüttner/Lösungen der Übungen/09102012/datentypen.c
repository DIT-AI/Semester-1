/*
 * datentypen.c
 *
 *  Created on: 09.10.2012
 *      Author: R. Drexler
 */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
    
	printf("\nSpeichergroesse char: %i byte",sizeof(char));
	printf("\nSpeichergroesse short: %i byte",sizeof(short));
	printf("\nSpeichergroesse int: %i byte",sizeof(int));
	printf("\nSpeichergroesse unsigned char: %i byte",sizeof(unsigned char));
	printf("\nSpeichergroesse unsigned short: %i byte",sizeof(unsigned short));
	printf("\nSpeichergroesse unsigned int: %i byte",sizeof(unsigned int));
	printf("\nSpeichergroesse float: %i byte",sizeof(float));
	printf("\nSpeichergroesse double: %i byte\n\n",sizeof(double));

system("Pause");
}


