#include <stdbool.h> 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
int counter=0; 
bool isDelimiter(char ch) { 
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == ',' || ch == ';' || ch == '>' || ch == '<' || ch== '=' || ch == '(' || ch == ')' ||ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch=='\n'){
        return (true);
    } 
    else{
        return false;
    } 

} 
bool isOperator(char ch) { 
    if (ch == '+' || ch == '-' || ch == '*' ||ch == '/' || ch == '>' || ch == '<' ||ch == '=' || ch == ',' || ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}' ) {
        return (true);
    }

    else{
        return (false); 

    } 

} 
bool validIdentifier(char* str) {
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||str[0] == '3' || str[0] == '4' || str[0] == '5' ||str[0] == '6' || str[0] == '7' || str[0] == '8' ||str[0] == '9' || isDelimiter(str[0]) == true)  {
        return (false);
    } 
    else{
        return (true); 
    }
} 
bool isKeyword(char* str) { 
if (!strcmp(str, "if") || !strcmp(str, "else") ||!strcmp(str, "while") || !strcmp(str, "do") ||!strcmp(str, "break") ||!strcmp(str, "continue") || !strcmp(str, "int")|| !strcmp(str, "double") || !strcmp(str, 
"float")||!strcmp(str, "return") || !strcmp(str, "char")|| !strcmp(str, "case") || !strcmp(str, "char")|| 
!strcmp(str, "sizeof") || !strcmp(str, "long")|| !strcmp(str, "short") || !strcmp(str, "typedef")|| 
!strcmp(str, "switch") ||!strcmp(str, "unsigned")|| !strcmp(str, "void") || !strcmp(str, "static")|| 
!strcmp(str, "struct") || !strcmp(str, "goto")){
    return (true);
  }
  else{
    return (false); 

  }  
} 
bool isInteger(char* str) {
     int i, len = strlen(str);
      if (len == 0){
        return (false);
      } 
    for (i = 0; i < len; i++) {
         if (str[i] != '0' && str[i] != '1' && str[i] != '2'&& str[i] != '3' && str[i] != '4' && str[i] != '5'&& str[i] != '6' && str[i] != '7' && str[i] != '8'&& str[i] != '9' || (str[i] == '-' && i > 0)) {
            return (false);
        } 
    } 
return (true); 
} 
bool isRealNumber(char* str) {
 int i, len = strlen(str); 
bool hasDecimal = false;  
if (len == 0) return (false); 
for (i = 0; i < len; i++) { 
if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.' ||(str[i] == '-' && i > 0)){
    return (false); 
}
if (str[i] == '.') {
hasDecimal = true; 
}

else{
    return (hasDecimal); 
    }
} 
}
char* subString(char* str, int left, int right) {
    int i; 
    char* subStr = (char*)malloc(sizeof(char) * (right - left + 2)); 
    for (i = left; i <= right; i++) subStr[i - left] = str[i];  subStr[right - left + 1] = '\0';  {
        return (subStr);
    } 
} 
void tokencounter(char* str) { 
    int left = 0, right = 0;
    int len = strlen(str); 
    while (right <= len && left <= right) {
        if (isDelimiter(str[right]) == false){
            right++;
        }  
        if (isDelimiter(str[right]) == true && left == right) {
              if (isOperator(str[right]) == true){
                counter++; 
              } 
        right++;
        }      
    left = right; 
}  
else if (isDelimiter(str[right]) == true && left != right|| (right == len && left != right)) { char* subStr = subString(str, left, right - 1); if (isKeyword(subStr) == true)  counter++; else if (isInteger(subStr) == true)  
counter++; else if (isRealNumber(subStr) == true)  counter++; 
else if (validIdentifier(subStr) == true && isDelimiter(str[right - 1]) == false)  counter++; 
else if (validIdentifier(subStr) == false && isDelimiter(str[right - 1]) == false)  counter++; 
left = right; 
} 
} 
return; 
} 
int main() 
{ 
 char str[100];
 printf("please enter your program \n after completing program enter a tab \n");
  scanf("%[^\t]",str); 
//="int main() \n { \n printf(\"hello\"); \n }";  tokencounter(str); printf("\n the count of total no.of tokens in your program is %d\n",counter);  return (0); 
} 

