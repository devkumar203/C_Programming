#include<stdio.h>
/*
    If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/
int main(){
int m1, m2, m3, m4, m5, aggr;
float perMarks;
printf("Enter the marks:\n");
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
aggr = m1+m2+m3+m4+m5;
perMarks = (aggr*100)/500;
printf("Agregate Marks:%d\n",aggr);
printf("Percentage Marks:%f\n",perMarks);

return 0;
}
