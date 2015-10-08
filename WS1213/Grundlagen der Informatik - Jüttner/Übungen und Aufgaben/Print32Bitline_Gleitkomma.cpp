#include <stdio.h>
#include <stdlib.h>

void Print32BitLine(unsigned long* ui)
{ int i;
for(i=0; i<32; i++)
{ if(*ui & (0x80000000>>i))
printf("1");
else
printf("0");
}
printf("\n");
}

int main()
{
   float f = 1.0;
   Print32BitLine((unsigned long*) &f);
   
   system("PAUSE");
};
