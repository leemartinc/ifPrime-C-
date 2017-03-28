#include <stdio.h>

int main(){
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  int i=2;
  int t=1;
  int y;

  while (i < num) {
    y=num%i;
    if (y==0) {
      t=0;
    }
    i++;
  }
//printf("T is %d\n", t );
  //printf("The number you entered is %d\n", num);

  if(t==0){
    printf("The number %d is not a Prime Number.\n", num);
  }
  else{
    printf("The number %d is a Prime Number.\n", num);
  }
}
