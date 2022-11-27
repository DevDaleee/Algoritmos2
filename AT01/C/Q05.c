#include <stdio.h>

int main(){
    int id1, id2, id3, id4, sum, mult;
    scanf("%d", &id1);
    scanf("%d", &id2);
    scanf("%d", &id3);
    scanf("%d", &id4);

    if (id1 > id2 && id3 > id4){
        sum = id1+id4;
        mult = id2 * id3;
        printf("%d %d",sum, mult);

    }else if (id1 > id2 && id4 > id3){
        sum = id1+id3;
        mult = id2 * id4;
        printf("%d %d",sum, mult);

    }else if (id2 > id1 && id3 > id4){
        sum = id2+id4;
        mult = id1 * id3;
        printf("%d %d",sum, mult);

    }else if (id2 > id1 && id4 > id3){
        sum = id2+id3;
        mult = id1 * id4;
        printf("%d %d",sum, mult);
    }
}