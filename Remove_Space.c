//Remove blank space & rerwrite in upper case
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    name[strcspn(name, "\n")] = '\0'; // Remove newline if present

    printf("Without space: ");
    for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] == ' ') continue;

            printf("%c", toupper(name[i]));
    }

    return 0;
}