#include<stdio.h>
#include<string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char s[80];
    scanf("%s", s);
    char maxS[80];
    // ��������ĵ�һ���ַ����
    strcpy(maxS, s);

    // ��������ʣ�µ� N-1 ���ַ����������������ַ������� maxS������� maxS
    for (int i = 1; i <= N - 1; i++) {
        scanf("%s", s);
        if (strlen(s) > strlen(maxS)) {
            strcpy(maxS, s);
        }
    }

    printf("The longest is: %s", maxS);

    return 0;
}
