#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};

void show()
{
    int i;
    system("color 02");//for text color
    printf("\t\t\t\tTic-Tac-Toe\n");
    printf("\n\n");
    printf("\t\t\t\t---|---|---\n");
    printf("\t\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
    printf("\t\t\t\t---|---|---\n");
    printf("\t\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t\t---|---|---\n");
    printf("\t\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
    printf("\t\t\t\t---|---|---\n");
}
void rules()
{
    printf("\033[0m");//reset color
    printf("\n\n\tPlayer 1 symbol:x");
    printf("\n\tPlayer 2 symbol:0");
    printf("\033[0;31m");//for red color
    printf("\n\nGAME RULES:\n1.If three consecutive cells contain 'x' then player 1 will win.\n2.If three consecutive cells contain '0' then player 2 will win.\n3.Other wise game will be draw.\n\n");
}
int c=0;
void play()
{
    char p,s;
    int i,m;
    label2:
    printf("\033[3;34m");
    printf("Enter position and symbol:");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    if(s!='x'&&s!='0'){
        printf("Wrong Input! Try again\n\n");
        goto label2;
    }

    for(i=0;i<9;i++){
        if(p==a[i]){
            a[i]=s;
            c++;
        }
    }
}
int check()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
        return 1;
    else if((a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x'))
        return 1;
    else if((a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
        return 1;
    else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[3]=='0'&&a[4]=='0'&&a[5]=='0')||(a[6]=='0'&&a[7]=='0'&&a[8]=='0'))
        return 2;
    else if((a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[1]=='0'&&a[4]=='0'&&a[7]=='0')||(a[2]=='0'&&a[5]=='0'&&a[8]=='0'))
        return 2;
    else if((a[0]=='0'&&a[4]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
        return 2;
}
int main()
{
    int win,i,x;
    char ch;
    labell:
    system("cls");
    show();
    rules();
    label:
    play();
    system("cls");
    show();
    win=check();
    if(c<9){
        printf("\033[0;33m");
        if(win==1)
            printf("\n\n\t\t\t\tPlayer 1 won");
        else if(win==2)
            printf("\n\n\t\t\t\tPlayer 2 won");
        else
            goto label;
    }
    if(c==9){
        if(win==1)
            printf("\n\n\t\t\t\tPlayer 1 won");
        else if(win==2)
            printf("\n\n\t\t\t\tPlayer 2 won");
        else
            printf("\n\n\t\t\t\tGame Draw");
    }
    printf("\033[1m");
    printf("\n\nPress y to start again or press n key to exit:");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y'){
        x='1';
        for(i=0;i<9;i++)
            a[i]=x++;
        goto labell;
    }
    else if(ch=='n'||ch=='N')
        exit(0);
    getch();
}
