#include <stdio.h>
int main()
{
    char poem[4][22];
    for (int i=0; i<4; i++)
        gets(poem[i]);
    char str[13];
    int k = 0;
    for (int i=0; i<4; i++){
        str[k++] = poem[i][0];
        str[k++] = poem[i][1];
        str[k++] = poem[i][2];
    }
    //printf("k=%d\n", k);
    puts(str);
    return 0;
}

