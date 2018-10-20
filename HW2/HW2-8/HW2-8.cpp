#include <stdio.h>
int main () {
   int a, b=1,c;
   printf("1 부터 9 사이의 숫자를 입력하시요 : \n");
      scanf("%d", &a);
   do{
      c = a*b;
      b++;
      printf("구구단 결과 %d\n", c);

   }while(b <=9);
   
   
return 0;
}