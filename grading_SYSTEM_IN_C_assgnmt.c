/*
    NAME: Enock Gita Sekabunga
    REG: 20/U/0084
    PROGRAMME: B.sc.Computer Engineering
          
     ASSIGNMT: Grading system in C     

*/
#include<stdio.h>

void prntgD(char grade){

      //This function takes the letter grade and displays the corresponding feedback message.

         printf("Grade %c",grade);

         switch(grade){

             case 'A':
             printf("\nExcellent! Keep up the outstanding work!");
             break;

             case 'B':
             printf("\nGreat job! You performed well.");
             break;

             case 'C':
             printf("\nGood effort! Aim higher next time.");
             break;

             case 'D':
             printf("\nYou passed, but there's room for improvement.");
             break;

             default:
             printf("\nUnfortunately, you failed. Study harder next time.");
             
            }


}



int test_in(int mark){

      //This function takes the input marks and tests whether they  are in the range [0,100].
         //returns 1 for a valid input.

        int temp=0;

        if(!(mark>=0&&mark<=100)){
   
           printf("\n\t@Invalid input ! ");         

         }
         else{temp=1;}

return temp;
}



int main(){

           int mark;
           int input;
           char grade='F';

          printf("\n\t<--------This program grades the marks of students-------->");
          printf("\nEnter the mark: ");
          scanf("%d",&mark);

          input=test_in(mark);

         if(mark>39&&input==1){    //students that passed.

               if(mark<85){     //students that passed without an A.
   
                     if(mark>69){     //students that passed without an A but above 69.

                        grade='B';
                        prntgD(grade);

                      }
                      else{            //passed below 69.
                           if(mark>54){

                            grade='C';
                            prntgD(grade);

                           }
                            else{     //passed below 55.

                              grade='D';
                              prntgD(grade);
                            }

                      }
     
              }
               else{     //passed with maximum grades.

              grade='A';
               prntgD(grade);

             }

        }
         else{      //FAILED.
                  if(input==1){ 

                  grade='F';
                  prntgD(grade);
              
                   }
          
            }

           printf("\n");


return 0;
}