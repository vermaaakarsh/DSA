#include<iostream>
using namespace std;
void TOH(int n,char sour,char aux,char dest)
{
    static int steps=0;
    if(n==0)
        return;
    TOH(n-1,sour,dest,aux);
    cout<<"Step "<<++steps<<": Move disk "<<n<<" from "<<sour<<" to "<<dest<<endl;
    TOH(n-1,aux,sour,dest);
}
int main()
{
    int n;
    cin>>n;
    TOH(n,'S','A','D');
    return 0;
}