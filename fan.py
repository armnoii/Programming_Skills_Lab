n = int(input())
joy = 0
jaew = 0

for i in range(0, n):
    ip = int(input())

    if ip % 60 == 0:
        continue
    if (ip // 60) % 2 != 0:
        jaew += 1
    if (ip // 60) % 2 == 0:
        joy += 1

print(joy, jaew)
if jaew > joy:
    print("Jaew")
if joy > jaew:
    print("Joy")
if joy == jaew:
    print("Draw")

