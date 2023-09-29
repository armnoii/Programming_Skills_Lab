N, M = map(int, input().split())
zero = 0
count = 0

NN = [3,1,4,6,7,3,5]
MM = [5,4,6,2]
NN2 = []

n = 0
n1 = 0

if N >= 1 and N <= 1000 and M >= 1 and M <= 1000:

    # while n < int(N):
    #     inp = int(input())
    #     NN.append(inp)
    #     n += 1
    #
    # while n1 < int(M):
    #     inp1 = int(input())
    #     MM.append(inp1)
    #     n1 += 1

    lenlist = len(NN)

    for i in MM:
        while zero < lenlist:

            if NN[zero] > i and zero == lenlist - 1 and NN[zero - 1] == 0:
                NN[zero] = 0
                count += 1

            elif NN[zero] > i and zero == lenlist - 1:
                NN[zero] = 0
                NN[zero - 1] = 0
                count += 2

            elif NN[zero] > i:
                NN[zero] = 0

                if zero > 0 and NN[zero - 1] > 0:
                    NN[zero - 1] = 0
                    count += 1

                if NN[zero + 1] <= i and NN[zero + 1] > 0:
                    NN[zero + 1] = 0
                    count += 1

                elif NN[zero + 1] > i:
                    NN[zero + 1] = 0
                    NN[zero + 2] = 0
                    count += 2

                elif NN[zero + 1] > i and zero + 1 == (lenlist - 1):
                    NN[zero + 1] = 0
                    count += 1

                elif NN[zero + 1] <= i and zero + 1 == (lenlist - 1) and NN[zero + 1] > 0:
                    NN[zero + 1] = 0
                    count += 1

                elif NN[zero + 1] > i and NN[zero + 2] == 0:
                    NN[zero + 1] = 0
                    count += 1

                count += 1

            zero += 1

        NN2.append(count)
        zero, count = 0, 0

    print(*NN2, sep="\n")

else:
    quit()