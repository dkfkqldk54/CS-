#include <stdio.h>

int main(void) {
    
    int i1, i2, i3, i4, l1, l2, s1, s2, largest, smallest;
        
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
    
    largest = i1;
    smallest = i1;
    
    if (i1 > i2) {
        l1 = i1;
        s1 = i2;
    } else {
        l1 = i2;
        s1 = i1;
    }
    
    if (i3 > i4) {
        l2 = i3;
        s2 = i4;
    } else {
        l2 = i4;
        s2 = i3;
    }
    
    if (l1 > l2) {
        largest = l1;
    } else {
        largest = l2;
    }
    
    if (s1 < s2) {
        smallest = s1;
    } else {
        smallest = s2;
    }
    
    printf("Largest: %d\n", largest);
    printf("Smallest: %d", smallest);
    
    return 0;
}
