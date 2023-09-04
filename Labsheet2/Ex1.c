#include <stdio.h>

int main(void)
{
    int examScore, homeworkScore;
    float score1, score2, overallscore;

    printf("Enter the Exam Score: ");
    scanf("%d",&examScore);

    printf("Enter the Homework Score: ");
    scanf("%d",&homeworkScore);

    score1 = examScore*(50/100.0);
    score2 = homeworkScore*(50/100.0);

    overallscore = score1+score2;

    printf("Overall course Score is %.2f",overallscore);

    return 0;
}
