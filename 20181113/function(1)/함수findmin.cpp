#include <stdio.h>
//함수 : findMinIndex()
//입력 : 배열(배열이름,배열길이)
//출력 : 최소값의 인덱스
//부수효과 : 없음
/*int findIndexMin(int* arr, int length){
   int indexMin=0;
   for(int count=1; count < length; count++){
      if (arr[indexMin] > arr[count])
         indexMin = count;
   }
   
   return indexMin;
}*/
//함수 : findmin()
//입력 : 배열(배열이름, 배열길이)
//출력 : 배열 최소값
/*int findMin(int* arr, int length) {
   int min=arr[0];
   for(int count=1; count < length; count++){
      if (min > arr[count])
         min = arr[count];
   }
   return min;
}*/
//함수 : swapElemnt
//입력 : 배열, 두개의 인덱스
//출력 : 없음
//부수효과 : 배열의 내용이 바뀜
/*void swapElement(int* arr,int j, int i){
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;

}*/
//함수 : selectionSort()
//입력 : 배열
//출력 : 없음
//부수효과 : 배열이 정렬됨ㅋ
/*
void selectionSort(int *arr, const int length)
{
    int count, j, indexMin, temp;

    for (int count = 0; count < length - 1; count++)
    {
        indexMin = count;
        for (j = count + 1; j < length; j++)
        {
            if (arr[j] < arr[indexMin])
            {
                indexMin = j;
            }
        }
        temp = arr[indexMin];
        arr[indexMin] = arr[count];
        arr[count] = temp;
    }
}

int main () {
   int a[] = {30, 35, 15, 27, 40};

	selectionSort(a,5);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);

   return 0;
}*/

void selectionSort(int *arr, const int length){
	int count, indexMin, temp;
		for(int count = 0; count < length - 1; count++)
		{
			indexMin = count;
					}
		
			temp = arr[indexMin];
			arr[indexMin] = arr[count];
			arr[count] = temp;
		}


int main(){

	int a[] = {12, 14, 17, 32, 45};

	selectionSort(a, 5);

	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);

	return 0;
}
