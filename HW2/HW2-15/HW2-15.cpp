#include <stdio.h>
#include <stdlib.h>

int main(){
   int a;
   int b;
   int num;
   num = rand()%100+1;
   for(b=0;b<10;b++){
      printf("1~100������ �����ϳ��� �Է��϶�. \n");
      scanf("%d",&a);   
      if (num < a){
         printf("�Է��Ͻ� ���ں��� �۽��ϴ�. \n\n\n");
      }
      else if (num ==a){
         printf("�����Դϴ�! \n\n\n");
         break;
      }
      else {
         printf("�Է��Ͻ� ���ں��� Ů�ϴ�. \n\n\n");
      }
   }
   if(b==10)
      printf("GAME OVER.\n");

   return 0;
}