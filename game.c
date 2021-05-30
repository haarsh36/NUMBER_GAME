#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

int number,guess,chances=1;{

 srand(time(0));
 number=rand()%100+1;


 do{
        printf("Enter\n");
        scanf("%d",&guess);

    if(guess<number){
        printf("enter a higher number\n");
    }
        else if (guess>number){
            printf("enter a lower number\n");
        }
        else{
            printf("you guessed %d in %d attempt",number,chances);
        }
        chances++;
 }
 while(guess!=number);
 return 0;
}
}
