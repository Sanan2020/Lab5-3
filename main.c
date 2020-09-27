#include <stdio.h>

float numA,numB,answer;
float modA;
int modB;
char mark;
int choice;
int main(){
  printf("M e n u\n1. Add(+)\n2. Subtract(-)\n3. Multiply(*)\n4. Divide(/)\n5. Modulo(%%)\n");

  printf("Enter Number 1: ");
  scanf("%f",&numA);
  printf("Enter Number 2: ");
  scanf("%f",&numB);
  printf("Select Choice : ");
  scanf("%d",&choice);

  switch(choice){
    case 1: answer = numA+numB; mark = '+'; break;
    case 2: answer = numA-numB; mark = '-'; break;
    case 3: answer = numA*numB; mark = '*'; break;
    case 4: mark = '/';
            if(numB==0){ break;}
            else{ answer = numA/numB; break;}
    case 5: answer = (int)numA%(int)numB; mark = '%'; break;
  }

  printf("------------------\n");
  if(mark=='/' && numB == 0){
     printf("Divide by Zero!!!\n");
  }else{
  printf("Answer is %.3f %c %.3f = %.3f\n",numA,mark,numB,answer);
  }
}