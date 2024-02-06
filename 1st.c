 #include<stdio.h>
 int main(){
    int n;
    int arr[n];
    printf("Enter lenth of array");
    scanf("%d",&n);
   for(int i=0;i<n;i++){
      int a=i+1;
      printf("enter number %d ",a);
      scanf("%d",&arr[i]); }
   for(int i=0;i<n;i++){
      printf(" your array is %d \n ",arr[i]);}
   return 0;
 }  