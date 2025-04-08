#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        double a1, b1, a2, b2, a3, b3;
        scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &a2, &b2, &a3, &b3);
        double d12 = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
        double d23 = sqrt((a2 - a3) * (a2 - a3) + (b2 - b3) * (b2 - b3));
        double d13 = sqrt((a1 - a3) * (a1 - a3) + (b1 - b3) * (b1 - b3));
        double S = 0.25 * (sqrt((d12 + d23+d13) * (d12 + d23 - d13)*(d12+d13-d23)*(d13 + d23 - d12)));
        double R = (d12 * d23 * d13) / (4*S);
        if ((d12 + d23) > d13 && (d23 + d13) > d12 && (d13 + d12) > d23)
            	printf("%.3f\n", PI*R*R);
        else{
        printf("INVALID");
        printf("\n");
    }
}
    return 0;
}
