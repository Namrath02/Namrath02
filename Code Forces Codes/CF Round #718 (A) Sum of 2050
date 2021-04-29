#include<stdio.h>


int main()
{
    long long int t;
    scanf("%lld",&t);
    for(long long int i=0;i<t;i++)
    {
        long long N;
        scanf("%lld",&N);

        if(N%2050==0)
        {
            //now number is div by 2050
            long long int Div;
            Div = N/2050;
            long long int sum=0;
            while(Div!=0)
            {
                long long int temp= Div%10;
                sum=sum+temp;

                Div=Div/10;
            }

            printf("%lld\n",sum);
        }
        else
        printf("-1\n");
    }
return 0;
}
