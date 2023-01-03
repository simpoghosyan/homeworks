def quick(l):
    left = []
    right = []
    center = []
    if len(l) > 1:
        elem = l[0]
        for i in l:
            if i < elem:
                left.append(i)
            elif i == elem:
                center.append(i)
            elif i > elem:
                right.append(i)
        return quick(left)+ center + quick(right)
    else:
        return l
  
print(quick([4,2,9,0,1,3,7]))


