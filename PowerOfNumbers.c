//Q4. Square and cube of the number...
#include<stdio.h>
int main()
{
    int Input;
    int Square;
    int Cube;

    printf("Enter any one integer number to know its square and cube:");
    scanf("%d", &Input);

    Square=Input*Input;
    printf("Square of the %d is : %d",Input , Square);

    Cube=Square*Input;
    printf("\nCube of the %d is   : %d", Input , Cube);

    return 0;
}
