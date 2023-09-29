n = int(input())
n1 = 0   # แลก
n2 = 0  # ที่เหลือ
suM = []
st = n
while True:
    if n == 1:
        break
    if n == 2:
        n = n + 1
        continue
    if st == n:
        suM.append(n)
        n1 = n//3
        suM.append(n1)
        n2 = n - (n1*3)
        n = n1 + n2
        continue
    else:
        n1 = n // 3
        suM.append(n1)
        n2 = n - (n1 * 3)
        n = n1 + n2
        continue

print(sum(suM))