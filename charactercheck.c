#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main (){
    char a;
    scanf("%c",&a);

    if (a>='a' && a<='z'){
        printf("%s","small alphabet");
    }else if(a>='A' && a<='Z'){
        printf("%s","big alphabet");
    }else if (isdigit(a)){
        printf("%s","number");
    }else{printf("%s","special character");}
    
}