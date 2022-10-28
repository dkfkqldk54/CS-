#include <stdio.h>
#include <math.h>

int main(void)
{
    float radius, volume;
    radius = 10;
    volume = M_PI * radius * radius * radius * (4.0f/3.0f);
    
    printf("volume: %f\n", volume);
    return 0;
}
