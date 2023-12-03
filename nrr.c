//Author: Plabon Rahman
//Github: https://github.com/rahmanplabon
//Linkedin: https://www.linkedin.com/in/plabon-rahman-me
//Last Modified: 03/11/2023; 21:23
//Code Purpose: Calculate Net-Run-Rate in Cricket
#include<stdio.h>
int main()
{
    float n, i, overs, run1, over1, run2, over2;
    float nrr1, nrr2, nrr, nrrf;
     char team1[50], team2[50];
     printf("Enter Your Team Name: ");
     scanf("%s", team1);
     printf("Enter Your Opponent Team Name:");
     scanf("%s", team2);
     printf("Enter Number of Overs in Match:");
     scanf("%f", &overs);
     
     printf("Runs Scored by %s:", team1);
     scanf("%f", &run1);
     printf("Overs Faced by %s(If all Out Then %0.0f):", team1, overs);
     scanf("%f", &over1);
     printf("Runs Conceded by %s:", team1);
     scanf("%f", &run2);
     printf("Overs Bowled by %s(If All Out Then %0.0f):", team1, overs);
     
     scanf("%f", &over2);
     printf("\n");
     nrr1=run1/over1;
     nrr2=run2/over2;
     nrr=nrr1-nrr2;
     nrrf=-1*nrr;
     printf("%s Net Run Rate Will Be: \"%0.3f\"\n",team1, nrr);
     printf("%s Net Run Rate Will Be: \"%0.3f\"\n",team2, nrrf);
     printf("\n");
     printf("Code Developed by \"Plabon Rahman\"");
    return 0;
}
