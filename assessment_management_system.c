#include <stdio.h>
#include <stdlib.h>

int physics();
int chemistry();
int maths();
int main()
{
   printf("WELCOME TO CYBERGEEKS STUDENTS ASSESSMENT MANAGEMEN SYSTEM:\n\n");
   int p = physics();
   int c = chemistry();
   int m = maths();
   int total = (p + c + m);
   float avg = total/3;
   printf("Your final score for combination PCM is: %.2f",avg);


    return 0;
}
//physics
int physics(){
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
int chemistry(){
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

int maths(){
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
