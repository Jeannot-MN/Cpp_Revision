#include<stdlib.h>

main()
{
	int base;
	int i = 1;
	
	printf("What is the base of the triangle?");
	scanf("%d",&base);
	
for(i ; i<=base; i++)
{
	int k=1;
for(k=1; k<=i; k++)
{
printf("*");
}
printf("\n");
}

for(i=1 ; i<=base; i++)
{
	int j=1;
	int k = 1;
for(j=base; j>=i; j--)
{
printf(" ");
}
for(k=1; k<=i; k++)
{
printf("*");
}
printf("\n");
}
}

