#include<stdio.h>
void main()
{
	int min,h,m;
	printf("Enter the minutes");
	scanf("%d",&min);
	h=min/60;
	m=min%60;
	printf("%d hours %d (s) minutes (s)",h,m);
}
