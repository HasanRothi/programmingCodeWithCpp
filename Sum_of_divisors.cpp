#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); //End of line
#define GCD(x,y) __gcd((x), (y)) //GCD
#define LCM(x,y) ((x / GCD((x), (y))) * y) //LCM
#define max3(a,b,c) max(a, max(b,c)) //max for 3value
#define min3(a,b,c) min(a, min(b,c)) //min for 3value
using namespace std;
vector <int> v;
vector <int> v2;
//-----------------------------------------------------------------------Easy World
int NOD (int n)
{
    int nod=1,x=n;
    for(int i=2;i*i<=n;i++)
    {
        if(x%i==0)
        {
           int c=0;
            while(x%i==0) ///ei while loop ta utpadoke bislesoner moto kore divisors gulur count dibe
            {
                x=x/i;
                c++;
                //cout<<x<<" ";
            }
            int z=pow(i,c+1)-1;
            int y=(i-1);
            int q=z/y;
            nod=nod*q;
            //cout<<q<<" "<<nod<<endl;
        }
    }
    return nod;
}
int main()
{
   int n;
   cin>>n;
    cout<<NOD(n);

   return 0;
}

