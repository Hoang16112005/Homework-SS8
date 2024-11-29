#include <stdio.h>
int main(){
    int n[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int a=0,sum=0;
    for(int i=0;i<3;i++){
        for(int f=a;f<a+1;f++){
            printf("[%d]",n[i][f]);
            sum+=n[i][f];
        }
        a++;
    }
    printf("\ntong cac so tren duong cheo chinh cua mang la: %d",sum);
}
