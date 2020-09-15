# To find 2^n without performing multiplication
def f(n):
    if n == 0:
        return 1

    ans = 0
    for i in range(n):
        ans = ans + f(i)
    return ans+1 