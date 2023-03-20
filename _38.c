#include <stdio.h>
#include <string.h>

int main()
{
    int sign;
    int notodd = 1;
    int fool;
    char str[51] = {0};
    int i, j, n;
    float power = 1.0;
    i = 0;
    scanf("%s", &str);
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    else
        sign = 1;
    n = 0;
    while(str[i])
    {
        if (str[i] == '2')
            n++;
        i++;
    }
    j = (sign == -1) ? strlen(str) - 1 : strlen(str);
    if ((str[strlen(str) - 1] - '0') % 2 == 0)
        notodd = 2;
    if (sign == -1)
        power = 1.5;
    float sum;
    sum = n*1.0 / j *power*notodd*100;
    printf("%0.2f%%", sum);

    return 0;
}
