#include <iostream>
using namespace std;
int N,X,A[1109];
//109はバッファを持たせたいだけ
bool Answer=false;
int main(){
    cin>>N>>X;
    for (int i=0;i<=N;i++)cin>>A[i];
    //全探索（変数answerはすでにxが見つかったかどうかを表す）
    for (int i=1;i<=N;i++){
        if(A[i]==X) Answer=true;
    }
    //出力
    if (Answer==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}