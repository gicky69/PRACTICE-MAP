#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MIN(a,b)((a) <(b))?(a):(b)

int maxSubArray(int* nums, int numsSize) {
    int sum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (sum < 0)
            sum = nums[i];
        else
            sum += nums[i];

        if (sum > maxSum)
            maxSum = sum;
    }

    return maxSum;
}


int main() {
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d", maxSubArray(nums, size));
    return 0;
}
