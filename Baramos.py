N, T = map(int, input().split())

if N >= 1 and T <= 100000 and N >= T:
    spl = []
    su = []

    for i in range(0, N):
        home = int(input())
        spl.append(home)

    for k in range(T):
        su.append(max(spl))
        spl.remove(max(spl))

    print(sum(su))

else:
    quit()

