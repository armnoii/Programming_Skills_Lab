n = str(input())
new = n.split(' ')
new = sorted(new)

for i in range(1, len(new)):
    print(new[i])
