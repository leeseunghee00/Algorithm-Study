#include <stdio.h>

int que[500000];

int main()
{
    int n, front=0, rear;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
        que[i] =i+1;
    rear = n-1;

    while(1)
    {
        front = (front+1)%n;
        if(front == rear)
            break;
        rear = (rear+1)%n;
        que[rear] = que[front];
        front = (front+1) % n;
        if( front == rear) 
            break;
    }
    printf("%d\n", que[front]);
}