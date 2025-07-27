#include <stdio.h>
//Score, Grade
int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    
    // Write your code below
    if(score > 100 || score < 0) {
        printf("Invalide Score\n");
    }else if(score <= 100 && score >= 0) {
        switch (score / 10) {
            case 10:
            printf("A++\n");
            break;
            case 9:
            printf("A+\n");
            break;
            case 8:
            printf("A\n");
            break;
            case 7:
            printf("B+\n");
            break;
            case 6:
            printf("B\n");
            break;
            default:
            printf("F\n");
        }
        char* status = (score >= 60) ? "Passed" : "Fail";
        printf("Status: %s\n", status);
    }
    return 0;
}