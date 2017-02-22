#include<cstdio>
const int max1=1005;
const int max2=2010;
int main()
{
    double a[max1]={},b[max1]={},c[max2]={},n;
    int na,nb,m,count=0;//m,n分别为指数和系数
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
        for(int j=max1-1;j>=0;j--)
        {
            if(a[j])  c[j+m]+=a[j]*n;
        }
    }
    for(int i=0;i<max2;i++)
    {
        if(c[i]!=0.0)  count++;
    }
    printf("%d",count);
    for(int i=max2-1;i>=0;i--)//从大到小输入
    {
        if(c[i]!=0.0)
        {
            printf(" %d %.1f",i,c[i]);
        }
    }
    return 0;
}
