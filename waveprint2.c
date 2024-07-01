#include<stdio.h>
// Given a matrix n X m , print the matrix in wave pattern
int main(){
    int m;
    printf("Enter no of rows of matrix: ");
    scanf("%d", &m);
    int n;
    printf("Enter no of columns of matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix: ");
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    // Wave print
    for(int i=0;i<=0;i++){
        for(int j=0;j<n;j++){
            if(j%2==0){
                for(int i=m-1;i>=0;i--){
                    printf("%d ", a[i][j]);
                }
            }
            else{
                for(int i=0;i<m;i++){
                    printf("%d ", a[i][j]);
                }
            }
        }
    }
    return 0;
}