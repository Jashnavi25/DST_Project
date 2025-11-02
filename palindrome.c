/* SPDX-License-Identifier: MIT */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void preprocess(char *src, char *dest);
int isPalindrome(char str[]);

int main()  
{  
    char input[1000], processed[1000];

    printf("Enter a phrase:\n"); 
    fgets(input, sizeof(input), stdin);

    preprocess(input, processed);

    if (isPalindrome(processed)) 
        printf("\"%s\" is a palindrome.\n", input);
    else 
        printf("\"%s\" is not a palindrome.\n", input);

    return 0; 
}

// Function to preprocess the string: remove non-alphabetic characters and convert to lowercase
void preprocess(char *src, char *dest)  
{ 
    int i, j = 0; 
    for (i = 0; src[i] != '\0'; i++)  
    { 
        if (isalpha(src[i]))  
            dest[j++] = tolower(src[i]); 
    } 
    dest[j] = '\0'; 
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) 
{ 
    int left = 0, right = strlen(str) - 1; 
    while (left < right) 
    { 
        if (str[left] != str[right]) 
            return 0; 
        left++; 
        right--; 
    } 
    return 1; 
}
