#include<iostream>
#include<algorithm>
using namespace std;
void printAllPermutations(string str){
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
}
int main(){
    string str;
    cin>>str;
    printAllPermutations(str);
    return 0;
}