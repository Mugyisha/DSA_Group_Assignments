#include <stdio.h>
#include <stdlib.h>

float physics();
float chemistry();
float maths();
int main()
{
   int p = physics();
   int c = chemistry();
   int m = maths();
   float combination = (p + c + m)/3;
   printf("Your average score for combination PCM is %.2f:\n",combination);
   if (combination <49){
    printf("RETAKE THE COURESE\n")
   };
   else if combination >=49 && combination <= 70){
    printf("PASS\n")
   };
   else{
    printf("A HIGH PASS, CONGRATULATIONS YOU HAVE BEEN PROMOTED\n")
   }


    return 0;
}
//physics
float physics(){
int asgnmt,coursework,mid_term,final_exams,total;
float average;
printf("Enter your physics assignments score:\n");
scanf("%d",&asgnmt);
printf("Enter your physics course works score:\n");
scanf("%d",&coursework);
printf("Enter your physics mid term score:\n");
scanf("%d",&mid_term);
printf("Enter your physics final exams score:\n");
scanf("%d",&final_exams);

total = (asgnmt + coursework + mid_term + final_exams );
average = (total/4);

printf("You scored %.2f in Physics:\n",average);
return average;
}
//chemistry
float chemistry(){
int asgnmt,coursework,mid_term,final_exams,total;
float average;
printf("Enter your Chemistry assignments score:\n");
scanf("%d",&asgnmt);
printf("Enter your Chemistry course works score:\n");
scanf("%d",&coursework);
printf("Enter your Chemistry mid term score:\n");
scanf("%d",&mid_term);
printf("Enter your Chemistry final exams score:\n");
scanf("%d",&final_exams);

total = (asgnmt + coursework + mid_term + final_exams );
average = (total/4);

printf("You scored %.2f in Chemistry:\n",average);
return average;
}

float maths(){
int asgnmt,coursework,mid_term,final_exams,total;
float average;
printf("Enter your Maths assignments score:\n");
scanf("%d",&asgnmt);
printf("Enter your Maths course works score:\n");
scanf("%d",&coursework);
printf("Enter your Maths mid term score:\n");
scanf("%d",&mid_term);
printf("Enter your Maths final exams score:\n");
scanf("%d",&final_exams);

total = (asgnmt + coursework + mid_term + final_exams );
average = (total/4);

printf("You scored %.2f in Maths:\n",average);
return average;
}
