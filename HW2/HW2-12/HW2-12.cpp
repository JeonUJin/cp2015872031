#include <stdio.h>
int main(){
   int a;
   int b;
      printf("������ �Է��Ͻÿ�. \n");
      scanf("%d",&a);
      b = a;
   while(a != 0){
      printf("������ �Է��Ͻÿ�. \n");
      scanf("%d",&a);      
      if (b < a){
         b = a;
      }
   }
      printf("�Է� �� �� ���� ū �� = %d.\n",b);
   return 0;
}