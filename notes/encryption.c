/* write a program that takes text as input and encrypts this input. 
 The program should then also show the decrypted input.
 Write functions encrypt() and decrypt() to encrypt and decrypt a character */

#include <stdio.h>
#include <string.h>
#define CYPHER 0b00001000

unsigned char encrypt(unsigned char ch){
    return ch^CYPHER;    
}

unsigned char decrypt(unsigned char ch){
    return ch^CYPHER;    
}


int main(void){
    //printf("Original letter: A Encrypted: %c Decrypted: %c ", encrypt('A'), decrypt('I'));
    char original[500] = "Hello how are you?"; //later on read the text from a text file
    char encrypted[500];
   
    for(int i=0; i < strlen(original); i++){
        encrypted[i] = encrypt(original[i]);
        //printf("original: %c  encrypted: %c\n", original[i], encrypted[i]);
    }

    //remember to attach the null character to the end of the encrypted string
    encrypted[strlen(original)] = '\0';


    //decrypt
    char decrypted[500];
    for(int i=0; i < strlen(encrypted); i++){
        decrypted[i] = decrypt(encrypted[i]);
    }
    decrypted[strlen(encrypted)] = '\0';

    printf("\nOriginal: %s   Encrypted: %s Decrypted: %s \n", original, encrypted, decrypted);

    //you can write code to check which bit is being used in the 
}