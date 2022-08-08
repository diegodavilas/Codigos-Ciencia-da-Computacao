#include<stdio.h>
int main(){
   int i=1;
   while (i<200){
       if ((i % 4) == 0){
           printf("%d ", i);
       }
        i++;
   }
   printf("\n");
}