#include<stdio.h>
#include<string.h>
void main()
{
char str1[20],str2[20];
printf("enter the first string");
scanf("%s",str1);
printf("enter the second string");
scanf("%s",str2);
strcat(str1,str2);
printf("first string %s \t second string %s\n",str1,str2);
}