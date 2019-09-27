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
int edge_id[100];
void dfs(vector<int>v[20])
{

    printf("Enter the starting node : ");
    int start;
    ///take starting node for dfs
    scanf("%d",&start);
    ///Stack for calculating edge , that means to check edge (connection of node to node)
    ///Puru dfs ta k serial wise calculation korar jonno stack ta drkar
    stack<int>s;
    s.push(start);
    printf("Traversal : ");

    while(!s.empty())   ///Stack empty na hoya porjonto kaj cholbe
    {
        int x=s.top();
        s.pop();
        ///edge_id array ta 2d vector er proti ta row er aktar por akta values niye kaj korar jonno use kora hoise
        ///and ata increse kore kore proti ta row er so value visited kina cheak kora hobe.
          while(edge_id[x]<v[x].size()) ///edge_id te x position er values jodi vector er x position er somon hoye thake tar mane x position er sob value cheak korar hoye gese.R atar maddome amra ei loop theke ber hobo and condition false hoile dukhte e parbo na , karon tokhon cheak korar drkar nei.
          {
              ///take the value of current row
              int z=v[x][edge_id[x]];
              edge_id[x]++;
              ///Value ta visited kina cheak kora hoise
              if(visited[z]==0)
              {
                  printf("%d ",z);
                  ///Visited kora holo jeno next time ei node e na asa hoy
                  visited[z]=1;
                  ///First e current node then new visited node push kora hoise ,karor amra new visited node theke abr suru korbo
                  ///Then new node er kono parent na pele seta pop hobe then pichon theke tar ager values that means 'x'
                  s.push(x);
                  s.push(z);
                  break;
              }
          }
    }

}
int main()
{
    vector<int>v[20];
    int node,edge,n1,n2,x,y;
    ///Take number of node and number of edge between nodes
    scanf("%d %d",&node,&edge);
    for(int i=0;i<edge;i++)
    {
        ///take edge
        scanf("%d %d",&n1,&n2);
        ///Store edge (connection of nodes)
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

    printf("DFS start :\n");
    dfs(v);
   return 0;
}
