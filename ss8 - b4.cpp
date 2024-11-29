#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int Max = 0;
    for (int i = 0; i < 3; i++){
    	for (int j = 0; j < 3; j++){
    		Max += a[i][j];
			if (Max > a[i][j]){
			Max = a[i][j];
			}
		}
	}
	printf("%d", Max);
    return 0;
}
