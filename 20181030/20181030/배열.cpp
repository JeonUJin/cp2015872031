#include<stdio.h>
//함수 printArray()
//입력 : 배열
//출력 : 없음
//부수효과 : 화면이 모든 요소를 출력
void printArray(int arr[], int length){
	int count = 0;
	while (count < length){
		printf("a[%d] = %d\n", count, arr[count]);
		count++;
	}
}

int main(){
	int len = 4;
	//int a[4];//배열선언
	//1. 배열의 이름 : a
	//2. 각 요소의 자료형 : int
	//3. 배열의 길이 : 4
	/*a[0] = 20;//literal도 쓸 수 있고 변수를 쓸 수도 있음. 지금 같은 경우는 []내부에 리터럴 값 들어가있음
	a[1] = 200;
	a[2] = 2000;
	a[3] = 20000;
	*/
	int a[4] = {2, 20, 200, 2000};//배열 초기화 방법
	printArray(a, len);//배열을 매개변수로 (배열이름 a, 배열길이 lengh)
	printf("%d\n", a[100]);

	int arr[] = {3, 30, 300};//길이 3의 배열 생성
	int count = 0;
	while (count < len){
	
	printf("a[%d] = %d\n", count, a[count]);//[]안에 count가 들어가있음 이 경우는 변수가 쓰인 경우
	count++;
	}

	//배열을 매개변수로 함수에 던지는 방법


	return 0;
}