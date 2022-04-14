#include <stdio.h>
int n;                                  //array size without duplicate
void print(int array[n], int n);
int second(int array[n], int n);

int main()
{
    printf("Enter n size: ");
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++)          //array filling
    {
        scanf("%d", &array[i]);
    }
    
    int dupl;
    printf("Enter duplicate element: "); //1 <= dupl <= n
    scanf("%d", &dupl);
    array[n] = dupl;
    
    print(array, n);
    printf("%d", second(array, n));
}

int second(int array[n], int n)
{
    int secarr[n - 1];
    for (int i = 0; i < n; i++)
    {
        secarr[i] = -1;
    }
    for (int i = 1; i <= n; i++)
    {
        int ind = array[i];
        secarr[ind]++;
        if (secarr[ind])
            return array[i];
    }
}

void print(int array[n], int n)
{
    printf("\n");
    for (int i = 0; i <= n; i++)
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