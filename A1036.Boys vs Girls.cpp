#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
struct Student
{
    string name,id;
    char gender;
    int score;
}boys,girls,temp;
int main()
{
    boys.name="Absent";
    boys.id="";
    boys.score=101;
    girls.name="Absent";
    girls.id="";
    girls.score=-1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>temp.name>>temp.gender>>temp.id>>temp.score;
        if(temp.gender=='M')
        {
            if(temp.score<=boys.score) boys=temp;
        }
        if(temp.gender=='F')
        {
            if(temp.score>=girls.score) girls=temp;
        }
    }
    cout<<girls.name;
    if(girls.id=="");//为了强行用一下string,格式控制写成了这个鬼样子
    else cout<<' '<<girls.id;
    cout<<endl<<boys.name;
    if(boys.id=="");
    else cout<<' '<<boys.id;
    cout<<endl;
    if(boys.score==101||girls.score==-1) printf("NA");
    else printf("%d",girls.score-boys.score);
    return 0;
}
