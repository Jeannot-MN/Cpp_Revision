#include<stdlib.h>

main()
{
	int base;
	
	printf("What is the base of the triangle?");
	scanf("%d",&base);
	
for(int i=1 ; i<=base; i++)
{
for(int k=1; k<=i; k++)
{
printf("*");
}
printf("\n");
}

for(int i=1 ; i<=base; i++)
{
for(int j=base; j>=i; j--)
{
printf(" ");
}
for(int k=1; k<=i; k++)
{
printf("*");
}
printf("\n");
}
}
}
