NX, K = map(int, input().split())
zero = 0

friend = []
walker = []

while zero < NX:
    num = int(input())

    if num > 1:
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                walker.append(1)
                break
        else:
            friend.append(1)

    else:
        walker.append(1)

    zero = zero + 1

# print("waker ", walker)
# print("friend ", friend)

if ((sum(friend) + K) - sum(walker)) > 0:
    print("YES")
else:
    print("NO")

