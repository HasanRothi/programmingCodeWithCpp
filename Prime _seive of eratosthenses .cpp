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
    int c=0;
    v[0]=0,v[1]=0;
    v[2]=1;
    v2.push_back(2),c++;
    for(int i=3;i<=n;i+=2)
    {
        if(v[i]==1) v2.push_back(i),c++;

        for(int j=2;i*j<=n;j++)
        {
            v[i*j]=0;
        }
    }
    ///specific prime number cheek
    if(binary_search(v2.begin(),v2.end(),n)) cout<<n<<" is Prime \n";
    else cout<<n<<" is Not prime\n";
    ///count 1-n prime number and print
    cout<<"total number : "<<c<<endl;
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    seive(n);

   return 0;
}
