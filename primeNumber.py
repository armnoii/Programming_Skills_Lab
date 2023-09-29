ip = int(input(""))
for num in range(2, ip):
    if ip % num == 0:
        print("NO")
        break
    else:
        print("YES")
        break


