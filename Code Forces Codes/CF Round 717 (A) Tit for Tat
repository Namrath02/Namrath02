#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

    for(long long int i=0;i<t;i++)
    {
        long long int N;
        scanf("%lld",&N);
        long long int K;
        scanf("%lld",&K);
        long long int a[N];
        for(long long int j=0;j<N;j++)
        {
            scanf("%lld",&a[j]);
        }
        //Now we have array of the numbers, we need smallest values first, so make early values small
        //X is the number of operations we did
        long long int x=0;
        long long int init=-1,final=N-1;
            while(x<K&&init<final){
                        init++;
                         while(a[init]>0&&init<final&&x<K)
                        {
                             a[init]--;
                             a[final]++;
                             x++;
                        }
                     }

        //Now we used all operations!

        for(long long int j=0;j<N;j++)
        {
            printf("%lld ",a[j]);
        }
        printf("\n");
    }

    return 0;
}
