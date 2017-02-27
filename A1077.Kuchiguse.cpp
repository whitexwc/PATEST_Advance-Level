#include<cstdio>
#include<cstring>
void reverse(char s[])
{
    int len=strlen(s);
    for(int i=0;i<len/2;i++)
    {
        char temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
}
int main()
{
    int N,pos=0,min_len=300;
    char s[100][260];
    char temp[260];
    scanf("%d",&N);
    getchar();
    for(int i=0;i<N;i++)
    {
        gets(s[i]);
        reverse(s[i]);
        if(min_len>strlen(s[i])) min_len=strlen(s[i]);
    }
       for(int i=0;i<min_len;i++)
    {
        bool same=true;
        for(int j=1;j<N;j++)
        {
            if(s[j][i]!=s[0][i])
            {
                same=false;
                break;
            }
            else ;
        }
        if(same) pos++;
        else break;
    }
    if(pos==0)
        printf("nai");
    else
    {
        for(int i=pos-1;i>=0;i--)
            printf("%c",s[0][i]);
    }
    return 0;

}
