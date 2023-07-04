def func(n):
    if n <= 9:
        return n
    n = sum([int(i) for i in str(n)])
    return func(n)


while True:
    try:
        a = input().lower()
        b = input().lower()
        if len(a) == 0:
            break
        ac = 0
        bc = 0
        for i in a:
            if i.isalpha():
                ac += ord(i) - 96
        for i in b:
            if i.isalpha():
                bc += ord(i) - 96
        ac = func(ac)
        bc = func(bc)
        if ac == 0 or bc == 0:
            print("0.00 %")
        else:
            ans = "{:02.2f}".format(min(round((min(ac, bc) / max(ac, bc)) * 100, 2), 100.00))
            print(ans, '%')

    except EOFError:
        break
