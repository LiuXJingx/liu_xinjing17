#include <iostream>

using namespace std;

int main()
{
    int a;
    int h;
    int m;
    int i=1;
    cout<<"Please input a number: ";
    cin>>a;
    while(a!=0)
    {
        m=a%2;
        h=h+m*i;
        a=(a-m)/2;
        i=i*10;
    }
    cout<<"The decimal form is: "<<h<<endl;
    return 0;
}
