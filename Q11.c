#include <stdio.h>

int main() {
    
    int a[] = {45, 12, 88, 7, 63, 20, 91, 34, 50, 19};
    int N = sizeof(a) / sizeof(a[0]);
  
    int b[N];
    int c[N];
    
    int d = 0;
    int e = 0;
    
    printf("--- Array Traversal and Splitting Program ---\n");
    printf("Original Scores Array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    for (int i = 0; i < N; i++) {
        int score = a[i];
        
        if (score % 2 == 0) {           
            b[d] = score;
            d++;
        } else {           
            c[e] = score;
            e++;
        }
    }
 
    printf("Even Scores (%d total):\n", d);
    for (int i = 0; i < d; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
 
    printf("Odd Scores (%d total):\n", e);
    
    for (int i = 0; i < e; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

