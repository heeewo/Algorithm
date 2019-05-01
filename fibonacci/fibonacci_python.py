def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)


n = int(input("정수 입력: "))
print(n, "번째 피보타치 수 =", fib(n))

