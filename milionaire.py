import random
file1 = open("milionaire.txt")
l = []
k = 0
dic = {}
question = "questions"
answer = "answers"
correct = "corrects"
press_simbol = ""
for i in file1:
    dic = {}
    value = i.split(":")
    dic[question] = value[0]
    dic[answer] = value[1].split(",")
    dic[correct] = value[2].strip()
    l.append(dic)
    random.shuffle(dic[answer])
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
for j in range(len(lists)):
    quest = lists[j]["questions"]
    answe = lists[j]["answers"]
    corr = lists[j]["corrects"]
    for c in range(len(answe)):
        print(chr(97 + c)+ ")",answe[c])
    print(quest)
    press_simbol = input("press a simbol :")
    index = ord(press_simbol) - ord("a")
    if  answe[index].replace(" ","")== corr:
        print("you win")
    else:
        print("you are bomj")
        break
        
                
    
    
    

    
     

                
        


