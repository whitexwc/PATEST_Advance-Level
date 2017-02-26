#include<cstdio>
int main()
{
    int a,b,sum,i=0,j=0,k;//k记录逗号前的位数
    int ans[10];
    scanf("%d %d",&a,&b);
    sum=a+b;
    if(sum<0)
    {
        printf("-");
        sum=sum*(-1);
    }
    else;
    if(sum==0) printf("0");//如果下面的循环用do while则不需要这一句
    while(sum)
    {
        ans[i++]=sum%10;
        sum/=10;
    }
    if(i>3) k=i%3;
    for(--i;i>=0;i--)
    {
        printf("%d",ans[i]);
        ++j;
        if(j<=k)
        {
            if(j==k)
            printf(",");
        }
        else
        {
            if((j-k)%3==0&&i)
                printf(",");
        }

    }
    return 0;
}
