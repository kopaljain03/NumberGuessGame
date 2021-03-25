#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int number,t;
  srand(time(0));//generates a time dependent number
  number=rand()%100 +1;
  int a;
  int attempts=1;
  do{
      printf("guess the random number between 1 to 100:\n");
      scanf("%d",&a);
      if (a>number){
      printf("oops ,enter a smaller number\n");
      }
      else if(a<number){
      printf("oops ,enter a larger number\n");
      }
      else {
       printf("congratulations!!! you guessed the correct number in %d attempts\n",attempts);
      }
      attempts++;
  }while(a!=number);
  scanf("%d",&t);
  
  return 0;
  
}
