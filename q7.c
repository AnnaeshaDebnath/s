#include <stdio.h>
#include <string.h>
void main() {
    char s1[6], s2[6];
    int mark1[6] = {0}, mark2[6] = {0};
    int i, j;
    printf("Enter string 1 (max 5 chars): ");
    scanf("%5s", s1);
    printf("Enter string 2 (max 5 chars): ");
    scanf("%5s", s2);
for (i = 0; s1[i] != '\0'; i++)
 {
        for (j = 0; s2[j] != '\0'; j++)
 {
            if (s1[i] == s2[j]) {
                mark1[i] = 1;
                mark2[j] = 1;
            }
        }
    }
    printf("Result 1: ");
for (i = 0; s1[i] != '\0'; i++)
 {
        if (!mark1[i]) printf("%c", s1[i]);
    }

    printf("\nResult 2: ");
for (i = 0; s2[i] != '\0'; i++)
 {
        if (!mark2[i]) printf("%c", s2[i]); }
    printf("\n");
}
