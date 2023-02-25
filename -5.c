#include<stdio.h>

int main() 
{
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;

    for (int i = 1; i <= 10; i++) 
	{
        char ch =getchar();
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		{
            letter++;
        } 
		else if (ch >= '0' && ch <= '9')
		{
            digit++;
        } 
		else if (ch == ' ' || ch == '\n') 
		{
            blank++;
        } 
		else 
		{
            other++;
        }
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);

    return 0;
}