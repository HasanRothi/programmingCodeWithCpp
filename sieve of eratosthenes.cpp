
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); //End of line
#define GCD(x,y) __gcd((x), (y)) //GCD
#define LCM(x,y) ((x / GCD((x), (y))) * y) //LCM
#define max3(a,b,c) max(a, max(b,c)) //max for 3value
#define min3(a,b,c) min(a, min(b,c)) //min for 3value
using namespace std;
vector <int> v;
vector <int> v2;
//--------------------------------------------UITS
int seive (int n)
{
    v.resize(n+1,1);
    v[0]=0,v[1]=0;
    for(int i=3;i*i<=n;i+=2)
    {
        if(v[i]==1)
            for(int j=i*i;j<=n;j+=i+i)
        {
            v[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==1) cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    seive(n);

   return 0;
}
