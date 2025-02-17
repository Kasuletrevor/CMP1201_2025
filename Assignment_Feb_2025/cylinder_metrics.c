#include<stdio.h>
#define pi 3.142


double calculate_volume(double radius,double height){
          
//This func computes volume of a cylinder !!
//returns it with double precision !!
   
                          double volume=1.0;
                          volume=pi*radius*radius*height;          


return volume;
}



double calculate_surface_area(double radius,double height){

//computes surface area of a cylinder !!

                                double surface_area=1.0;
                                 surface_area=2*pi*radius*(radius+height);

return surface_area;
}



int main(){

               double radius=1.0, height=1.0, volume=1.0, SA=1.0;

               printf("\n\t!!  This program computes the volume and surface area of a cylinder  !!");
               printf("\n\n\t****   Enter the height and radius of the cylinder  !!  ****");

               printf("\nRadius: ");
               scanf("%lf",&radius);

               printf("\nHeight: ");
               scanf("%lf",&height);

               volume=calculate_volume(radius,height);
               SA=calculate_surface_area(radius,height);

               printf("\nVolume: %.2lf",volume);
                printf("\nSurface Area: %.2lf",SA);


return 0;
}