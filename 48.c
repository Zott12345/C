#include<stdio.h>
#include<string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char s[80];
    scanf("%s", s);
    char maxS[80];
    // 假设输入的第一个字符串最长
    strcpy(maxS, s);

    // 继续输入剩下的 N-1 个字符串，如果新输入的字符串长于 maxS，则更新 maxS
    for (int i = 1; i <= N - 1; i++) {
        scanf("%s", s);
        if (strlen(s) > strlen(maxS)) {
            strcpy(maxS, s);
        }
    }

    printf("The longest is: %s", maxS);

    return 0;
}
