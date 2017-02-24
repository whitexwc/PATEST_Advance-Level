#include<cstdio>
int main()
{
    char s[3]={'W','T','L'};
    int k[3];
    double a,temp,ans=1.0;
    for(int i=0;i<3;i++)
    {
        temp=0;
        for(int j=0;j<3;j++)
        {
            scanf("%lf",&a);
            if(a>temp)
            {
                temp=a;
                k[i]=j;
            }
        }
        ans*=temp;

    }
    for(int i=0;i<3;i++) printf("%c ",s[k[i]]);
    printf("%.2f",(ans*0.65-1)*2);
    return 0;
}
