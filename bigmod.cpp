#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); //End of line
#define GCD(x,y) __gcd((x), (y)) //GCD
#define LCM(x,y) ((x / GCD((x), (y))) * y) //LCM
#define max3(a,b,c) max(a, max(b,c)) //max for 3value
#define min3(a,b,c) min(a, min(b,c)) //min for 3value
#define pb push_back
#define mp make_pair
#define I int
#define II long long int
#define fi first
#define se second
#define FOR(a,n) for (int i=a;i<n;++i)
using namespace std;
vector <int> v;
vector <II> v2;
long long int bigmod(int x,int n,int m)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        long long int y=bigmod(x,n/2,m);
        return (y*y)%m;
    }
    else
    {
        return (bigmod(x,n-1,m)*(x%m))%m;
    }
}
//--------------------------------------------UITS
int main()
{

    cout<<bigmod(2,3,5);
   return 0;
}













