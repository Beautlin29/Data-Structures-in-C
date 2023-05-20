#include<stdio.h> 
#define MAX 1000 

int list[MAX], size = 0; 

void prepend(int score) 
{
    int index;

    for (index=size-1; index>=0; index--)
    {

        list[index+1] = list[index]; 
    }

    list[0]= score;
    size++;

}

int main()
{

    int I, counter, M;
    int totalScore=0, score, index;

    scanf("%d", &N);

    for (counter=1; counter<=N; counter++)
    {

        scanf("%d", &score);
        prepend(score);

    }

    scanf("%d", &M);

    for(index=0; index<M; index++)
    {
        totalScore += list[index];

    }
    printf("%d", totalScore);
}