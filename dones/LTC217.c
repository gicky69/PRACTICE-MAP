#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i=1;i<numsSize;i++) {
        if (nums[i] == nums[i-1]) {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int numsSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for (int i=0;i<numsSize;i++) {
        scanf("%d", &nums[i]);
    }
    printf("%d", containsDuplicate(nums, numsSize));

    return 0;
}
