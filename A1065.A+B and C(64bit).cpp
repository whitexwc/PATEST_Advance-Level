#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        long long int a,b,c;
        bool flag;
        cin>>a>>b>>c;
        if(a>0&&b>0&&a+b<0) flag=1;
        else if(a<0&&b<0&&a+b>0) flag=0;
        else if(a+b>c) flag=1;
        else flag=0;
        if(flag) cout<<"Case #"<<i+1<<": true"<<endl;
        else cout<<"Case #"<<i+1<<": false"<<endl;
    }
    return 0;
}
