#include <stdio.h>

int main() {
    char text [100];
    char ch;
    int i;
    int rotator; // declares variables 
    
    printf("Enter text:"); // sends "Enter text:" to terminal
    fgets(text, sizeof(text), stdin);
    printf("Enter rotator:"); // sends "Enter rotator:" to terminal
    scanf("%d", &rotator);
    
    for(i = 0 ; text[i] != '\0'; ++i){ // states rules
        ch = text[i];
        
        if (ch >= 'a' && ch <= 'z'){ // if letter is lower case (e.g. abc)
            ch =  ch + rotator;
            
            if (ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            text[i] = ch;
        }            
        
        else if (ch >= 'A' && ch <= 'Z'){ // if letter is upper case (e.g. ABC)
            ch = ch + rotator;
            
            if (ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            text[i] = ch;
        }
    }
     
    printf("Encrypted message: %s", text); // sends the encrypted message to terminal
    

    printf("Enter initial rotator:"); 
    scanf("%d", &rotator);
   
    for(i = 0; text[i] != '\0'; ++i){ // states rules
		ch = text[i];
		
		if(ch >= 'a' && ch <= 'z'){ //if letter is lower case
			ch = ch - rotator;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			text[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){ // if letter is upper case
			ch = ch - rotator;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			text[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", text); // sends the decrypted message to the print board
	
	return 0;
}
    


