#include <stdio.h>
#include <string.h>

int main() {
    char word[200];
    printf("Enter a word: ");
    scanf("%s", &word);
    printf("You entered: %s\n", word);
    printf("Character count: %d\n", (int)strlen(word));
    int countVowel = 0;
    for(int i = 0; i < strlen(word); i++) {
        char letter = word[i];
        if(letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {
            countVowel++;
        }
    }
    printf("Vowel count: %d\n", countVowel);   
    return 0;
}