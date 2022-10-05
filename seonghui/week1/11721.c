#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int i =0;
    int cnt =0;
    while(str[i])
    {
        if(cnt!=10)
        {
            printf("%c", str[i]);
            cnt ++;
            i++;
        }
        else
        { 
            printf("\n");
            cnt = 0;
        }
    }
}