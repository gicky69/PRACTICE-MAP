#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *result = malloc(2 * sizeof(int));
    int sum = 0;
    for (int i=0;i<numsSize;i++) {
        for (int k=i+1;k<numsSize;k++) {
            if ((nums[i] + nums[k]) == target) {
                result[0] = i;
                result[1] = k;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int size = 2;
    int nums[] = {3,3};
    int target = 6;

    int *result = twoSum(nums, size, target, [2]);

    // Suppose you know the size (you need to track it properly)
    int nsize = 2;  // example, depends on your logic

    for (int i = 0; i < nsize; i++) {
        printf("%d ", result[i]);
    }
}
