#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int p = get_int("Enter type of pattern (1 or 2) ");
    int n = get_int("Number of rows");
    if (p == 1) {
        while (n != 0) {
            for (int i = 0; i < n; i++) {
                printf("#");
            }
            printf("\n");
            n--;
        }
 }

  else if(p==2){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
       printf(" ");
     }
    for(int k=1; k<=i;k++){
     printf("#");
    }
   printf("\n");
   }
  }
}
