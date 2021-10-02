#include <stdio.h>
void swap(void* e1, void* e2, int width)
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < width; i++)
	{
		temp = *(char*)e1;
		*(char*)e1 = *(char*)e2;
		*(char*)e2 = temp;
		((char*)e2)++;
		((char*)e1)++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*sort)(const void* e1, const void* e2))
{
	int i = 0;//лк
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (sort((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int sort(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int main()
{
	int arr[] = { 1,4,3,6,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(int);
	bubble_sort(arr, sz, width, sort);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	/*printf("%d", arr[4]);*/
	return 0;
}
