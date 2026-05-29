#include<iostream>
using namespace std;
int main()
{
    int i,n,mul=1;
    cout<<"Enter the number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        mul=n*i;
        cout<<n<<" * "<<i<<" = "<<mul<<endl;
    }
    return 0;
}
