#include <stdio.h>
int main(){
    int n1,n2;

    printf("Enter the two numbers : ");
    scanf("%d %d", &n1, &n2);

    if(n1 == n2)
        printf("%d and %d are equal", n1, n2);

    else
        printf("%d and %d are not equal", n1, n2);

    return 0;
}
