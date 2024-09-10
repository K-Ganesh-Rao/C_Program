#include<stdio.h>

int main(){
    int l;
    int b;


    printf("enter length l = ");
    scanf("%d/n",&l);
    printf("enter breadth b = ");
    scanf("%d/n",&b);

    for(int i=0; i< b; i++){
         printf("\n");
        for(int j = 0; j< l ; j++){
            printf("*");
        }
    }
    return 0;

}