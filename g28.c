/*A computer science teacher assigned the students a programming task that calculates and displays grades based on test marks. 



The teacher wants the program to take a student's test mark as input and determine their grade using the following criteria:

If the mark is between 90 and 100 (both inclusive), assign grade A.
If the mark is between 80 and 89 (both inclusive), assign grade B.
If the mark is between 70 and 79 (both inclusive), assign grade C.
If the mark is between 60 and 69 (both inclusive), assign grade D.
If the mark is between 45 and 59 (both inclusive), assign grade E.
For marks below 45 assign grade F.
If the mark is greater than 100 or a negative number, display "Invalid input". 


Help the students to accomplish the given task.

Input format :
The input consists of a single integer, representing the student's mark.

Output format :
The output displays "Grade: " followed by the grade for the given mark based on the given criteria.

If the mark is greater than 100 or a negative number, the output displays "Invalid input".*/

#include <stdio.h>

int main() {
   int mark;
   scanf("%d", &mark);
   if (mark >= 90 & mark <= 100) {
      printf("Grade: A");
   } 
   else if (mark >= 80 && mark <= 89) {
      printf("Grade: B");
   } 
   else if (mark >= 70 && mark <= 79) {
      printf("Grade: C");
   } 
   else if (mark >= 60 && mark <= 69) {
      printf("Grade: D");
   } 
   else if (mark >= 45 && mark <= 59) {
      printf("Grade: E");
   } 
   else if (mark >= 0 && mark < 45){
      printf("Grade: F");
   }
   else{
        printf("Invalid input");
    }
   return 0;
}
