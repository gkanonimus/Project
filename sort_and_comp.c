#include <stdio.h>
int n;                                  //array size without duplicate
void print(int array[n], int n);
void qsortRecursive(int *mas, int size);
int compare(int array[n], int n);

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
    
    int first = 1;
    int last = n - 1;
    int *mas = array;
    qsortRecursive(mas, n);
    print(array, n);
    printf("%d", compare(array, n));
}

void qsortRecursive(int *mas, int size)
{
    int i = 0;
    int j = size;
    int mid = mas[size / 2];
    do
    {
        while(mas[i] < mid)
            i++;
        while(mas[j] > mid)
            j--;
        if (i <= j)
        {
            int tmp = mas[i];
            mas[i]  = mas[j];
            mas[j]  = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0)
        qsortRecursive(mas, j + 1);
    if (i < size)
        qsortRecursive(&mas[i], size - i);
}

int compare(int array[n], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == array[i + 1])
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