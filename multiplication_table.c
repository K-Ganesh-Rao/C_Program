#include<stdio.h>

int main(void){
    int i;
    int mul;
    int num;
    
    printf("Entera number");
    scanf("%d", &num);

    for(i=0; i<=10; i++){
        mul = num *i;
        printf("%d * %d = %d\n",num , i , mul);

    }

return 0;

}
