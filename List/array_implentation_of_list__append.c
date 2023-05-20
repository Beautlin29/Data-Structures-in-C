#include <stdio.h> 
#define MAX 1000 

int list[MAX], size = 0; 

void append(int score)

list[size++]= score;

int main()
{

int N, counter; 
int totalScore, score, index; 

scanf("%d", &N); 

for (counter=1; counter< N; counter++)
{

scanf("%d", &score);

append(score);

}

for (index=0; index<size; index++)
{

totalScore + list[index];

}

printf("%d", totalScore);

}