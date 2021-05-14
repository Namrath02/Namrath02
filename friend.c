#include<stdio.h>
#include<stdlib.h>

#define ArjunHeight 0.5

int compare (const void * a, const void * b) 
{
   return ( *(int*)a - *(int*)b ); 
}

int main()
{
    int roads;
    scanf("%d",&roads);

    for(int i=0;i<roads;i++)
    {
        int N,Wage;
        scanf("%d %d",&N ,&Wage);

        int HeightMatrix[N];
        for(int j=0;j<N;j++)
         scanf("%d",&HeightMatrix[j]);
        

        int Count=1;
        int FirstHeight= HeightMatrix[0];
        int min= FirstHeight;
       for(int j=0;j<N;j++)
       {
           if(HeightMatrix[j]>min)
           {
               Count++;
               min = HeightMatrix[j];
           }
       }

       printf("%d\t",Count*Wage);
    }   
        return 0;
}
