N = int(input())
star = 1
flag = False
for i in range(N*2 -1) :
    for j in range(1,N*2+1) :
        if(j <= star) :
            print('*',end='')
        elif(j > N*2 - star) :
            print('*',end='')
        else :
            print(' ',end='')
    if star < N and flag == False :
        star += 1
    else :
        flag = True
        star -= 1
    print()

