#include<stdio.h>
#include<string.h>
int main()

{
        char name[31];
        printf("What is your name?: ");
        scanf("%30s", name);
        printf("%s\n", name);
        int charCount = 0;
        while(name[charCount]            = '\0')
        {
                charCount++;
        }
        printf("the amount of letters are %d\n", charCount);
        return 0;
}
