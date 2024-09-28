#include<stdio.h>
int main(){
    /*https://github.com/devkumar203/C_Programming
    Ramesh's basic salary is input through the keyboard. His dearness 
    allowance is 40% of basic salary, and house rent allowance is 20% of
    basic salry. Write a program to calculate his gross salary.
    */

   float bs, da, hra, gs;
   printf("Enter the Ramesh's Salary:");
   scanf("%f", &bs); //10,000
    da = bs*(40.0/100.0);
    hra = bs*(20.0/100.0);
    gs = bs + da+ hra;
    printf("Basic Salary of Ramesh is: %f\n", bs);
    printf("Dearness Allowance is :%f\n", da);
    printf("Rent Allowance is :%f\n", hra);
    printf("His gross salary is :%f\n",gs );
    return 0;

}