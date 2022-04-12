#include <stdio.h>
int n;                                  //array size without duplicate
void print(int array[n + 1], int n);
int sum(int array[n + 1], int n);


int main()
{
    printf("Enter n size: ");
    scanf("%d", &n);
    
    int array[n + 1];
    for (int i = 0; i < n; i++)          //array filling
    {
        scanf("%d", &array[i]);
    }
    
    int dupl;
    printf("Enter duplicate element: "); //1 <= dupl <= n
    scanf("%d", &dupl);
    array[n] = dupl;
    
    print(array, n);
    printf("%d", sum(array, n));
}

int sum(int array[n + 1], int n)
{
    int temp = 0;
    for (int i = 0; i < n + 1; i++)
    {
        temp += array[i];
    }
    return temp - (n*(n + 1) / 2);
}

void print(int array[n + 1], int n)
{
    printf("\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", array[i]);
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return;
}