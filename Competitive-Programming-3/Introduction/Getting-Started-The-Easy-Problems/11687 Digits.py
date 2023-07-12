while True:
    n = input()
    if n == "END":
        break
    if n == '1':
        print(1)
    elif len(n) == 1:
        print(2)
    elif len(n) < 10:
        print(3)
    else:
        print(4)
