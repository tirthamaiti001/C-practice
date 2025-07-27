#include<stdio.h>
//Syntax 1
void Namaste() {
    printf("Namaste \n");
}
void Bonjour() {
    printf("Bonjour \n");
}
//Syntax 2
int main() {
    char character;
    printf("enter your nationality (I=Indian; F=French):");
    scanf("%c", &character);

    if(character == 'I') {
        Namaste();
    }
    else if(character == 'F') {
        Bonjour();
    }
    else(printf("not a valid nation!"));
}