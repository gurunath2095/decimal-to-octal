#include<stdio.h>
int main()
 {
	long int dec,m,Q;
	int oct[100],i=1,j;
	printf("Enter any decimal number: ");
	scanf("%d",&dec);
	Q = dec;
	while(Q!=0)
	 {
		oct[i++]= Q % 8;
		Q = Q / 8;
	}
	printf("Equivalent octal value %d: ",dec);
	for (j = i -1 ;j> 0;j--)
	      printf("%d",oct[j]);
	return 0;
}

