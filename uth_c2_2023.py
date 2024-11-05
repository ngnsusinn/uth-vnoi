def check(y):
    sy = str(y)
    s = sum(1 for d in sy if d != '0')
    return s <= 1

def y2luck(y):
    y2 = y
    if (check(y)):
        y2 += 1
    while (check(y2) == False):
        y2 += 1
    return y2 - y

y = int(input())
print(y2luck(y))