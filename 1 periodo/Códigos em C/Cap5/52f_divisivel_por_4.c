#include<stdio.h>
int main(){
   int i=1;
   do{
        if ((i % 4) == 0){
           printf("%d ", i);
        }
        i++;
   }
   while (i<200);
   printf("\n");
}