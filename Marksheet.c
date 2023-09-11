//Q6. Marksheet 
#include<stdio.h>
int main()
{

    char name[20];
    char seat[20];

    int eng;
    int math;
    int basic_elec;
    int comp_prog;
    int obtained_marks;

    float percent;

    char per='%';
    

    #define Total 400
    printf("Enter your name:");
    gets( name );

    printf("\nEnter your seat number:");
    gets(seat);

    printf("Enter obtained marks of English:");
    scanf("%d", &eng);

    printf("Enter obtained marks of Mathematics:");
    scanf("%d", &math);

    printf("Enter obtained marks of Basic electronics:");
    scanf("%d", &basic_elec);

    printf("Enter obtained marks of Computer programming:");
    scanf("%d", &comp_prog);

    printf(" \t\tMARKSHEET\n ");
    printf("\n Name: %s", name);
    printf("\t\tSeat no:%s", seat);

    printf("\n\n Subjects");
    printf("\t\t\tMarks");
    printf("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");

    printf("\nEnglish");
    printf("\t\t\t\t\t%d", eng);

    printf("\nMathematics");
    printf("\t\t\t\t%d", math);

    printf("\nBasic electronics");
    printf("\t\t\t%d", basic_elec);

    printf("\nComputer programming");
    printf("\t\t\t%d", comp_prog);
    printf("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");

    printf("\nObtained marks:%d", obtained_marks = eng + math + basic_elec + comp_prog );
    printf("\t\t(%.2f%c)", percent= ((float)obtained_marks/Total)*100 , per);




 return 0;
}
