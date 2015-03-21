#include<stdio.h>

int main()
{
    int hanoi(int n, char one, char two, char three);

    int n;

    printf("输入碟子的数量: ");
    scanf("%d",&n);

    hanoi(n, 'A', 'B', 'C');
}
//hanoi函数
int hanoi(int n, char one, char two, char three)
{
//move函数
    int move(char x, char y);

    if(n==1)
    {
        move(one,three);
    }
    else
    {
        hanoi(n-1, one, three, two);
        move(one, three);
        hanoi(n-1, two, one, three);
    }

    return 0;
}
//函数定义
int move(char x, char y)
{
    printf("%c-->%c\n",x,y);
    return 0;
}
