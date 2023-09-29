
T = int(input())
def tidy(num):
  l=len(num)
  sNum = set(num)
  tSet = {'1', '0'}
  if len(sNum) == 1:
      return num
  elif int(num[0]) == 9:
      return "8"+(l-1)*"9"
  elif sNum == tSet:
      return "9"*(l-1)
  else:
      t=""
      for i in range(0,l):
          iN = int(num[i])
          if iN > int(num[i+1]):
              if iN-1 != 0:
                  t = t + str(iN-1)
              return (t + "9" * (l-i-1))
          else:
              t = t+num[i]

          if i == l - 2:
              break
      return num


for i in range(T):
  num = input()
  print("Case #{}: {}".format(i+1, tidy(num)))
  print("--- %s seconds ---" % (time.time() - start_time))