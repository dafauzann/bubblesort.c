#include <stdio.h>
#include <stdlib.h>

int a[7] = {18, 11, 29, 41, 22, 33, 10};
void sort(int n)
{
	if (n == 0)
	return;
	
	int i,j;
	for (i=0;i<n-1;i++)
	{
		if (a[i + 1] > a[i])
		{
        j = a[i + 1];
        a[i + 1] = a[i];
        a[i] = j;
		}
	}
	sort(n-1);
}

int main()
{
	sort(7);
	int i;
	int n=sizeof(a)/sizeof(a[0]);
	printf("Urutan setelah bubble sort dari besar ke kecil :");
	for (i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}	
}
