#include<iostream>
using namespace std;
int N,K,P[109],Q[109];
bool Answer=false;
int main(){
    cin>>N>>K;
    for (int i=0;i<N;i++) cin>>P[i]>>Q[i];
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if(P[i]+Q[j]==K)
            Answer=true;
        }
    }
    //出力
    if (Answer==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}