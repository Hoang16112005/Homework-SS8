#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5}; 
    int x;
	int Exist = 0;
	printf("Enter element: ");
    scanf("%d", &x); 
	for (int i = 0; i < 5; i++) {
        if (x == a[i]) {
            printf("Element position: %d\n", i);
            Exist = 1;
        }
    }
	if (!Exist) {
        printf("Not exist");
    }

    return 0;
}
