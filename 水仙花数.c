#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		int sum = 0;
		int temp = i;
		int n = 1;
		while(temp/10)
		{
			n++;
			temp = temp / 10;
		}
		int temp2 = i;
		while (temp2 )
		{
			sum = sum + pow(temp2 % 10, n);
			temp2 = temp2 / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}