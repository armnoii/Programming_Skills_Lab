i = 0
n = int(input())
s = n * 4
number = []

groupA = []  # เก็บข้อมูลแต่ละสาย
groupB = []
groupC = []
groupD = []

groupAB = []  # หาผู้ชนะ
groupCD = []

final = []  # คนชนะเลิศ
champion = []

while i != s:
    nn = int(input())
    number.append(nn)
    i = i + 1

groupA.extend(number[0:len(number)//4])
groupB.extend(number[len(number)//4: 2*(len(number)//4)])
groupC.extend(number[(2*(len(number)//4)): 3*(len(number)//4)])
groupD.extend(number[3*(len(number)//4): 4*(len(number)//4)])

groupAB.append(max(groupA)),groupAB.append(max(groupB)),groupCD.append(max(groupC)),groupCD.append(max(groupD))

final.append(max(groupAB)),final.append(max(groupCD))

champion.append(max(final)),champion.append(min(final)), champion.append(min(groupAB)), champion.append(min(groupCD))

for arm in range(0, 4):
    print(number.index(champion[arm], 0, len(number))+1)