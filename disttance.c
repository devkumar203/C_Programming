#include<stdio.h>
int main(){
    /*
    The distance between two cities(in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeter.
    */

int km, m;
float feet,inches, centimeter;
   printf("Enter the distance between two cities(in kilometer): ");
   scanf("%d", &km);
   m = km*1000;
   feet = m*3.28;
   inches = m*39.37;
   centimeter = m*1000;

   printf("The distance in m :%d\n", m);
   printf("The distance in m :%f\n", feet);
   printf("The distance in m :%f\n", inches);
   printf("The distance in m :%f\n", centimeter);

   return 0;
}