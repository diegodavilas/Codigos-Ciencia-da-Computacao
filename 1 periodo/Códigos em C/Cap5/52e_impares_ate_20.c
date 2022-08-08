#include<stdio.h>
int main(){
   int i=0;
   do{
       if ((i % 2) != 0){
           printf("%d ", i);
       }
        i++;
   }
   while (i<=20);
   printf("\n");
}