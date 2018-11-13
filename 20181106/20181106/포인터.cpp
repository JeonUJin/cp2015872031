#include <stdio.h>

/*int main(){
	int a = 10;//변수 선언 + 변수 초기화
	int *ptr;//포인터 변수 선언
	ptr = &a;// &a --> "address of" a, 변수 a의 주소(변수a를 할당한 메모리의 첫번째 주소)
	*ptr = 20;//*ptr--> "data of" ptr, 포인터 변수 ptr이 가리키는 곳의 데이터
printf("a = %d\n", a);

return 0;
}
*/
//&a; <<<<< Amperand ==> "Address of" a

int main(){
	int a = 10;
	int *ptr
	ptr = &a;
	*ptr = 20;
printf("a = %d\n", a);

return 0;
}