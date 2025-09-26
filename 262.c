#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len= 0;
    printf("enter a string:");
    scanf("%s", str);

    while(str[len]!='\0'){
        len++;
    }
    printf("the length of the string is: %d\n", len);
}
