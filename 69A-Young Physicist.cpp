#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int x,y,z,xs(0),ys(0),zs(0);
    while(t--)
    {
        cin>>x>>y>>z;
        xs+=x;
        ys+=y;
        zs+=z;
        
    }
    if(xs==0&&ys==0&&zs==0)
    cout<<"YES";
    else
    cout<<"NO";
};
