#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a,b;
};
double dist(node c,node d)
{
    double f=(c.a-d.a)*(c.a-d.a)+(c.b-d.b)*(c.b-d.b);
    f=sqrt(f);
    return f;

}

int main()
{
    int n;
    cout<<"Enter the number of points\n";
    cin>>n;
    node ar[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the x and y coordinates of "<<i+1<<" point\n";
        scanf("%d%d",&ar[i].a,&ar[i].b);
    }
    double k=INT_MAX,f;
    int aa,bb;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            f=dist(ar[i],ar[j]);
            if(f<k)
            {
                k=f;
                aa=i;
                bb=j;
            }
        }
    }
    cout<<"The minimum distance is "<<k<<" between the points ("<<ar[aa].a<<","<<ar[aa].b<<") and ("<<ar[bb].a<<","<<ar[bb].b<<")\n";
}
