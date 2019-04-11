#include <stdio.h>

int main() {
    char text [100];
    char ch;
    int i;
    int rotator;
    
    printf("Enter text:");
    gets(text);
    printf("Enter rotator:");
    scanf("%d", &rotator);
    
    for(i = 0 ; text[i] != '\0'; ++i){
        ch = text[i];
    
        
        if (ch >= 'A' && ch <= 'Z'){
            ch = ch + rotator;
            
            if (ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            text[i] = ch;
        }
    }
     
     printf("Encrypted message: %s", text);   
     
     return 0;
    }


