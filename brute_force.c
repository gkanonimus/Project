#include <stdio.h>
int n;                                  //array size without duplicate
void print(int array[n], int n);
int brute_force(int array[n], int n);

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
    int answer = brute_force(array, n);
    printf("%d", answer);
}

int brute_force(int array[n], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (array[i] == array[j])
                return array[i];
        }
    }
    return -1;
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