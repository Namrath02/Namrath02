#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int LCSubStr(char X[], char Y[], int m, int n)
{
    // Create a table to store
    // lengths of longest
    // common suffixes of substrings.  
    // Note that LCSuff[i][j] contains
    // length of longest common suffix
    // of X[0..i-1] and Y[0..j-1].
 
    int LCSuff[m + 1][n + 1];
    int result = 0; // To store length of the
                    // longest common substring
 
    /* Following steps build LCSuff[m+1][n+1] in
        bottom up fashion. */
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // The first row and first column
            // entries have no logical meaning,
            // they are used only for simplicity
            // of program
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
   long long int t;
   scanf("%lld",&t);

   for(long long int i=0;i<t;i++)
   {
       //string A,B;
       char A[21],B[21];
       scanf("%s",A);
       scanf("%s",B);
       long long int lenA = strlen(A);//A.length();
       long long int lenB = strlen(B);//B.length();

       long long int reqAnswer;

       if(A!=B){
       long long int CommonLen = LCSubStr(A,B,lenA,lenB);
       reqAnswer = lenA + lenB - (2*CommonLen);
         }

    printf("%lld\n",reqAnswer);
   }

   return 0;
}   
