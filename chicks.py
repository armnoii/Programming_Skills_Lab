N = int(input())
su = 0
cal = 0

if N >= 1 and N <= 20:
    for i in range(0, N+1):
        if i == 1:
            su = su + i
            cal = su

        if i >= 2 and i < 6:
            su = (su * 2) + cal
            cal = su

        if i == 6:
            su = (su * 2) - 1 + cal
            cal = su

        if i > 6 and i < 12:
            su = (su * 2) + cal
            cal = su

        if i == 12:
            su = (su * 2) - 1 + cal
            cal = su

        if i > 12 and i < 18:
            su = (su * 2) + cal
            cal = su

        if i == 18:
            su = (su * 2) - 1 + cal
            cal = su

        if i > 18:
            su = (su * 2) + cal
            cal = su

    print(su)
else:
    quit()
