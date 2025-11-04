#include <stdio.h>

int main() {

    int a[] = {85, 99, 72, 100, 99, 90, 99, 65, 98, 99};

    int b = sizeof(a) / sizeof(a[0]);
    const int c = 99;
    int d = 0; 

    printf("Scanning %d student marks to find the frequency of score %d\n", 
           b, c);

    for (int i = 0; i < b; i++) {
        
        if (a[i] == c) {
            
            d++;
            
            printf("  -> Student at index %d scored %d!\n", 
                   i, c);
        }
    }

   
    printf("The score '%d' was found %d time(s).\n", c, d); 
    printf("This means %d student(s) achieved a score of %d.\n", d, c);

    return 0;
}

