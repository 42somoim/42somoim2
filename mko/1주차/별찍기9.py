N = int(input())
N = N * 2 - 1
for i in range((N+1)//2) :
    for j in range(N) :  
        if (j >= i and j < N-i) :
            print('*',end='')
        elif (j<i) :
            print(' ',end='')
    print()
for i in range(N//2-1,-1,-1) :
    for j in range(N) :
        if (j>=i and j < N-i) :
            print('*',end='')
        elif (j<i) :
            print(' ',end='')
    print()