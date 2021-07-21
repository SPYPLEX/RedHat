#include <stdio.h>
int main()
{
	int ar[5];
	for (int i=0;i<=4;i++)
	{
		printf ("Enter %d element\n",i+1);
		scanf("%d", ar[i]);
	}
     
     printf("Elements is given below\n");
     for (intj=0;j<=4;j++)
     {
     	
     	printf("%d", ar[j]);
	 }
   }
