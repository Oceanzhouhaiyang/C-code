
#include<string.h>
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//int min = a > b ? a : b;
	//while (1)
	//{
	//	if (min % a == 0 && min % b == 0)
	//	{
	//		printf("最大公倍数是%d", min);
	//		break;

	//	}
	//	min++;
	//}
	int i = 1;
	for (i = 1;; i++)
	{
		if (a * i % b == 0)
		{
			printf("%d\n", a * i);
			break;
		}
	}

	return 0;

}
int main()
{
	char arr[] = {0};
	gets_s(arr);
	int str = strlen(arr);
}
int main()
{
	int arr[] = { 0,1 };
	char arr3[] = { 'a '};
	char arr1[] = { '13','13' };
	char arr2 []= "abcd";
	int x = sizeof(arr);
	int y = sizeof(arr1);
	int z = sizeof(arr2);
	int p = sizeof(arr3);
	printf(" % d % d % d %d ", x, y, z,p);
}
void reverse(char* left, char* right)
{
	char temp = 0;
	while (left < right)
	{
		temp = *left ;
		*left  = *right ;
		*right  = temp;
		left++;
		right--;
	}

}
int main()
{
	char arr[100000] = { 0 };
	gets_s(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end-1);
		if (*end != '\0')
			start = end+1;
		else
			start = end;

	}
	printf("%s\n", arr);
	return 0;
}