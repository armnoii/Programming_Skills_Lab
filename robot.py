n = str(input(" "))
N = 1
S = -1
W = -1
E = 1
X = 0
Y = 0
for i in n:
    if i == 'N':
        Y = Y + 1
    if i == 'E':
        X = X + 1
    if i == 'S':
        Y = Y + -1
    if i == 'W':
        X = X + -1
    if i == 'Z':
        X = 0
        Y = 0
print(X, Y)