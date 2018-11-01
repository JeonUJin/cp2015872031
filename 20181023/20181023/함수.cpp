#include <stdio.h>

//int gVar = 100; //전역변수(global variable)
//함수
//추상화 ==> 목적, 요약

//절차적 요약화, 선언적 요약화 --> 함수
//함수 sum()
//입력 : 두 정수
//출력 : 두 정수의 합
//부수효과 : 없음

/*int sum(int a, int b)////////<-함수선언
{ 
	static int c; //지역변수
	c = a + b; 
	a = 100; //a = 100일 때 얘가 왜 반응 안함?
	return c;
} ///////함수 본체
////////////////여기까지가 함수선언
//1. 함수이름 (Sum)
//2. 매개변수의 갯수 (2)
//3. 각 매개변수의 자료형 (int, int)
//4. 반환값의 자료형 (int)                   -------> 1,2,3,4 함수호출하기 위해 필요한 정보


//함수 : goodPrint()
//입력 : 없음
//출력 : 없음
//부수효과 : 화면에 good 출력
void goodPrint() {
	printf("good\n");
}
int main() {
	int x = 10, y = 20, z;
	z = sum(x,y); //////////<-함수 호출
	printf("z = %d, x = %d\n", z, x);
	goodPrint();

	//return 0;
}
//디버거 두개의 표시! 점으로 들어가는거 : step into 랑 점 밖으로 돌아가는거 : step over
*/

/*int sum(int a, int b){
	int c;
	c = a + b;
	return c;
}

void goodPrint(){
	printf("good\n");
}

int main(){
	int x = 10, y = 30, z;
	z = sum(x,y);
	printf("z = %d, x = %d\n", z, x);
	goodPrint();

}
*/

int sum(int a, int b){
	static int c;
	c = a + b;
	return c;
}

void goodPrint(){
	printf("good\n");
}

int main(){
	int x = 100, y = 250, z;
	z = sum(x,y);
	printf("x = %d, z = %d\n", x, z);
	goodPrint();
}





