//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Linkedin: https://www.linkedin.com/in/plabon-rahman-me
//Last Modified: 17/12/2023; 22:10
//Code Purpose: Calculate NStrike-Rate
#include<stdio.h>
int main()
{
    char name[30];
    int run, ball;
    float strike_rate;
    printf("Enter Player Name:");
    gets(name);
    printf("Runs Scored by %s:", name);
    scanf("%d", &run);
    printf("Balls Faced by %s:", name);
    scanf("%d", &ball);
    strike_rate=(run/ball)*100;
    printf("Strike Rate: %0.fSR", strike_rate);
    return 0;
}
