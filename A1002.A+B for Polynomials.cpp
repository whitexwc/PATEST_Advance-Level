#include<cstdio>
const int maxn=1005;
int main()
{
    double a[maxn]={},b[maxn]={},n;
    int na,nb,m,count=0;//m,n�ֱ�Ϊָ����ϵ��
    scanf("%d",&na);
    for(int i=0;i<na;i++)
    {
        scanf("%d %lf",&m,&n);
        a[m]=n;
    }
    scanf("%d",&nb);
    for(int i=0;i<nb;i++)
    {
        scanf("%d %lf",&m,&n);
        b[m]=n;
    }
    for(int i=0;i<maxn;i++)
    {
        if(a[i]+b[i])  count++;
    }
    printf("%d",count);
    for(int i=maxn-1;i>=0;i--)//�Ӵ�С����
    {
        if(a[i]+b[i])
        {
            printf(" %d %.1f",i,a[i]+b[i]);
        }
    }
}
