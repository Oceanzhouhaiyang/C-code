#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char*arr)
{
	size_t count=0;
	assert(arr!=NULL);
	while(*arr++!='\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[]="abcd";
	printf("长度为%d\n",my_strlen(arr));
}
int numberof(int n)
{
	int i=0;
	int count=0;
	for(i=0;i<32;i++)
	{
	    if(((n>>i)&1)==1)
		{
			count++;
		}
	}
	return count;
}
int numberof(int n)
{
	int count=0;
	while(n)
	{
		n = n & (n-1);
		count++;
	}
	return count;
}
int main()
{
	int n=15;
	int ret=0;
	ret=numberof(n);
	printf("%d\n",ret);
	return 0;
}//求数相同的二进制位,先异或函数，相同为1不同为0，然后调用numberof函数统计1的个数
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
	char arr[100] = { 0 };
	gets_s(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*start != ' ' && *start != '\0')
		{
			end++;
		}
		reverse(start, end-1);
		if (*end != '/0')
			start = end++;
		else
			start = end;

	}
	printf("%s\n", arr);
	return 0;

}