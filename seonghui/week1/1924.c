#include <stdio.h>

int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    // printf("%d %d\n", x,y);

    for (int i = 1; i <= x; i++)
    {
        if (i - 1 == 2)
            sum += 28;
        else if (i - 1 == 4 || i - 1 == 6 || i - 1 == 9 || i - 1 == 11)
            sum += 30;
        else if (i - 1 == 1 || i - 1 == 3 || i - 1 == 5 || i - 1 == 7 || i - 1 == 8 || i - 1 == 10 || i - 1 == 12)
            sum += 31;
    }

    sum += y - 1;
    sum = sum % 7;
    if (sum == 0)
        printf("MON\n");
    else if (sum == 1)
        printf("TUE\n");
    else if (sum == 2)
        printf("WED\n");
    else if (sum == 3)
        printf("THU\n");
    else if (sum == 4)
        printf("FRI\n");
    else if (sum == 5)
        printf("SAT\n");
    else if (sum == 6)
        printf("SUN\n");
}

// int d[13]={31,28,31,30,31,30,31,31,30,31,30,31};
// char D[7][5]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
// int main(){
//     int n,m,i;
//     scanf("%d %d",&n,&m);
//     for(i=0;i<n-1;i++)m+=d[i];
//     printf("%s",D[m%7]);
//     return 0;
// }