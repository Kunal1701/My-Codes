#include <stdio.h>

int main()
{
    float a = 0.01;
    float b = 0.005;
    float c = 0.00001;
    float d = 0.01;
    int r1 = 10000, w1 = 2000, r2, w2;

    int n;
    printf("enter days gap\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        r2 = (1 + a) * r1 - c * r1 * w1;
        w2 = (1 - b) * w1 + c * d * r1 * w1;
        r1 = r2;
        w1 = w2;
    }
    printf("%d %d ", r2, w2);

    return 0;
}