N = int(input())
star = 1
for i in range(N*2-1) :
    for j in range(N) :
        if (N-j <= star) :
            print('*',end='')
        else :
            print(' ',end='')
    if i+1 < N :
        star += 1
    else :
        star -= 1
    print()
