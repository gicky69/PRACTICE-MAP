#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int testcake(int wc, int dc, int tu) {
    int layer = 0;
    int size = 1;
    int tus = tu;

    while (1) {
        if (tus) {
            if (wc < size) break;
            wc -= size;
        } else {
            if (dc < size) break;
            dc -= size;
        }

        layer++;
        size <<= 1; // multiply 2
        tus ^= 1; // alternating
    }

    return layer;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int ac, dc;
        scanf("%d %d", &ac, &dc);
        int ans1 = testcake(ac,dc,1);
        int ans2 = testcake(ac,dc,0);

        if (ans1 > ans2) {
            printf("%d\n", ans1);
        } else {
            printf("%d\n", ans2);
        }
    }

    return 0;
}
