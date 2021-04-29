#include<stdio.h>
#include<stdlib.h>

int compare (const void * a, const void * b) {
   return ( *(long long int*)a - *(long long int*)b );
}

int main()
{
    long long int n;
    scanf("%lld",&n);
   long long int m;
    scanf("%lld",&m);
    if(m==n){
    printf("NO");
    return 0;}
    //Total and Dirty stairs respectively
    long long int Dirty[m];
    for(long long int i=0;i<m;i++)
    {
        scanf("%lld",&Dirty[i]);
    }
    qsort(Dirty,m,sizeof(long long),compare);

    for(long long int i=0;i<m-2;i++)
    {
        if(Dirty[i+1]==Dirty[i]+1 && Dirty[i+2]==Dirty[i]+2){
        printf("NO");
        return 0;}
    }

    //If first or Last are dirty then its an obvious NO 
    if(Dirty[m-1]==n || Dirty[0]==1)
    {
        printf("NO");
        return 0;
    }

    printf("YES");
    return 0;
}  
