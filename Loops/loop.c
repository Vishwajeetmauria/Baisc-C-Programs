/**********************************************************************************************************
 FCP023 Take the number N and the name from the user as inputs, and print the name N times.
 **********************************************************************************************************/ 
// #include<stdio.h>
// int main(){
//     int n;
//     char m[50]="";

//     printf("Enter your name for print :");
//     scanf("%s",m);
//     printf("Enter number for print times");
//     scanf("%d",&n);

//     for (int i = 1; i <=n; i++){
//         printf("%s\n",m);
//     }
//     return 0;
// }
/****************************************************************************************************************
FCP024 Take a number N from the user as input, and print even numbers up to N.
***************************************************************************************************************/
// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter the last even number :");
//     scanf("%d",&n);

//     for (int i =1; i<=n ; i++){
//         if (i%2==0)
//         {printf("%d ",i);}}
//     return 0;
// }
/******************************************************************************************************************
FCP025 Write a program to print the sum of odd numbers up to N.
******************************************************************************************************************/ 
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter last odd number :");
//     scanf("%d",&n);
//     int sum=0;
//     for (int i = 1; i <=n; i++){
//         if (i%2!=0)
//         {
//             sum+=i;
//         }
//     }
//     printf("%d",sum);
    
//     return 0;
// }
/******************************************************************************************************************
 FCP026 Write a program to take two integers M, and N and print the sum of numbers in the range M to N.
********************************************************************************************************************/ 
// #include<stdio.h>
// int main(){
//     int m,n;
//     printf("Enter starting value :");
//     scanf("%d",&m);
//     printf("Enter Ending value :");
//     scanf("%d",&n);

//     int sum=0;
//     for (int i=m; i<=n; i++){
//         sum+=i;}
//     printf("Sum of numbers is %d ",sum);
//     return 0;
// }
/*******************************************************************************************************************
 FCP027 Write a program to calculate the sum of the following series where N is input from the user. 1 + 1/2 + 1/3 +
  1/4 + 1/5 +…………1/N
 *********************************************************************************************************************/ 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of N :");
//     scanf("%d",&n);
//     double sum=0;
//     for (int i=1; i<=n; i++)
//         {
//         sum+=1.0/i; 
//         }
//     printf("Sum of series is %.2lf",sum);
//     return 0;
// }
/********************************************************************************************************************
FCP028 Write a program to take a number from the user and print the number digits in the given number.
*********************************************************************************************************************/
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter number :");
//     scanf("%d",&num);
//     int count=0 ;
//     while (num>0)
//     {
//         num=num/10;
//         count++;
//     }
//     printf(" your number is %d digit number.",count);
//     return 0;
// }
/***********************************************************************************************************************
 FCP029 Write a program to take a number from the user and print the sum of the digits of the given number.
*************************************************************************************************************************/
//  #include<stdio.h>
//  int main (){
//     int num;
//     printf("Enter your number :");
//     scanf("%d",&num);
//     int digit,sum=0;
//     while (num>0)
//     {
//         digit=num%10;
//         sum+=digit;
//         num=num/10;
//     }
//     printf("the sum of number digits is %d ",sum);
//     return 0;
//  }
/*************************************************************************************************************
FCP030 Write a program to input a number and check whether it is a perfect square or not.
Note: A perfect square is the product of some integer with itself. 
************************************************************************************************************/ 
// #include <stdio.h>
// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int i = 1;
//     while (i * i < num) {
//         i++;
//     }

//     if (i * i == num) {
//         printf("%d is a perfect square.\n", num);
//     } else {
//         printf("%d is not a perfect square.\n", num);
//     }
//     return 0;
// }
/**************************************************************************************************************
 FCP031 Write a program that takes a number from the user and prints the number that is formed by reversing the 
 digits of the number.
 **************************************************************************************************************/
// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number :");
//     scanf("%d",&num);

//     int reverse=0,digit;
//     while (num>0)
//     {
//         digit=num%10;
//         reverse=reverse*10+digit;
//         num=num/10;
//     }
//     printf("%d is reversed number",reverse);
    
//     return 0;
/***************************************************************************************************************
FCP032-Write a program to take a number and if a number has exactly three positive divisors Or not. 
An integer m is a divisor of n if an integer k exists such that n = k * m
****************************************************************************************************************/  
// #include<stdio.h>
// int main (){
//     int num;
//     printf("Enter a number :");
//     scanf("%d",&num);
    
//     int count=0;
//     for (int i = 1; i <= num; i++){
//         if (num%i==0){
//             count+=1;
//         }
//     if (count==3)
//         {
//             printf("has exactly three positive divisers.");
//     }else {
//             printf(" has not exactly three positive divisers.");
//         }   
    
