1.	Project Title: Cricket Ball Count Program

Course: Data Structures
Student Name: sohan sai, Vamsi.
ROLL Number: RA2311026010291
             Ra2311026010293


2. Problem Statement: 

Given two strings B and S, where:

B represents the types of cricket balls (each character in B is distinct).

S represents the total balls you have. The task is to count how many balls in S are also in B. The input strings consist of case-sensitive letters, meaning that lowercase and uppercase letters are treated as different.





2.	Algorithm:

1. Initialize a counter to track the number of cricket balls found in S.
2. Iterate over each ball in string S.
3. For each ball, check if it exists in string B.
4. If it does, increment the counter.
5. After all balls in S have been checked, return the final count of cricket balls.


4. Program code:
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
5. Sample Input and Output

Sample Input 1
B = "aA"
S = "aAAbbbb"
Output: 3

Sample Input 2
B = "z"
S = "ZZ"
Output: 0

6.Github link:
https://github.com/VamsiSankarReddy/DSA_Lab_Assesment.git

7. Result: 

The program successfully worked as expected, producing the correct output in all tested cases. Here are the results:

Output Verification:
For the input B = "aA" and S = "aAAbbbb", the output was 3, as expected.

Edge Cases:
For B = "z" and S = "ZZ", the output was 0, correctly handling case sensitivity.

Performance or Efficiency Notes:
Given the constraints (string lengths of up to 50), the program runs efficiently using a nested loop. However, further optimizations could include using hash sets for faster lookups.


8. Conclusion: 
This task reinforced my understanding of string manipulation and basic algorithm design. The case sensitivity requirement posed an interesting challenge, and optimizing for efficiency could be explored in future iterations.




