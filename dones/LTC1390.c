#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumFourDivisors(int* nums, int numsSize) {
    int sum = 0;
    int cc = 1;

    for (int i=0;i<numsSize;i++) {
        int tsum = 0;
        cc = 0;
        for (int j=1;j<=nums[i];j++) {
            if ((nums[i] % j) == 0) {
                cc++;
                tsum += j;
            }

            if (cc > 4) break;
        }

        if (cc == 4) {
            printf("nums[%d]: %d\n", i, nums[i]);
            printf("cc: %d\n", cc);
            printf("tsum: %d\n", tsum);
            sum += tsum;
        }
    }

    return sum;
}

int main() {
    int nums[] = {7286,18704,70773,8224,91675};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("%d", sumFourDivisors(nums, size));
    return 0;
}
