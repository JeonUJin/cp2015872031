#include <stdio.h>
/*
int main(){
	int a = 10, b = 20;
	//swap : 변수 a, b 값을 바꾼다.

	//a = 20; b = 10;
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("a = %d, b = %d\n", a, b);


	return 0;
}
*/

void swap(int*ptr1, int*ptr2){
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main () {
	int a  = 100, b = 20;

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}