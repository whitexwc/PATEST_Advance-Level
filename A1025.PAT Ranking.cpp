#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student
{
    char id[13];
    int score;
    int location_num;
    int local_rank;
    int total_rank;
}stu[30000];
bool cmp(Student a,Student b)
{
    if(a.score!=b.score) return a.score>b.score;
    else return strcmp(a.id,b.id)<0;
}
int main()
{
    int n,k,m=0,sum=0;//sum记录本次统计前所有人数
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//i为考场
    {
        scanf("%d",&k);
        for(int j=0;j<k;j++)//j为考场中每个学生
        {
            stu[m].location_num=i;
            scanf("%s",stu[m].id);
            scanf("%d",&stu[m].score);
            m++;
        }
        sort(stu+sum,stu+m,cmp);//在收集一个考场的信息之后立马排一次序方便获得考场排名
        stu[sum].local_rank=1;//把考场第一位同志排名置1
        for(int q=sum+1;q<m;q++)//对同一考场学生进行考场内排名
        {
            if(stu[q].score==stu[q-1].score)
                stu[q].local_rank=stu[q-1].local_rank;
            else
                stu[q].local_rank=q-sum+1;
        }
        sum+=k;
    }
    sort(stu,stu+m,cmp);
    printf("%d\n",m);
    stu[0].total_rank=1;//把第一名的总排名设为第一
    printf("%s %d %d %d\n",stu[0].id,stu[0].total_rank,stu[0].location_num,stu[0].local_rank);//先输出第一名成绩
    for(int i=1;i<sum;i++)
    {
            if(stu[i].score==stu[i-1].score)
                stu[i].total_rank=stu[i-1].total_rank;
            else
                stu[i].total_rank=i+1;
            printf("%s %d %d %d\n",stu[i].id,stu[i].total_rank,stu[i].location_num,stu[i].local_rank);
    }
}
