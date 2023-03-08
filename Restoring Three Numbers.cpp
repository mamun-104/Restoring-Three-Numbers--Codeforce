#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[4];
    int a,b,c;

    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }

    //int n = sizeof(x)/sizeof(x[0]);
    //cout<<n<<"\n";

    sort(x,x+4);

    for(int i=0;i<3;i++)
    {
        cout<<x[3]-x[i]<<" "; /// Because, from (a+b+c), if we remove (a+b), we get c. Same for all
    }






    return 0;
}







