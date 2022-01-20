#include<iostream>
#include<vector>
using namespace std;
void findGoldenRectangles(vector<pair<float,float > > vrr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        float ratio=(vrr[i].first>vrr[i].second)?(vrr[i].first/vrr[i].second):(vrr[i].second/vrr[i].first);
        if(ratio<=1.7f && ratio>=1.6f)
            count++;
    }
    cout<<count;
}
int main(){
    int n;
    float l,b;
    cin>>n;
    vector<pair<float,float> > vrr;
    for(int i=0;i<n;i++){
        cin>>l>>b;
        vrr.push_back(make_pair(l,b));
    }
    findGoldenRectangles(vrr,n);
    return 0;
}