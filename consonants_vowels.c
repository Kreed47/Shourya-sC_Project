#include <stdio.h>
int main() {
    char c;
    int lc, uc;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lc = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uc = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lc || uc)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}