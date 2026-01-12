#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char c[] = {'0','2','5', '6'};
    int res[n];

    for (int i=0;i<n;i++) {
        int s;
        scanf("%d", &s);
        char str[s+1];
        for (int j=0;j<s;j++) {
            scanf(" %c", &str[j]);
        }

        int xx = 0, yy =0;
        str[s] = '\0';


        for (int i=0;i + 3 < s;i++) {
            if (strncmp(&str[i], "2025", 4) == 0) {
                xx = 1;
            }

            if (strncmp(&str[i], "2026", 4) == 0) {
                yy = 1;
            }
        }

        if (!xx || yy) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }

    return 0;
}
