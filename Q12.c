#include <stdio.h>

int main() {
    int scores[] = {85, 92, 78, 95, 88, 72, 99, 81};
    int n = sizeof(scores) / sizeof(scores[0]);

    if (n == 0) {
        printf("The array of scores is empty.\n");
        return 1; 
    }

    int max = scores[0];
    int min = scores[0];

    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }

  
    printf("Maximum Score (Highest Rank): %d\n", max_score);
    printf("Minimum Score (Lowest Rank): %d\n", min_score);
  
    return 0;
}

