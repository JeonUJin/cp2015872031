#include <stdio.h>

void insertElement(int *arr, int ele){
	while(ele > 0) {
		if (arr[ele-1] > arr[ele])
			swapElement(arr, ele-1, ele);
		else
			break;
		ele--;
	}
}


void insertionSort(int *arr, int length){
	for(int i = 1; i < length; i++)
		insertElement(arr, i);
}


	