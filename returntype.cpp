#include<iostream>
using namespace std;

int getsquare(int n)
{
    return n*n; 
}
int main()
{
    int num;
    cout<<"enter a number:"<<endl;
    cin>>num;
    int square=getsquare(num);
    cout<<"square is = "<<square;
    return 0; 
}