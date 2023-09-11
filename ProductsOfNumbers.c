//Q7. DMAS of the two integers...
#include<stdio.h>
int main(){
    int input1,input2;
    printf("Enter first interger.\n");
    scanf("%d", &input1);
    printf("Enter Second interger.\n");
    scanf("%d", &input2);
    printf("The product of the %d and %d is %d\n",input1 , input2 , input1 * input2);
    printf("The sum of the %d and %d is %d\n",input1 , input2 , input1 + input2);
    printf("The subtraction of the %d and %d is %d\n",input1 , input2 , input1 - input2);
    printf("The division of the %d and %d is %.1f\n",input1 , input2 , (float) input1 / input2);
    return 0;
}
