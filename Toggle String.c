#include <stdio.h>
#include <ctype.h>

int main() {
    char S[101];
    
    if (scanf("%100s", S) != 1) {
        return 1;
    }

    for (int i = 0; S[i] != '\0'; i++) {
        if (isupper(S[i])) {
            S[i] = tolower(S[i]);
        } else if (islower(S[i])) {
            S[i] = toupper(S[i]);
        }
    }

    printf("%s\n", S);
    return 0;
}
