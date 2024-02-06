#include<stdio.h>
int main(){
    int Arr[4][3];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element");
            scanf("%d",&Arr[i][j]);
        }
        }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++)
    {printf("%d ",Arr[i][j]);}} 
    return 0;
}