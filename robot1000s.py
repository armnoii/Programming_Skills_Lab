direction = str(input())
m = int(input())

n = 0
s = 0
e = 0
w = 0

p = 0

sum1 = 0
sum2 = 0

for i in direction:
    if i == "N":
        n += 1

    elif i == "S":
        s += 1

    elif i == "E":
        e += 1

    else :
        w += 1

if n <= s and n > 0:
    while n <= s and n > 0 and p > 0:
        n -= 1
        p -= 1

elif s < n and s > 0:
    while s < n and s > 0 and p > 0:
        s -= 1
        p -= 1

elif e <= w and e > 0:
    while e <= w and e > 0 and p > 0:
        e -= 1
        p -= 1

if w < e and w > 0:
    while w < e and w > 0 and p > 0:
            w -= 1
            p -= 1

while p > 0:
    if n > 0:
        n -= 1
    elif s > 0:
        s -= 1
    elif e > 0:
        e -= 1
    else:
        w -= 1

    p -= 1

sum1 = abs(n - s)
sum2 = abs(e - w)

print(2 * (sum1 + sum2))