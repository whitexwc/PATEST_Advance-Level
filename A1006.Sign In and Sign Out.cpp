#include<cstdio>
struct student
{
    char num[16];
    int h1,m1,s1,h2,m2,s2;
};
bool sign_in(student a,student b)
{
    if(a.h1!=b.h1) return a.h1<=b.h1;
    else if(a.m1!=b.m1) return a.m1<=b.m1;
    else  return a.s1<=b.s1;
}
bool sign_out(student a,student b)
{
    if(a.h2!=b.h2) return a.h2>=b.h2;
    else if(a.m2!=b.m2) return a.m2>=b.m2;
    else  return a.s2>=b.s2;
}
int main()
{
    int M;
    student temp,in,out;
    in.h1=24,in.m1=30,in.s1=60;
    out.h1=0,out.m1=0,out.s1=0;
    scanf("%d",&M);
    for(int i=0;i<M;i++)
    {
        scanf("%s %d:%d:%d %d:%d:%d",temp.num,&temp.h1,&temp.m1,&temp.s1,&temp.h2,&temp.m2,&temp.s2);
        if(sign_in(temp,in)) in=temp;
        if(sign_out(temp,out)) out=temp;
    }
    printf("%s %s",in.num,out.num);
    return 0;
}
