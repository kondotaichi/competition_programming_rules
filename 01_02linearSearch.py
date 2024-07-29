def main():
    #入力
    N=int(input())
    X=int(input())
    A=[int(input()) for _ in range(N+1)]
    
    #全探索
    Answer=False
    for i in range(1,N+1):
        if A[i]==X:
            Answer=True
            
    #出力
    if Answer:
        print("Yes")
    else:
        print("No")
if __name__=="__main__":
    main()
