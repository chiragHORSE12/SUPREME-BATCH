#include <stdio.h> 
#include <ctype.h> 
int main() { 
    char input[100]; 
    int digits = 0, vowels = 0, symbols = 0; 
    printf("Enter a string: "); 
    fgets(input, sizeof(input), stdin); 
 
    for (int i = 0; input[i] != '\0'; i++) {
         char ch = tolower(input[i]); 
          if (isdigit(ch)) { 
            digits++; 
           }
          else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { vowels++; 
           } 
           else if (!isalnum(ch) && !isspace(ch)) {
         symbols++; 
        } 
    } 
 
printf("Digits: %d\n", digits);
printf("Vowels: %d\n", vowels); 
printf("Symbols: %d\n", symbols); 
return 0; 
} 
