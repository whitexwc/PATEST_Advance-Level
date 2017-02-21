#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100005;
int main()
{
    int n,D,distance[maxn],M,a,b,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&D);
        sum+=D;
        distance[i]=sum;
    }
    scanf("%d",&M);
    for(int i=1;i<=M;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b) swap(a,b);
        int dis=distance[b-1]-distance[a-1];
        if(sum-dis>dis)
            printf("%d",dis);
        else
            printf("%d",sum-dis);
        if(i<M) printf("\n");
    }
    return 0;
}
