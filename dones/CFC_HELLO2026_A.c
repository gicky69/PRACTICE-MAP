#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int game(int* arr, int size) {
    if (arr[0] == 1 || arr[size - 1] == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a;

    int* arr = malloc(a * sizeof(int));

    while (n--) {
        scanf("%d", &a);
        for (int i=0;i<a;i++) {
            scanf("%d", &arr[i]);
        }
        int result = game(arr, a);
        if (result == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    free(arr);
    return 0;
}
