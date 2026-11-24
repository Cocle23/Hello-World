#include <stdio.h>
// zum Kompilieren folgen Sie den Befehl: gcc add.c -o add
int main(void){
    int x,y;
    int sum;
    int rem;// remainder
    float div;
    printf("Geben Sie den Wert von x ein: ");
    (scanf("%d", &x));
    printf("Geben Sie den Wert von y ein: ");
    (scanf("%d", &y)); {};
    sum = x + y;
    div =(float)x / (float)y;
    printf("Der Wert von x+y:%d\n", sum);
//    printf("Der Wert von x/y:%.2f\n", div);
    printf("Der Wert von x/y (float):%.2f\n", div);
    div = x / y;
    rem = x % y;   
    printf("Der Wert von x/y:%.2f\n", div);
    printf("Der Wert von x%%y:%d\n", rem);
    return 0;
}