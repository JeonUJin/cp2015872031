#include <stdio.h>

int main(){

	int a;
	int num=0;

	printf("7이상의 정수를 입력하시오. :");
	scanf("%d",&a);

	if(a>=7){
		for(int b=7;b<=a;b++){
			num+=b;
		}

		printf("7부터 입력한 수까지의 합 =  %d\n",num);
		}

	else printf("ERROR : 7이상의 숫자를 입력하지 않았습니다.\n");
	

	return 0;
}