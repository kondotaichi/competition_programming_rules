import sys

def main():
    N,K=map(int,input().split())
    
    #PとQの配列を初期化
    P=[0]*N
    Q=[0]*N
    
    for i in range(N):
        P[i],Q[i]=map(int,input().split())
    answer=False
    for i in range(N):
        for j in range(N):
            if P[i]+Q[j]==K:
                answer=True
                
    if answer:
        print("yes")
    else:
        print("No")
        
if __name__=="__main__":
    main()