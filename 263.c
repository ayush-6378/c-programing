#include<stdio.h>
#include<string.h>
int main()
{   char mystring[100];
    int i=0;
    printf("enter a string(only use single word or no spaces):");
    scanf("%s", mystring);
    printf("original string: %s\n", mystring);

    while(mystring[i] !='\0'){
        mystring[i]=tolower(mystring[i]);
        i++;
    }
    printf("lowercase string: %s\n",mystring);
}
