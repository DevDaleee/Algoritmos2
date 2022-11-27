void strcpy_and_strncpy(){
    const char x[] = "Vai ganhar sempre o amg";
    char y[25] = "";
    char z[18] = "";
    int c=0,i=0;
    while(x[c] != '\0'){
        y[c] = x[c];
        c++;
    }
    for (int j = 0; j <= 15; j++){
        z[i] = x[j];
        i++;
    }
    z[15] = '\0';
    printf("\nTexto normal: %s\n", x);
    printf("Strcpy: %s\n", y);
    printf("Strncpy: %s\n\n\n\n", z);
}
void strcat_and_strncat(){
    char s1[20] = "Feliz ";
    char s2[] = "Ano Novo ";
    char s3[40] = "";
    int c, d,j,k;
    c = 0;    
    while (s1[c] != '\0') {c++;}
    d = 0;
    while (s2[d] != '\0') {
        s1[c] = s2[d];
        d++;
        c++;    
    }
    for (int i = 0; i < 6; i++){
        s3[i] = s1[i];
    }
    j=0;
    while (s3[j] != '\0') {j++;}
    k=0;
    while (s1[k] != '\0'){
       s3[j]=s1[k];
       k++;
       j++;
    }
    s1[c] = '\0';
    printf("Strcat: %s\n", s1);
    printf("Strncat: %s\n\n\n\n", s3);
}

void strcmp_and_strncmp(){
    const char *sr1 = "Feliz Ano Novo";
    const char *sr2 = "Feliz Ano Novo";
    const char *sr3 = "Boas Férias";

    printf("Comparacao entre sr1 e sr2: %2d\n", strcmp(sr1,sr2));
    printf("Comparacao entre sr1 e sr3: %2d\n", strcmp(sr1,sr3));
    printf("Comparacao entre sr3 e sr1: %2d\n\n", strcmp(sr3,sr1));
    printf("Comparacao entre a casa 6 de: sr1 e sr3: %2d\n", strncmp(sr1, sr3, 6));
    printf("Comparacao entre a casa 7 de: sr1 e sr3: %2d\n", strncmp(sr1, sr3, 7));
    printf("Comparacao entre a casa 7 de: sr3 e sr1: %2d\n", strncmp(sr3, sr1, 7));
}