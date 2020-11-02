#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    double max = 0, A[n], sum = 0;
    for(i=0;i<n;i++)
        scanf("%lf", &A[i]);
    for(i=0;i<n;i++) {
        if(A[i]>max) max = A[i];
    }
    for(i=0;i<n;i++)
        sum = sum + ((A[i]/max)*100);
    printf("%0.2lf",sum/n);
    
    return 0;
}