#include<stdio.h>
int main()
{
	int *p, ch;
	p=&ch;
	printf("Enter ch\n");
	scanf("%d", p);
	printf("%d\n", p);
	printf("%d", *p);
	return 0;
}
