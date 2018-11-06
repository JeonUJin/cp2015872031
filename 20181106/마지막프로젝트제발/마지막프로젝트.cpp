#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
void printArray(int arr[], int len){
	for(int index = 0; index<len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

int main(){
	int a[3] = {10, 20, 30};//배열의 선언 : 배열이름 : a, 배열 길이 : 3
	int *ptr;
	ptr = a; //==> ptr = &a[0];


	printArray(a,3);


	return 0;
}