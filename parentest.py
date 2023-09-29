def check(brackets):
    lis = []
    for char in brackets:
        if char in ["(", "{", "["]:
            lis.append(char)
        else:
            if not lis:
                return False
            current_char = lis.pop()

            if current_char == '(':
                if char != ")":
                    return False
            if current_char == '{':
                if char != "}":
                    return False
            if current_char == '[':
                if char != "]":
                    return False
    if lis:
        return False
    return True

N = int(input())
zero = 0
while zero < N:
    ip = str(input())
    if check(ip):
        print("yes")
    else:
        print("no")
    zero += 1
