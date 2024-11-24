#include<stdio.h>

int main(){
   int phy,chem,math,avg;

   printf("\t\t\t *** Student Eligibility Calculator *** \n\n\n");

 printf("Enter Physics Marks: ");
   scanf("%d", &phy);
   printf("Enter Chemistry Marks: ");
   scanf("%d", &chem);
   printf("Enter Maths Marks: ");
   scanf("%d", &math);

   avg = (phy + chem + math)/3;

   printf("PCM Average = %d\n", avg);
   avg>=50?printf("You are Eligible for Admission"):printf("You are NOT Eligible for Admission");



   return 0;
}
