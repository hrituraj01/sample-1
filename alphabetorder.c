#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    char alphabet[30] = "abcdefghijklmnopqrstuvwxyz"; 
    char a;
    scanf("%c",&a); 
    for(int i = 0; i < 26; i++) {
        if (alphabet[i]==a){
            printf("%i",i+1);
        }
    }
    
    return 0;
}