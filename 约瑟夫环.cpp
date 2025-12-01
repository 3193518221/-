#define _CRT_SECURE_NO_WARNINGS
#include<ctype.h>
#include<stdio.h>
#include <string.h>
#include<math.h>
int main() {
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    int p[n];
    for (int i = 0;i < n;i++)
    {
        p[i] = 0;
    }
    int cnt_p = n;
    int cnt_p1 = 1;
    while (cnt_p > 1)
    {
        if (p[k] == 0)
        {
            while (cnt_p1 < m)
            {
                k = (k + 1) % n;
                if (p[k] == 0)
                {
                    cnt_p1++;
                }
            }
        }
        p[k] = 1;
        cnt_p--;
        do {
            k = (k + 1) % n;
        } while (p[k] == 1);
        cnt_p1 = 1;

    }
    for (int i = 0;i < n;i++)
    {
        if (p[i] == 0)
            printf("%d", i);
    }

    return 0;
}