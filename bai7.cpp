#include <stdio.h>
#include <ctype.h> 

int main() {
    
    char str[] = "Tran Quoc Bao 992004 @!@#$%";
    
    int countLetters = 0;
    int countDigits = 0;  
    int countSpecial = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            countLetters++;
        } else if (isdigit(str[i])) {
            countDigits++;
        } else if (!isspace(str[i])) {
            countSpecial++;
        }
    }

    printf("So ky tu la chu cai: %d\n", countLetters);
    printf("So ky tu la chu so: %d\n", countDigits);
    printf("So ky tu dac biet: %d\n", countSpecial);

    return 0;
}
