#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI;
    printf("\n Enter principle amount ");
    scanf("%f",&principle);

    printf("\n Enter time ");
    scanf("%f",&time);

    printf("\n Enter rate: ");
    scanf("%f", &rate);

    
    CI = principle* (pow((1 + rate / 100), time));

    
    printf("Compound Interest = %f", CI);

    return 0;
}
