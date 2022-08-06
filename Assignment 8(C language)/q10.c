/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int phy,chem,bio,math,comp,obt;
    float per;
    char grade;
    printf("Enter the marks of Physics,Chemistry,Biology,Mathematics and Computer(Total marks=500, 100/sub):\n");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
    obt=phy+chem+bio+math+comp;
    per=obt/5.0;
    printf("percentage=%g%%\n",per);
    if(per>=90)
        grade='A';
    else if(per>=80)
        grade='B';
    else if(per>=70)
        grade='C';
    else if(per>=60)
        grade='D';
    else if(per>=40)
        grade='E';
    else if(per<40)
        grade='F';
    printf("Grade %c",grade);
    getch();
}
