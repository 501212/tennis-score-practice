#include<stdio.h>
int main(void)
{int p1 = 0,p2 = 0;
int input;
int score_table[] = {0,15,30,40};
printf("Tennis score counter\n");
printf("Press 1: Player 1 scoer,Press 2: Player 2 score\n");
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
    printf("Please press 1 or 2\n");
    continue;
}
printf("Player 1: %d|Player 2: %d\n",score_table[p1],score_table[p2]);
}
return 0;
}