//     return 0;
// }
/******************************************************************************************************************
FCP033 -Write a program to check whether a number is palindrome or not.
Note: A palindrome is a sequence of characters (or numbers) that reads the same 
forwards as it does backwards. In other words, it remains unchanged when reversed.
****************************************************************************************************************/ 
// #include<stdio.h>
// int main (){
//     int num;
//     printf("Enter a number :");
//     scanf("%d",&num);

//     int rev=0,digit,num1=num;
//     while (num>0)
//     {
//         digit=num%10;
//         rev=rev*10+digit;
//         num=num/10;
//     }
//     if (num1==rev){
//         printf("%d is a palidrome number ",num1);
//     }
//     else{
//         printf("%d is not a palidrome number ",num1);
//     }
    
//     return 0;
// }
/*****************************************************************************************************************
 FCP034 Write a program to take a number from the user and print all the factors of the given number. A factor is a number that can divide another number evenly without 
leaving a remainder.
*****************************************************************************************************************/ 
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number for factors :");
//     scanf("%d",&num);
//     printf("your factors are: \n");

//     int i=1;
//     for (int i = 1; i<=num; i++)
//     {
//         if (num%i==0)
//             {
//             printf(" %d ",i);
//             }
//     }
//     return 0;
// }
/********************************************************************************************************************
 FCP035 Write a program to check if a number is a special type of number called a 'prime number'. A prime number is a 
 number that is only divisible by 1 and itself, and it doesn't have any other factors. 
**********************************************************************************************************************/ 
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a nuber :");
//     scanf("%d",&num);

//     int count=0,i;
//     for ( i = 1; i <=num; i++)
//     {
//         if (num%i==0)
//         {
//             count++;
//         }   
//     }
//     if (count==2)
//         {
//         printf("Number is a Prime number");
//         }
//     else
//         {
//         printf("Number is Not a Prime number");
//         }
//     return 0;
// }
/***********************************************************************************************************************
FCP036 Write a program to take two numbers from the user as input and obtain the HCF and LCM of the two numbers.
***********************************************************************************************************************/ 
// #include<stdio.h>
// int main (){
//     int num1,num2,min=0;
//     printf("Enter two numbers for HCF and LCM -:");
//     scanf("%d%d",&num1,&num2);

//     if (num1>num2)
//         {
//         min=num2;
//         }
//     else
//         {
//         min=num1;
//         }
//     int hcf=0,Lcm=0;
//     for (int i = 1; i <=min; i++)
//     {
//         if (num1%i==0 && num2%i==0)
//         {
//             hcf=i;
//         }
        
//     }
//     printf("Your hcf is %d \n",hcf);
//     Lcm=(num1*num2)/hcf;
//     printf("And Lcm is %d ",Lcm);
//     return 0;
// }
/*******************************************************************************************************************
FCP037 Write a program to take a number from the user and then determine if that number is
 a special type of number called a 'perfect number'.
*********************************************************************************************************************/
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Please enter a numberv :");
//     scanf("%d",&num);

//     int sum=0;
//     for (int i = 1; i < num; i++)
//     {
//         if (num%i==0)
//         {
//             sum+=i;
//         }
        
//     }
//     if (sum==num)
//     {
//         printf("Entered number is perfect number. ");
//     }
//     else 
//     {
//         printf("Entered number is not a perfect number.");
//     }
//     return 0;
// }
/*********************************************************************************************************************
FCP038-Write a program to check whether a number is Armstrong or not.
***********************************************************************************************************************/
// #include<stdio.h>
// #include<math.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int number = num;
//     int count = 0;
//     while (num > 0) {
//         num = num / 10;
//         count += 1;
//     }
//     int sum = 0, digit;
//     num = number;
//     while (number > 0) {
//         digit = number % 10;
//         sum += pow(digit, count);
//         number = number / 10;
//     }
//     if (sum == num) { 
//         printf("Entered number is an Armstrong number.\n");
//     } else {
//         printf("Entered number is not an Armstrong number.\n");
//     }

//     return 0;
// }
/**************************************************************************************************************************************
FCP039-Write a program to take N numbers from a user as input, and print the maximum and minimum values among the given set of N numbers.
 Also, take N from the user as input. 
 
 
 FCP040-Write a program to take N numbers from a user as input, and print the second maximum number among the given set of N numbers. 
Also, take N from the user as input.

FCP041-Write a program to take N numbers from a user as input, and print the third maximum number among the given set of N numbers. Also, take N from the user as input.

FCP042 Write a program to print the first 'N' Fibonacci numbers. Take N from the user as input.
*****************************************************************************************************************************************/ 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of fibbonacci number series");
    scanf("%d",&n);

    int i=1    
    return 0;
}