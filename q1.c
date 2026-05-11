#include<stdio.h>
#include<string.h>
void main()
{
char str1[10], str2[10];
printf("enter the first string");
scanf("%s",str1);
printf("enter the second string");
scanf("%s",str2);
if((strcmp(str1,str2))==0)
printf("strings are same");
else
printf("strings are not same");
}