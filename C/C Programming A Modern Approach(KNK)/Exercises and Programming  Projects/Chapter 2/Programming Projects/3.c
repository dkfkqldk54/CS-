#include <stdio.h>
#include <math.h>

int main(void)
{
    int radius;
    float volume;
    printf("Enter radius of the sphere: ");
    scanf("%d", & radius);
    volume = M_PI * radius * radius * radius * (4.0f/3.0f);
    
    printf("volume: %f\n", volume);
    return 0;
}
