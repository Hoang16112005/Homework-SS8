#include<stdio.h>
int main(){
    int number, count = 0;
    printf("moi ban nhap vao so nguyen ");
    scanf("%d", &number);
    for(int i=number; i>=1;i--){
        if(number%i==0){
            count ++;
        }
    }
    if(count==2){
        printf("so %d la so nguyen to\n", number);
    }else{
        printf("so %d khong phai so nguyen to\n", number);
    }
    return 0;
}
