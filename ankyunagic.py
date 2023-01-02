import random

def func(n):
    l = []
    for i in range(n):
        l1 = []
        for j in range(n):
            l1.append(random.randrange(1,9))
        l.append(l1)
    return l
def func_1(l):
    for i in l:
        print(i)
def func_2(l):
    for i in range(len(l)):
        for j in range(len(l)):
            if i == j:
                print(l[i][ -j -1])
d = func(5)
c = func_1(d)
e = func_2(d)
print(e)
