#include <stdio.h>

//int gVar = 100; //��������(global variable)
//�Լ�
//�߻�ȭ ==> ����, ���

//������ ���ȭ, ������ ���ȭ --> �Լ�
//�Լ� sum()
//�Է� : �� ����
//��� : �� ������ ��
//�μ�ȿ�� : ����

/*int sum(int a, int b)////////<-�Լ�����
{ 
	static int c; //��������
	c = a + b; 
	a = 100; //a = 100�� �� �갡 �� ���� ����?
	return c;
} ///////�Լ� ��ü
////////////////��������� �Լ�����
//1. �Լ��̸� (Sum)
//2. �Ű������� ���� (2)
//3. �� �Ű������� �ڷ��� (int, int)
//4. ��ȯ���� �ڷ��� (int)                   -------> 1,2,3,4 �Լ�ȣ���ϱ� ���� �ʿ��� ����


//�Լ� : goodPrint()
//�Է� : ����
//��� : ����
//�μ�ȿ�� : ȭ�鿡 good ���
void goodPrint() {
	printf("good\n");
}
int main() {
	int x = 10, y = 20, z;
	z = sum(x,y); //////////<-�Լ� ȣ��
	printf("z = %d, x = %d\n", z, x);
	goodPrint();

	//return 0;
}
//����� �ΰ��� ǥ��! ������ ���°� : step into �� �� ������ ���ư��°� : step over
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





