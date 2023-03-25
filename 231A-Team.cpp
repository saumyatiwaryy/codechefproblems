#include <iostream>
using namespace std;
int main()
{
    int prob;
    cin>>prob;
    int p,v,t, cnt=0;
    while(prob--)
    {
        cin>>p>>v>>t;
        if(p+v+t>=2)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
};
