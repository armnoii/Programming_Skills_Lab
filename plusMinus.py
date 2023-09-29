ip = int(input())
if ip >= 1 and ip <= 1000:
    s = str(input())
    spl = s.split(' ')
    m = 0
    su = int(spl[0])

    for i in spl:
        if i != '+' and i != '-' and int(i) <= 1000:
            m = m + 1

        if m == ip:
            for k in range(1, len(spl)):
                # print(spl[k+1])
                if spl[k] == '+':
                    su += int(spl[k + 1])
                if spl[k] == '-':
                    su -= int(spl[k + 1])
            print(su)
else:
    quit()
