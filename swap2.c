#include<stdio.h>
main()
{
	int p,q;
	printf(" value of p=");
	scanf("%d",&p);
	
	printf(" value of q=");
	scanf("%d",&q);
	
	p=p+q;
	q=p-q;
	p=p-q;
	
	printf("\n value of p=%d\n",p);
	printf(" value of q=%d",q);
}