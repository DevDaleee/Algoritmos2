#include <stdio.h>
#include <ctype.h>

void Maiusculo (char *sPrt);

int main(){
    char string[] = "";
    gets(string);
    Maiusculo(string);
    printf("%s", string);
    return 0;
}


void Maiusculo(char *sPrt){

    while(*sPrt != '\0'){
        if(islower(*sPrt)){
            *sPrt = toupper(*sPrt);
        }

        *sPrt++;
    }
}