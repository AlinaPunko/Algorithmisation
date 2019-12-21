#include <iostream> 
int main()
{
	float c1, c2;
	int i = 1;
	puts("enter: ");
	scanf("%f%f", &c1, &c2);
	while (i <= 6)
	{
		c1 /= 2;
		c2 += c1;
		c2 /= 2;
		c1 += c2;
		i++;
	}
	printf("%f\n%f", c1, c2);
	puts("");
}
