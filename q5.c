#include <stdio.h>
void main() {
    char s1[100], s2[100];
    int i = 0, flag = 0;
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0) printf("Strings are Equal\n");
    else printf("Strings are Not Equal\n");
}
