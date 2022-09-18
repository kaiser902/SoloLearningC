#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[] = "The grey fox";
    char s2[] = " Jumped.";
    strcat(s1,s2); // add string s2 to s1
    printf("%s\n",s1);
    printf("Length of s1 is %d\n",strlen(s1)); // count s1;
    strcpy(s1,s2); // copy the value of s2 to s1
    printf("s1 is now %s \n",s1);
    return 0;
}
