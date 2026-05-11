#include<stdio.h>
#include<string.h>
void main()
{
char str1[10],str2[10];
printf("enter the first string");
scanf("%s",str1);
printf("enter the second string");
scanf("%s",str2);
strcpy(str1,str2);
printf("first string %s \t \t second string %s\n",str1,str2);
}
