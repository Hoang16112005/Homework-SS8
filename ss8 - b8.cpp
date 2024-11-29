#include <stdio.h>
int main(){
    int n[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum=0,a=2;
    for(int i=0;i<3;i++){
        for(int f=a+1;f>a;f--){
            printf("[%d]",n[i][a]);
            sum+=n[i][a];
        }
        a--;
    }
    printf("\ntong cac so tren duong cheo phu cua mang la: %d",sum);
}
