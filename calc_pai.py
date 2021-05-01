
def f(x):
    return (1 - x ** 2) ** 0.5

def a(n):
    a_sum = 0
    for k in range(1, n + 1):
        a_sum += f(k / n)
    return a_sum / n

def b(n, a):
    b_sum = 0
    b_sum += (f(0) - f(1)) / n
    b_sum += a
    return b_sum
'''
def b(n, a):
    b_sum = 0
    for k in range(0, n):
        b_sum += f(k / n)
    return b_sum / n
'''
n = 100000000
a = a(n)
b = b(n, a)
print("n = {}, {} < π < {}".format(n, a * 4, b * 4))
