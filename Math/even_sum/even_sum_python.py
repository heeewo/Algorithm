def Harmonic_sum(n):
    if n < 0:
        return 0
    else:
        return 1/(pow(2, n)) + Harmonic_sum(n-1)


num = int(input("정수 입력 : "))
print(Harmonic_sum(num))

