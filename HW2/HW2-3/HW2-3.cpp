#include<stdio.h>
int main(){	
	int count = 1, sum=0;
	while(count<=100) {
		count++;
		if(count%3 == 0)
			sum = sum+count;
	}
		printf("3�� ����� �� �� = %d\n", sum);
	

	return 0;
}