#include <stdio.h>
#include <string.h>

int countCricketBalls(const char *B, const char *S) {
    int count = 0;
    for (int i = 0; i < strlen(S); i++) {
        for (int j = 0; j < strlen(B); j++) {
            if (S[i] == B[j]) {
                count++;
                break; // Exit inner loop once a match is found
            }
        }
    }
    return count;
}

int main() {
    char B[51], S[51];  // Define arrays with size 51 to account for null terminator and the max length of 50.

    // Input from user
    printf("Enter the types of cricket balls (B): ");
    scanf("%s", B);

    printf("Enter the total balls you have (S): ");
    scanf("%s", S);

    // Output the result
    int result = countCricketBalls(B, S);
    printf("Number of cricket balls in S: %d\n", result);

    return 0;
}