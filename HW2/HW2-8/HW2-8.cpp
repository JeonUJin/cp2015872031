#include <stdio.h>
int main () {
   int a, b=1,c;
   printf("1 ���� 9 ������ ���ڸ� �Է��Ͻÿ� : \n");
      scanf("%d", &a);
   do{
      c = a*b;
      b++;
      printf("������ ��� %d\n", c);

   }while(b <=9);
   
   
return 0;
}