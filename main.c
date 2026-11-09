#include <stdio.h>

int main(void)
{
    double target;
    if (scanf("%lf", &target) != 1) {
        return 0;
    }
    if (target < 0.0) {
        printf("NG");
        return 0;
    }

    const double gravity = 3.71;
    for (double time = 0.0; ; time += 0.1) {
        double distance = gravity * time * time / 2.0;
        double speed = gravity * time;
        if (distance >= target) {
            printf("%.3f", speed);
            return 0;
        }
    }
}