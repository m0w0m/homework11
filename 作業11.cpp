#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	printf("請輸入數字:");
	scanf("%d %d %d", &a,&b,&c);
	if (a < b and b < c)
		printf("%d  %d  %d", a, b, c);
	else if (a < c and c < b)
		printf("%d  %d  %d", a, c, b);
	else if (b < a and a < c)
		printf("%d  %d  %d", b, a, c);
	else if (b < c and c < a)
		printf("%d  %d  %d", b, c, a);
	else if (c < a and a < b)
		printf("%d  %d  %d", c, a, b);
	else if (c < b and b < a)
		printf("%d  %d  %d", c, b, a);
	
	
	system("pause");
	return 0;
}