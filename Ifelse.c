// Question:-FCP003
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main(){
// int a,b,temp;
// printf("input value of a :");
// scanf("%d",&a);
// printf("input value of b :");
// scanf("%d",&b);
// temp = a;
// a = b;
// b = temp;
// printf("swapped value of a=%d",a);
// printf("swapped value of b=%d",b);
// return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP004
// Write a program to take two numbers from the user and perform Six basic operations 
// (addition, subtraction, multiplication, division, integer division and modulus) on
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
// int a,b,sum,sub,mul,dev;
// printf("Enter the value of a :");
// scanf("%d",&a);
// printf("Enter the value of b :");
// scanf("%d",&b);
// sum=(a+b);
// sub=(a-b);
// mul=(a*b);
// dev=(a/b);
// printf("Sum of numbers %d\n",sum);
// printf("Subtraction of numbers %d\n",sub);
// printf("Multiplication of numbers %d\n",mul);
// printf("Devision of numbers %d\n",dev);
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP005
// Write a program to take two numbers A and B from the user and calculate the quotient and 
// remainder when number A is divided by number B.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main(){
// int A,B,R,Q;
// printf("Please Enter value of A :");
// scanf("%d",&A);
// printf("Please Enter value of B :");
// scanf("%d",&B);
// Q=A/B;
// R=A% B;
// printf("Your quotient is %d\n:",Q);
// printf("You remander is %d\n:",R);
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP06
// Write a program to take a positive number from the user and then display the 
// last digit of that number.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
// int num,ld;
// printf("Enter a number :");
// scanf("%d",&num);
// ld=num%10;
// printf("Last digit= %d\n",ld);
// return 0;

// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP007-Write a program to convert a temperature from Celsius to Fahrenheit using the formula C/5 = (F-32)/9
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
// int c,f;
// printf("Enter temprature in celcius :");
// scanf("%d",&c);
// f=((c*9)/5)+32;
// printf("Temprature in Fahrenheit :%d\n",f);
// return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  FCP08- Write a program to take two inputs from the user and swap them without using a temporary or third variable.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main (){
// int a,b,temp=0;
// printf("Enter value of A :");
// scanf("%d",&a);
// printf("Enter value of B :");
// scanf("%d",&b);
// temp=a;
// a=b;
// b=temp;
// printf("Swapped value A :%d\n",a);
// printf("Swapped value B :%d\n",b);
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP009
// Write a program to take two numbers, A and B from the user. Your task is to find the largest number that is less 
// than A and can be divided evenly by B. Can you figure
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("Enter 1st number :");
// scanf("%d",&a);
// printf("Enter 2nd number :");
// scanf("%d",&b);
// c=a-(a%b);
// printf("Largest devisible number :%d\n",c);
// return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP010-Write a program to take two numbers from the user and determine the greater of those two given numbers.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
// int a,b;
// printf("Enter 1st number :");
// scanf("%d",&a);
// printf("Enter 2nd number :");
// scanf("%d",&b);
// if (a>b){
//     printf("%d is greater\n",a);}
// else{
//     printf("%d is greater\n",b);
// }
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP011-Write a program to take a number from the user and print that number as Odd or Even.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter Number :");
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("%d is an Even Number\n",a);}
//     else {
//         printf("%d is an odd Number\n",a);}
//         return 0;
//         }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP012-Write a program to take a number from the user and output whether that number is negative, positive or zero.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a Number :");
//     scanf("%d",&a);
//     if (a>0){
//         printf("%d is positive Number\n",a);}
//     else if (a==0){
//         printf("%d is zero\n",a);}
//     else {
//         printf("%d is a negative number\n",a);
//     }
//     return 0;
//     }
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// // FCP013-Write a program to take an integer as input and print 
// the smallest positive integer that is a multiple of both 2 and n.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number :");
//     scanf("%d",&a);
//     if (a%2==0){
//         printf("%d",a);
//     }
//     else {
//     printf("%d",a*2);
// }
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP014-Write a program to take three numbers from the user and print the greater number of the three numbers.
//  (Assume all three numbers are distinct)
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter 1st number :");
//     scanf("%d",&a);
//     printf("Enter 2nd number :");
//     scanf("%d",&b);
//     printf("Enter 3rd number :");
//     scanf("%d",&c);
// if (a>b){
//     if (a>c)
//     printf("%d is greater",a);
//     else
//     printf("%d is greater",c);}
// else if (b>c){
//     printf("%d is greater",b);}
// else{
//     printf("%d is greater",c);}
// return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP015-Write a program to take four numbers from the user and print
//  the greater number of the four numbers. (assume all the numbers are distinct).
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     printf("Enter 1st number :");
//     scanf("%d",&a);
//     printf("Enter 2nd number :");
//     scanf("%d",&b);
//     printf("Enter 3rd number :");
//     scanf("%d",&c);
//     printf("Enter 4th number :");
//     scanf("%d",&d);
// if ((a>b)&&(a>c)&&(a>d)){
//     printf("%d is greater number ",a);}
// else if ((b>c)&&(b>d)){
//     printf("%d is greater number",b);
// }
// else if(c>d){
//     printf("%d is greater number",c);
// }
// else{
//     printf("%d is greater number",d);
// }
// return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP016-Write a program to take a year from the user and output whether a given year is a leap year or not.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main(){
//     int year;
//     printf("Please Enter year :");
//     scanf("%d",&year);
//     if (year%400==0){
//         printf("%d is a Leap year\n",year);
//     }
//     else if ((year%4==0)&&(year%100!=0)){
//         printf("%d is a Leap year\n",year);
//     }
//     else {
//         printf("%d is not a leap year\n",year);
//     }
// return 0;
// }
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP017-Write a program to take 3 numbers from the user and output the second max of 3 numbers.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main(){
//     int max,smax,a,b,c;
//     printf("Enter 1st number :");
//     scanf("%d",&a);
//     printf("Enter 2nd number :");
//     scanf("%d",&b);
//     printf("Enter 3rd number :");
//     scanf("%d",&c);
//     if (a>b && a>c){
//         printf("%d is greater\n",a);
//         max=a;}
//     else if (b>a && b>c){
//         printf("%d is greater\n",b);}
//     else {
//         printf("%d is greater\n",c);
//     }
//     return 0;
// }
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// FCP018-Write a program to take the basic salary of an employee and calculate its Gross salary 
// according to the following: (Gross salary is the sum of basic salary, HRA, and DRA)
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// #include <stdio.h>
// int main() {
//     int s;
//     printf("Enter your basic salary: ");
//     scanf("%d", &s);

//     if (s <= 10000) {
//         float hra = (0.20 * s);
//         float da = (0.80 * s);
//         float ts = (s + hra + da);
//         printf("Gross salary: %.2f", ts);
//     } else if (s <= 20000) {
//         float hra = (0.25 * s);
//         float da = (0.90 * s);
//         float ts = (s + hra + da);
//         printf("Gross salary: %.2f", ts);
//     } else {
//         float hra = (0.30 * s);
//         float da = (0.95 * s);
//         float ts = (s + hra + da);
//         printf("Gross salary: %.2f", ts);
//     }
//     return 0;
// }
// **************************************************************************************************
// FCP019- Write a program to input electricity unit charges and calculate the total
//  electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
// **************************************************************************************************
// #include<stdio.h>
// int main(){
// float u;
// printf("Enter unit :");
// scanf("%f",&u);
// if (u<=50){
//     float b=u*0.50;
//     float tb=b+(20/100)* b;
//     printf("Total bill :%.2f ",tb);
// }else if (u<=150){
//     float b=(u-50)*0.75+50*0.50;
//     float tb=b+(20/100)* b;
//     printf("Total bill :%.2f ",tb);
// }else if (u<=250){
//     float b=(u-150)*1.2+100*0.75+50*0.5;
//     float tb=b+(20/100)* b;
//     printf("Total bill :%.2f ",tb);
// }else{
//     float b=(u-250)*1.5+100*1.2+100*0.75+50*0.50;
//     float tb=b+(20/100)* b;
//     printf("Total bill :%.2f ",tb);
//     }
// return 0;
// }
/***************************************************************************************************************
FCP020-Write a program to take 4 numbers from the user and output the second max of these 4 numbers.
**************************************************************************************************************/
#include <stdio.h>
int main() {
    int a ,b , c, d;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("Enter the fourth number: ");
    scanf("%d", &d);
    int Smax,max;
    if (a > b) {
        max =a;
        Smax =b;
    } else {
        max=b;
        Smax= a;
    } if (max>c && Smax>c){
        Smax=Smax;
        max=max;
    } else {
        max=max;
        Smax=c;
    } if (max>d && Smax>d){
        Smax=Smax;
        max=max;
    } else{
        max=max;
        Smax=d;}
    printf("Your Second max is %d\n",Smax);  
    printf("Your  max is %d",max);    
return 0;
}