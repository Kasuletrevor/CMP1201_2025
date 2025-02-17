#include<stdio.h>


double calculate_stress(double force,double area){

//This function calculates and  returns stress as a double
 
                        double stress=1.0;
                        stress=force/area;

return stress;
}



double calculate_strain(double original_length,double change_in_length){

//func returneth double strain

                          double strain=1.0;
                           strain=change_in_length/original_length;

return strain;
}



int main(){

                double force=1.0,  area=1.0,  original_length=1.0,  change_in_length=1.0;
                double stress=1.0;
                double strain=1.0;

                printf("\n\t!!  This program calculates stress and strain of a material  !!");
                printf("\n\n  ( Enter the force,area,original_length,change_in_length of the material )\n");

                printf("\n");
                printf("Force: ");
                scanf("%lf",&force);

                printf("\n");
                 printf("Area: ");
                 scanf("%lf",&area); 

                 printf("\n");
                 printf("original_length: ");          
                 scanf("%lf",&original_length);

                 printf("\n");
                  printf("change_in_length: ",&change_in_length);
                 scanf("%lf",&change_in_length);

                  stress=calculate_stress(force,area);
                  strain=calculate_strain(original_length,change_in_length);


                  printf("\nstrain: %.2lf",strain);   //floating point arithmetic can be imprecise due to the way numbers are represented in 
                  printf("\nstress: %.2lf",stress);    //memory. This can lead to small rounding errors, such as 0.025 being truncated to .03 !!



return 0;
}