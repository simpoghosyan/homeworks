import random
file1 = open("polechudes.txt")
word = ""
l = []
k = ""
s = 0
for f in file1:
    value = f.split(":")
    l.append(value)
def list_func(l,temp):
    l1 = []
    for i in range(len(l)):
        if i == temp:
            continue
        l1.append(l[i])
    return l1
lists = []
temp_one = random.randrange(0,len(l))
list_1 = l[temp_one]
lists.append(list_1)
l = list_func(l,temp_one)
temp_two = random.randrange(0,len(l))
list_2 = l[temp_two]
lists.append(list_2)
l = list_func(l,temp_two)
temp_three = random.randrange(0,len(l))
list_3 = l[temp_three]
lists.append(list_3)
for c in range(len(lists)):
    tamp_value = lists[c]
    answer = tamp_value[1].strip()
    def func():
        print(tamp_value[0])
        word = ""
        stars = "*" * len(answer)
        print(stars)
        while word != answer:
            press_simbol = input("press a simbol:")
            word = ""
            for j in range(len(answer)):
                if press_simbol == answer[j]:
                    word += press_simbol
                    print("you are print a true simbol :")
                else:
                    word += stars[j]
            stars = word
            print(stars)
    func()
    print("you move on to the next stage")
print("you are win full game")
