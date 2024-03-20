#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    
    len = strlen(str);

    
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome)
    {
        printf("Given string is a Palindrome.\n");
    } 
	else
    {
        printf("Given string is not a Palindrome.\n");
    }

    return 0;
}
