#include<cstdio>
#include<cstring>
struct students
{
    char name[11];
    char password[11];

}ans[1005];
int main()
{
    int N,M=0,i,j;
    bool flag=0;
    students temp;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%s %s",temp.name,temp.password);
        for(j=0;temp.password[j];j++)
        {
            if(temp.password[j]=='1')
            {
                flag=1;
                temp.password[j]='@';
            }
            else if(temp.password[j]=='0')
            {
                flag=1;
                temp.password[j]='%';
            }
            else if(temp.password[j]=='l')
            {
                flag=1;
                temp.password[j]='L';
            }
            else if(temp.password[j]=='O')
            {
                flag=1;
                temp.password[j]='o';
            }
            else;
        }
        if(flag)
        {
            ans[M]=temp;
            M++;
        }
        else;
        flag=0;
    }
    if(M==0)
    {
        if(N==1)
        {
            printf("There is 1 account and no account is modified");
        }
        else
            printf("There are %d accounts and no account is modified",N);
    }
    else
    {
        printf("%d\n",M);
        for(i=0;i<M;i++)
        {
            printf("%s %s\n",ans[i].name,ans[i].password);
        }
    }
    return 0;
}
