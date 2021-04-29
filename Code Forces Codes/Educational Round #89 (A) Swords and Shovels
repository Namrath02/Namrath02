#include<stdio.h>


int main()
{
    long long int t;
    scanf("%lld",&t);

    for(long long int i=0;i<t;i++)
    {
        long long int Stick,Diamond,final;
        scanf("%lld %lld",&Stick,&Diamond);

        if(Stick>Diamond){
        if(Diamond>=((Stick+Diamond)/3))
        final = (Stick+Diamond)/3;
        else
        final = Diamond;
        }

        if(Stick<=Diamond){
        if(Stick>=((Stick+Diamond)/3))
        final = (Stick+Diamond)/3;
        else
        final = Stick;
        }

        printf("%lld\n",final);
        
    }
    
    return 0;
}
