#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[200] = {0}; 
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    printf("Frequency of each letter:\n");
    
    for (i = 0; i < 200; i++)
    {
        if (freq[i] != 0 && ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')))
        {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}
