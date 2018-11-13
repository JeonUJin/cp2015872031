#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
void printArray(int* arr, int len){
	for(int index = 0; index<len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

int main(){
	int a[3] = {10, 20, 30};//배열의 선언 : 배열이름 : a, 배열 길이 : 3
	int *ptr;//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	ptr = a; //==> ptr = &a[0];

	//a = ptr;//Error....why? --> 배열의 이름(a)는 값만 가지고 있다. 즉 rvalue이다.

	//10 = a[2]; //--> Error 위와 같은 이유
	printArray(a, 3);
	return 0;
}