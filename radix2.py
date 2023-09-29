A = int(input())

for j in range(0, A):
    result = ""
    B = int(input())
    div = int(input())

    if B == 0:
        result = 0
    else:
        while B != 0:
            remainder = B % div
            B //= div
            result = str(remainder) + result

    print(result)
