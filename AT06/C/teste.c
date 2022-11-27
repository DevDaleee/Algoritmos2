void strcpy_and_strncpy(){
    char x[] = "Feliz ano novo, Adeus ano velho. ";
    char y[25] = "";
    char z[15] = "";

    for (int i = 0; i != '\0'; i++){
        y[i] = x[i];

        if(y[i] == y[25]){
            break;
        }
    } 
    for (int j = 0; j <= 15; j++){
        z[j] = x[j];
    }
    z[14] = '\0';
    printf("Texto normal: %s\n", x);
    printf("Strcpy: %s\n", y);
    printf("Strncpy: %s\n", z);
}
void strcat_and_strncat(){
    char s1[20] = "Feliz ";
    char s2[] = "Ano Novo ";
    char s3[40] = "";
    int c, d;
    c = 0;
    while (s1[c] != '\0') {c++;}
    d = 0;
    while (s2[d] != '\0') {
        s1[c] = s2[d];
        d++;
        c++;    
    }
    s1[c] = '\0';
    
    printf("Strcat: %s\n", s1);
    printf("Strncat: %s\n", s);
}

void strcmp_and_strncmp(){
    const char *s1 = "Feliz Ano Novo";
    const char *s2 = "Feliz Ano Novo";
    const char *s3 = "Boas Férias";


}