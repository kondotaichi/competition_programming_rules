#include <iostream>
using namespace std;
int A,B;
bool Answer=false;
int main(){
    cin>>A>>B;
    //全探索
    for (int i=A;i<=B;i++){
        if(100%i==0) Answer=true;
    }
    //出力
    if (Answer==true)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}