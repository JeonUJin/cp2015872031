#include <stdio.h>
void insertion_sort(int *data, int n){
	int i, j, remember;
	for (i = 1; i < n; i++){
		remember = data[(j=i)];
		while ( --j > 0 && remember < data[j]){
			data[j+1] = data[j];
			data[j] = remember;
		}
	}
}

int main() {
	int a[] = {2, 5, 3, 4, 6};
	insertion_sort(a,5);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
}
/*void insertion_sort (int *data, int n)
{
	int i, j, remember;
	for (i = 1; i < n; i++)
	{
		remember = data[(j=i)];
		while (--j > 0 && remember < data[j])
		{
			data[j+1] = data[j];
			data[j] = remember;
		}
	}
}
int main() {
	int a[] = {2, 5, 3, 4, 6};
	insertion_sort(a,5);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
}
*/
