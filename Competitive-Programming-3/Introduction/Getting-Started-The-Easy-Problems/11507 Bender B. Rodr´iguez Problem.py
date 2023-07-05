while True:
    n = int(input())
    if n == 0:
        break
    l = input().split()
    ans = '+x'
    for i in l:
        if i != 'No':
            if ans == '+x':
                if i != '-x':
                    ans = i
            elif ans == '-x':
                if i == '-z':
                    ans = '+z'
                elif i == '+z':
                    ans = '-z'
                elif i == '-y':
                    ans = '+y'
                elif i == '+y':
                    ans = '-y'
            elif ans == '+y':
                if i == '-y':
                    ans = '+x'
                elif i == '+y':
                    ans = '-x'
            elif ans == '-y':
                if i == '-y':
                    ans = '-x'
                elif i == '+y':
                    ans = '+x'
            elif ans == '-z':
                if i == '-z':
                    ans = '-x'
                elif i == '+z':
                    ans = '+x'
            elif ans == '+z':
                if i == '-z':
                    ans = '+x'
                elif i == '+z':
                    ans = '-x'
    print(ans)
