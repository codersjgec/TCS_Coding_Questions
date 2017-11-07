#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char str[])
{
    int flag=1, l=strlen(str);
    for(int i=0;i<l/2;i++){
        if (str[i]!=str[l-i-1]){
            flag=0;
            break;
        }
    }
    return flag;
} 

int main(int argc, char* argv[]) { 
    long ans;
    char *a;
    a = argv[1];
    ans = isPalindrome(a);
    if(ans)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}