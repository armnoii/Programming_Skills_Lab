ip = int(input(""))
mod = ip % 10
while ip >= 10:
    ip = ip//10
digit = ip
print(digit,mod, sep="")