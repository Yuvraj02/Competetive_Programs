#include <stdio.h>
#include <stdlib.h>

int main() {
    int k,n;
    scanf("%d",&n);
    int arr[n];
    for(k = 0; k < n; k++) {
    scanf("%d",&arr[k]);
    }
     int i,j;
    int count = 1;
    for(i = 0; i < n; i++)  {
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j] && i != j)
                break;
            }
                if(j == n ) {
                printf("%d " ,arr[i]);
                ++count;
            }
    }
    
return 0;
}