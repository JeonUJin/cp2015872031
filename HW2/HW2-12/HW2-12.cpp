#include <stdio.h>
int main(){
   int a;
   int b;
      printf("정수를 입력하시오. \n");
      scanf("%d",&a);
      b = a;
   while(a != 0){
      printf("정수를 입력하시오. \n");
      scanf("%d",&a);      
      if (b < a){
         b = a;
      }
   }
      printf("입력 수 중 가장 큰 수 = %d.\n",b);
   return 0;
}
