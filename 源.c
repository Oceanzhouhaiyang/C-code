#include<stdio.h>
void my_print(int arr[])
{
	printf("%d", arr[2]);
}
int main()
{
	int arr[] = { 0,1,2,3 };
	my_print(arr);
	return 0;

}