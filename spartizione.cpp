/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;


int main()
{
//  uncomment the following lines if you want to read/write from files
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    int G,P;
    int gemme_rimaste=0;
    int i=0;
    cin >> G >> P;
    P-=1;
    while(G>0)
    {
        i++;
        if(G>i)
            gemme_rimaste+=i;
        else
            gemme_rimaste+=G;
        G= G-i-P;
    }
    cout << gemme_rimaste;
    return 0;
}
