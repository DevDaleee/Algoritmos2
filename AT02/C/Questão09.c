#include <stdio.h>
#include <math.h>

int main (){
  char y, v[200];
  int x, i, c;

  scanf("%c", &y);
  scanf("%s", v);

  while (y != '0'){
    x = strlen(v);
    for (i = 0; i < x; i++){
      if (v[i] == y){
        for (c = i; c < x; c++)
          v[c] = v[c+1];
        v[x-1] = 0;
        x--;
        i--;
      }
    }

    for (i = 0; i < x-1; i++){
      if (v[i] == '0'){
        for (c = i; c < x; c++)
          v[c] = v[c+1];
        v[x-1] = 0;
        x--;
        i--;
      }
	  else
        break;
    }

    if (x == 0){
      v[0] = '0';
      v[1] = '\0';
    }
    printf("%s\n", v);

    scanf(" %c", &y);
    scanf("%s", v);
  }
}