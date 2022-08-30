#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char s[9]={'1','2','3','4','5','6','7','8','9'};
void display()
{
    system("color 02");//green
    printf("\n\n\t\t\t\t\t\tTic-Tac-Toe\n\n\n");
    printf("\t\t\t\t\t\t---|---|---\n");
    printf("\t\t\t\t\t\t %c | %c | %c \n",s[0],s[1],s[2]);
    printf("\t\t\t\t\t\t---|---|---\n");
    printf("\t\t\t\t\t\t %c | %c | %c \n",s[3],s[4],s[5]);
    printf("\t\t\t\t\t\t---|---|---\n");
    printf("\t\t\t\t\t\t %c | %c | %c \n",s[6],s[7],s[8]);
    printf("\t\t\t\t\t\t---|---|---\n");

}
void rules()
{
    printf("\033[0;33m");//yellow
    printf("\n\n\t\t\tPlayer-1 symbol:X\n");
    printf("\t\t\tPlayer-2 symbol:O\n\n");
    printf("\033[0;31m");//red
    printf("GAME RULES:\n");
    printf("\t1.If three consecutive cell contain 'X' then player-1 will win\n");
    printf("\t2.If three consecutive cell contain 'O' then player-2 will win\n");
    printf("\t3.Otherwise game will be draw.");


}
int c=0;
int p=1;
void getInput()
{
    char x,i;
    if(p==1){
        printf("\033[3;34m");//blue
        printf("\n\nPlayer-1 Enter position:");
        fflush(stdin);
        scanf("%c",&x);
        for(i=0;i<9;i++){
            if(s[i]==x){
                s[i]='X';
                p=0;
            }
        }
    }
    else{
        printf("\033[3;36m");//sky
        printf("\n\nPlayer-2 Enter position:");
        fflush(stdin);
        scanf("%c",&x);
        for(i=0;i<9;i++){
            if(s[i]==x){
                s[i]='O';
                p=1;
            }
        }
    }
    c++;
}
int end()
{
    if(s[0]=='X'&&s[1]=='X'&&s[2]=='X'||s[3]=='X'&&s[4]=='X'&&s[5]=='X'||s[6]=='X'&&s[7]=='X'&&s[8]=='X')
        return 1;
    else if(s[0]=='X'&&s[3]=='X'&&s[6]=='X'||s[1]=='X'&&s[4]=='X'&&s[7]=='X'||s[2]=='X'&&s[5]=='X'&&s[8]=='X')
        return 1;
    else if(s[0]=='X'&&s[4]=='X'&&s[8]=='X'||s[2]=='X'&&s[4]=='X'&&s[6]=='X')
        return 1;
    else if(s[0]=='O'&&s[1]=='O'&&s[2]=='O'||s[3]=='O'&&s[4]=='O'&&s[5]=='O'||s[6]=='O'&&s[7]=='O'&&s[8]=='O')
        return 2;
    else if(s[0]=='O'&&s[3]=='O'&&s[6]=='O'||s[1]=='O'&&s[4]=='O'&&s[7]=='O'||s[2]=='O'&&s[5]=='O'&&s[8]=='O')
        return 2;
    else if(s[0]=='O'&&s[4]=='O'&&s[8]=='O'||s[2]=='O'&&s[4]=='O'&&s[6]=='O')
        return 2;
}
int main()
{
    int win;
    char ch;
    label2://label2
    system("cls");
    display();
    rules();
    label://label
    getInput();
    system("cls");
    display();
    win=end();
    printf("\n\n");
    printf("\033[1;31m");
    if(c<9){
        if(win==1)
            printf("\t\t\t\t\t\tPlayer-1 won");
        else if(win==2)
            printf("\t\t\t\t\t\tPlayer-2 won");
        else
            goto label;
    }
    else{
        if(win==1)
            printf("\t\t\t\t\t\tPlayer-1 won");
        else if(win==2)
            printf("\t\t\t\t\t\tPlayer-2 won");
        else
            printf("\t\t\t\t\t\tGame Draw");
    }
    printf("\033[0;33m");
    printf("\n\nEnter Y to start again and press N to exit:");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        goto label2;
    else if(ch=='n'||ch=='N')
        exit(0);

}
