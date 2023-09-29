A = int(input())
for j in range(0, A):
    Temp = 0
    B = int(input())
    st = str(input())
    count = len(st)

    for i in range(0, count):
        # print(int(st[i]) * B**(count-(i+1)))
        Temp = Temp + (int(st[i]) * B**(count-(i+1)))
        # print(i)

    print(Temp)
