 #include <stdio.h>
   
int main() {
    int i, j;
    int m, n;
     
    printf("Enter row: ");
    scanf("%d", &m);
    printf("Enter column: ");
    scanf("%d", &n);
     
    
    int a[m][n];
     
    printf("Enter element: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
 
    printf("Element: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
     
    return 0;
}
