#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char u = 'ß';
    printf("%u\n",u);
    printf("\223\n");
    system("PAUSE");
}
