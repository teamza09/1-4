#include <stdio.h>
int main(void) {
float score; 
  printf("Input score: ") ; 
  scanf("%f",&score);  
switch(score>=80&&score<=100)
{
 case 1 : printf("GRADE : A"); 
 break;
}
switch(score>=75&&score<80)
{
  case 1 : printf("GRADE : B+"); 
  break;
}
switch(score>=70&&score<75)
{
  case 1 : printf("GRADE : B");
  break;
}
switch(score>=65&&score<70)
{
  case 1 : printf("GRADE : C+"); 
  break;
}
   switch(score>=60&&score<65)
{
  case 1 : printf("GRADE : C"); 
  break;
}
switch(score>=55&&score<60)
{
  case 1 : printf("GRADE : D+");
  break;
}
switch(score>=50&&score<55)
{
  case 1 : printf("GRADE : D"); 
  break;
   }
switch(score>=0&score<50)
{
 case 1 : printf("GRADE : F"); 
    break;
   }
}
