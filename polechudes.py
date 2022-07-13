text = open("polechudes.txt")
word = ""
count = 0
count_life = False
count_limit = 3
for i in text:
    value = i.split(":")
answer = value[1].strip()
stars = "*" * len(answer)
print(stars)
print(value[0])
while word != answer:
    press_simbol = input("press a simbol:")
    word = ""
    for j in range(len(answer)):
        if press_simbol == answer[j]:
            word += press_simbol
        else:
            word += stars[j]
    stars = word
    print(stars)

