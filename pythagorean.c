#include <stdio.h>
#include <cs50.h>

int main(){
    float a,b,c,small_1,small_2,large;

    a = get_float("side 1 ");
    b = get_float("side 2 ");
    c = get_float("side 3 ");
    if (a<b){
        if (b<c){
            small_1 = a;
            small_2 = b;
            large = c;
        }else{
            small_1 = a;
            small_2 = c;
            large = b;
        }
    }
    else{
        if (a<c){
            small_1 = b;
            small_2 = a;
            large = c;
        }
        else{
            small_1 = b;
            small_2 = c;
            large = a;
        }

    }
    if (small_1*small_1 + small_2*small_2 == large*large){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
