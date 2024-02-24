#include <stdio.h>
#include <stdbool.h>

void reverseString(char str[]) {
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }


    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


bool isPalindrome(char str[]) {
    int len = 0;
  
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);


    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
