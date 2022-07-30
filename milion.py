import random
file1 = open("milionaire.txt")
l = []
press_simbol = ""
question = "questions"
answer = "answers"
correct = "True answer"
for i in file1:
    dic = {}
    value = i.split(":")
    dic[question] = value[0]
    dic[answer] = value[1].split(",")
    dic[correct] = value[2].strip()
    random.shuffle(dic[answer])
print(dic)


    
print(dic[question])
for c in range(len(dic[answer])):
    print(chr(97+ c)+")",dic[answer][c])
for j in range(len(dic)):
    def func():
        press_simbol =input("press a simbol :")
        for i in range(len(dic[answer])):
            if chr(97 + i) == press_simbol and dic[answer][i].replace(" ","") == dic[correct]:
                print("win")
    func()
    print("you muve")
        
                
