#include <stdio.h>
int main()
{
	int a[100], n, i, j, position, swap;
	printf("Enter the number of elements :");
	scanf("%d", &n);
	printf("Enter the elements of the array :");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		position = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[position] > a[j])
				position = j;
		}
		if (position != i)
		{
			swap = a[i];
			a[i] = a[position];
			a[position] = swap;
		}
	}
	printf("Sorted Array :\n ");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

	return 0;
}
