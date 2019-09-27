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
int visited[100];
void bfs(vector<int>v[20])
{
    printf("Enter the starting node : ");
    int start;
    scanf("%d",&start);
    queue<int>q;
    q.push(start);
    visited[start]=1;
    printf("Traversal : ");

    while(!q.empty())
    {
        int x=q.front();
        printf("%d ",x);
        q.pop();
        for(int i=0;i<v[x].size();i++)
        {
            if(visited[v[x][i]]==0)
            {
                int z=v[x][i];
                visited[z]=1;
                q.push(z);
            }
        }
    }

}
int main()
{
    vector<int>v[20];
    int node,edge,n1,n2,x,y;
    scanf("%d %d",&node,&edge);
    for(int i=0;i<edge;i++)
    {
        scanf("%d %d",&n1,&n2);
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
    ///For Printing purpose
   /* for(int i=1;i<=node;i++)
    {
        printf("%d th node : ",i);
        for(int j=0;j<v[i].size();j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }*/

    printf("BFS start :\n");
    bfs(v);
   return 0;
}
