
/*void printArray(char *arr, int len){
	for(int index = 0; index < len; index++){
		printf("array[%d] = %c\n", index, arr[index]);
	}
}


int main(){
	char c;
	c = 'A'; //�빮�� �ڵ��� ASCII code (A = 65)
	printf("c = %d\n", c);
	printf("c = %c\n", c);
	
	char a[] = {'h', 'e', 'l', 'l', 'o'};
	
	printArray(a, 5);
	
	//���ڿ�(STRING)
	char b[] = "hello"; //==> char b[] = ('h', 'e', 'l', 'l', 'o');
	printf("%s\n", b);

	printf("the length of the string is %d\n", strlen(b));

	char str1[50] = "hello";
	//char str1[50] = "hello";
	char* str2 = "world";
	strcat(str1, str2);
	printf("%s\n", strcat(str1, str2));
	
	strcpy(str1, str2);
	printf("%s\n", str1);

	return 0;
}*/
#include <stdio.h>
#include <string.h>

void printArray(char *arr, int len){
	for(int index = 0; index < len; index++){
		printf("array[%d] = %c\n", index, arr[index]);
	}
}

int main(){
	char c;
	c = 'A';
	printf("%c\n", c);
	printf("%d\n", c);

	char a[] = {'h', 'e', 'l', 'l', 'o'};
	printArray(a,5);

	char b[] = "hello";
	printf("%s\n", b);
	printf("the length of b is %d\n", strlen(b));

	char str1[50] = "hello";
	char *str2 = "world";
	strcat(str1, str2);
	printf("%s\n", strcat(str1, str2));

	strcpy(str1, str2);
	printf("%s\n", strcpy(str1, str2));

	return 0;
}