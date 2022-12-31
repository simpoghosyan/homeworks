def func(n):
    k = 1
    d = n
    for i in range(n):
        for j in range(k):
            print("*",end = "")
        for c in range(d):
            print(" ",end = "")
        print()
        k += 1
        d -= 1
func(5)


print("-----")



def func_1(n):
    d = n - 1
    k = 1
    for i in range(n):
        for j in range(d):
            print(" ",end = "")
        for c in range(k):
            print("*",end = "")
        print()
        d -= 1
        k += 1
func_1(5)
print("-----")
def func_2(n):
    k = n 
    d = n - 2
    for i in range(n):
        for j in range(k):
            print("*",end = "")
        for c in range(d):
            print(" ",end = "")
        print()
        k -= 1
        d += 1
func_2(5)
print("---")

def func_3(n):
    d = n * 2 - 1
    k = 1
    for i in range(n):
        for j in range(d):
            print(" ",end = "")
        for c in range(k):
            print("* ",end = "")
        for f in range(d):
            print(" ",end = "")
        print()
        d -= 2
        k += 2
func_3(5)
print("----")

def func_4(n):

    d = n * 2 - 1
    k = 1
    for i in range(n - 1):
        for j in range(d - 1):
            print(" ",end = "")
        for c in range(k):
            print("* ",end = "")
        for f in range(d):
            print(" ",end = "")
        print()
        d -= 2
        k += 2
    d = 0
    k = n * 2 - 1
    for i in range(n):
        for j in range(d):
            print(" ",end = "")
        for c in range(k):
            print("* ",end = "")
        for f in range(d):
            print(" ",end = "")
        print()
        k -= 2
        d += 2
func_4(5)

def func_5(n):
    d = 0
    k = n * 2 - 1
    for i in range(n):
        for j in range(d):
            print(" ",end = "")
        for c in range(k):
            print("* ",end = "")
        for f in range(d):
            print(" ",end = "")
        print()
        k -= 2
        d += 2
func_5(5)

