#include <stdio.h>

/*int main(){
	int a = 10;//���� ���� + ���� �ʱ�ȭ
	int *ptr;//������ ���� ����
	ptr = &a;// &a --> "address of" a, ���� a�� �ּ�(����a�� �Ҵ��� �޸��� ù��° �ּ�)
	*ptr = 20;//*ptr--> "data of" ptr, ������ ���� ptr�� ����Ű�� ���� ������
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