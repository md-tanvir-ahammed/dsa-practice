#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";

    // String length
    printf("String: %s\n", s);
    printf("Length: %d\n", strlen(s));

    // Count vowels
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u') {
            count++;
        }
    }
    printf("Vowels: %d\n", count);

    // Reverse string
    int n = strlen(s);
    for (int i = 0; i < n/2; i++) {
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
    printf("Reversed: %s\n", s);

    return 0;
}
