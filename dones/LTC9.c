
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int x) {
    char str[12];
    // Make int x be string
    sprintf(str, "%d", x);

    // Get the size of string
    int size = strlen(str);
    // Make a dynamic sized array
    int *arr = malloc(size * sizeof(int));

    if (!arr) return 1;
    // put the x's elements to the array
    for (int i=0;i<size;i++){
        arr[i] = str[i] - '0';
    }

    //MAIN ALGORITHM
    int k = 0;
    int res = 0;
    printf("Size: %d", size);
    for (int i=size-1;i>=0;i--) {
        if (arr[k] == arr[i]) {
            res = 1;
        } else {
            return 0;
        }
        k++;
    }

    free(arr);
    return res;
}

int main()
{
    int x;
    scanf("%d", &x);

    printf("\n%d", isPalindrome(x));
    return 0;
}
