#include<stdio.h>
int main(){
   int i=1;
   for(i=0; i<200; i++){
       if ((i % 4) == 0){
           printf("%d ", i);
       }
   }
   printf("\n");
}