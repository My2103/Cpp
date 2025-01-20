//
//  main.c
//  zzzzzzz
//
//  Created by Mai Ngoc Diem My on 04/10/2023.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse(char* str);
int countWord(char* str);
int checkPalindrome(char*str);
void findLongWord(char*str);
void convertCase(char*str);
void removeExtraSpace(char*str);
void findandreplace(char* str, char* oldword, char* newword);
int main(int argc, const char * argv[]) {
    char str[100];
    
    
    printf("Input string : ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    
    //reverse
    reverse(str);
    printf("String after reverse : %s\n", str);
    
    //count
    int wordcount = countWord(str);
    printf("The number of words in string : %d\n",wordcount);
   
    //palindrome
     if(checkPalindrome(str)==1){
        printf("This is palindrome.\n");
    }
    else{
        printf("This is not palindrome.\n");
    }
    
    //find long word
     findLongWord(str);
   
    //convert case
    convertCase(str);
    printf("The string after convert %s\n", str);
    
    //remove space
    removeExtraSpace(str);
    printf("The string after remove extra space : %s\n", str);
    
    //replace word
    char oldword[100], newword[100];
    printf("Input the word need to replace: ");
    fgets(oldword, sizeof(oldword), stdin);
    oldword[strlen(oldword) - 1] = '\0';
    
    printf("Input the word to replace: ");
    fgets(newword, sizeof(newword), stdin);
    newword[strlen(newword) - 1] = '\0';
    
    findandreplace(str, oldword, newword);
    
    printf("The string after replace : %s\n", str);
    
    
    return 0;
}

//reverse function
void reverse(char* str){
    size_t len = strlen(str);
    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

//count word function
int countWord(char* str){
    int count = 0;
    int inWord = 0;
    
    while(*str){
        if(isspace(*str)){
            inWord = 0;
        }
        else if (!inWord){
            inWord = 1;
            ++count;
        }
        ++str;
    }
    return count;
}
int checkPalindrome(char*str){
    size_t len = strlen(str);
    for(int i = 0; i< len/2; i++){
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}
void findLongWord(char*str){
    int maxLen = 0;
    char longestWord[100] = " ";
    char* word = strtok(str, " ");
    while (word != NULL){
        size_t len = strlen(word);
        if(len > maxLen){
            maxLen = (int)len;
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " ");
    }
        printf("The longest world in string: %s\n", longestWord);
}
void convertCase(char*str){
    while(*str){
        if(islower(*str)){
            *str = toupper(*str);
        }
        else if(isupper(*str)){
            *str = tolower(*str);
        }
        ++str;
    }
}
void removeExtraSpace(char*str){
    char* dest = str;
    while(*str != '\0'){
        while(*str == ' ' && *(str+1) == ' ')
            str++;
        *dest++ = *str++;
    }
    *dest = '\0';
}
void findandreplace(char* str, char* oldword, char* newword){
    char buffer[200];
    char* pos;
    
    while((pos = strstr(str, oldword)) != NULL){
        strncpy(buffer, str, pos - str);
        buffer[pos - str] = '\0';
        strcat(buffer, newword);
        strcat(buffer, pos + strlen(oldword));
        strcpy(str, buffer);
    }
    
}
