def func_hello():
    l = "hello world hello world"
    return l

def my_find(l,t):
    d = 0
    for i in range(len(l)):
        for j in range(len(t)):
            if l[i + j] == t[j]:
                d += 1
            else:
                d = 0
                break
            if d == len(t):
                return i
s = func_hello()
print(s)
w = my_find(s,"wor")
print(w)

def my_count(l,t):
    d = 0
    f = 0
    for i in range(len(l)):
        for j in range(len(t)):
            if l[i + j] == t[j]:
                d += 1
            else:
                d = 0
                break
            if d == len(t):
                f +=1
    return f
s = func_hello()
print(s)
w = my_count(s,"wor")
print(w)

def my_split(l,t):
    c = 0
    i = 0
    k = ""
    a = []
    while (i < len(l) - len(t)):
        c = 0
        for j in range(len(t)):
            if l[i +j]!= t[j]:
                c = 0
                break
            c += 1
        if c == len(t):
            a.append(k)
            k = ""
            i += len(t)
            continue
        else:
            k += l[i]
        i += 1
    for j in range(i,len(l)):
        k += l[j]

    a.append(k)
    return a
s = func_hello()
print(s)
w = my_split(s,"wor")
print(w)

def my_replace(l,t,d):
    i = 0
    k = ""
    while(i < len(l) - len(t)):
        c = 0
        for j in range(len(t)):
            if l[i + j]!= t[j]:
                c = 0
                break
            c += 1
        if c == len(t):
            i += len(t)
            i -= 1
            for q in d:
                k += q
        else:
            k += l[i]
        i += 1
    for j in range(i,len(l)):
        k += l[j]
    return k
s = func_hello()
print(s)
w = my_replace(s,"wor","banan")
print(w)

def my_upper(l):
    k = ""
    for i in l:
        if ord(i) > 96 and ord(i) < 123:

            k += chr(ord(i) - 32)
    return k
s = "aaaa"
print(s)
q = my_upper(s)
print(q)

def my_lower(l):
    k = ""
    for i in l:
        if ord(i) > 64 and ord(i) < 91:
            k += chr(ord(i) + 32)
    return k
s = "GAGO"
print(s)
w = my_lower(s)
print(w)

def my_isalpha(l):
    for i in l:
        if 64 < ord(i) < 91 or 96 < ord(i) < 123:
            continue
            
        return False
    

    return True
s = "1GAGO"
print(s)
w = my_isalpha(s)
print(w)

def my_isdigit(l):
    for i in l:
        if 47 < ord(i) < 58:
            continue
        return False
    return True
s = "1g72344"
print(s)
d = my_isdigit(s)
print(d)

