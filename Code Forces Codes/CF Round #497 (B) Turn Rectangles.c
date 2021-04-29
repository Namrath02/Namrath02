#include<stdio.h>
struct Rectangle
{
    long long int Length;
    long long int Width;
}a[1000000];

void swap(long long int i)
{
    long long int temp = a[i].Width;
        a[i].Width= a[i].Length;
        a[i].Length = temp;
        return ;
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld %lld",&a[i].Length,&a[i].Width);
    }
    
    if(a[0].Width>a[0].Length)
    {
       swap(0);
    }
    for(long long int i=1;i<n;i++)
    {
        if(a[i].Width>a[i].Length)
        {
            if(a[i-1].Length>=a[i].Width)
            swap(i); //swap length,width
            else if(a[i].Length>a[i-1].Length)
            {
                printf("NO");
                goto END;
            }
        }
        if(a[i].Length>=a[i].Width)
        {
            if(a[i-1].Length>=a[i].Width && a[i].Length>a[i-1].Length)
            swap(i); //swap length,width
            else if(a[i].Width>a[i-1].Length)
            {
                printf("NO");
                goto END;
            }
        }
    }
    printf("YES");
    END:
    return 0;
}
