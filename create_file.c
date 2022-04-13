#include <iostream>
#include <fstream>
#include <ctime>
 
int prov(int lim,int mas[],int digit)
{
    int i;
    for(i=0;i<lim;i++)
        if(mas[i]==digit)
            return 1;
    return 0;
}
 
int main()
{
    int mas[100000];
    int i,j;
    srand(time(0));
    for(i=0;i<100000;i++)
    {
        do
        {
            mas[i]=1+rand()%10+rand()%100+rand()%1000+rand()%10000+rand()%100000;
        }
        while(prov(i,mas,mas[i]));
    }
    std::ofstream fout("123.txt");
    for (i = 0; i < 100000; i++)
    {
        fout << ("%d", mas[i]) << " ";
        if (i % 10 == 0)
        {
            fout << ("\n");
        }
    }
}