#include <string.h>
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

int main(){
srand((unsigned) time(NULL));
printf("%c\n",randchar());
}

char randchar()
{
short randNum = (rand() % (90-65+1)) + 65;
return (char) randNum; 
}
