//1. 두 정수 사이에 모든 정수(두 정수 포함)를 순서대로 화면에 출력하는 함수(숙제 3-1)

#include<stdio.h>
//함수 printNumber()
//입력 : 두 정수
//출력 : 없음
//부수효과 : 없음
void printNumber(int a, int b){
	int count = a;
	while (count <= b) 
		printf("%d\n", count++);
}


int main(){

	int a = 3, b = 50;
	//printNumber(a,b);
	printNumber(-20, 100);



	printf("end of program\n");

	return 0;
}