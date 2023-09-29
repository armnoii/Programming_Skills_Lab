number = int(input())
x = (number & 0b10101010) >> 1
y = (number & 0b01010101) << 1
print(x | y)