while True:
    D, N = input().split()
    if D == '0' and N == '0':
        break
    N = N.replace(D,'')
    if N:
        if N == len(N) * '0':
            print('0')
        else:
            print(N.lstrip("0"))
    else:
        print('0')