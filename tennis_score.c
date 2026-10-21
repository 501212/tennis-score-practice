#include<stdio.h>
int main(void)
{int p1 = 0,p2 = 0;
int input;
int score_table[] = {0,15,30,40};
printf("网球计分练习\n");
printf("输入1: 选手1得分，输入2: 选手2得分\n");
while(1)
{
    scanf("%d",&input);
    if(input == 1)
{
    if(p1 < 3)
       p1++;
}
else if(input == 2)
{
    if(p2 < 3)
       p2++;
}
else
{
    printf("请输入1或者2\n");
    continue;
}
printf("选手1: %d|选手2: %d\n",score_table[p1],score_table[p2]);
}
return 0;
}