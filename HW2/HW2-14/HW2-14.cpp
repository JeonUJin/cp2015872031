#include <stdio.h>

int main(){

	int a;
	int num=0;

	printf("7�̻��� ������ �Է��Ͻÿ�. :");
	scanf("%d",&a);

	if(a>=7){
		for(int b=7;b<=a;b++){
			num+=b;
		}

		printf("7���� �Է��� �������� �� =  %d\n",num);
		}

	else printf("ERROR : 7�̻��� ���ڸ� �Է����� �ʾҽ��ϴ�.\n");
	

	return 0;
}