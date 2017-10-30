import string
import random

goal = "methinks "

def generateString(n):
    generateWord = ""
    for letter in range(0,n):
        generateWord = generateWord + random.choice(string.ascii_lowercase + ' ')
    return generateWord


def runSim():
    count = 0;
    generateWord = ""
    while (generateWord != goal):
        generateWord = generateString(9)
        count = count+1
        equal = getScore(generateWord, goal)
        if count % 100000 == 0:
            #print(generateWord)
            #print(goal)
            print(getScore(generateWord, goal))
    if(generateWord == goal):
        print(generateWord)
        print(goal)
        print(getScore(generateWord, goal))

def getScore(word, goal):
    equal = [i for i, j in zip(word, goal) if i == j]
    
    return equal

runSim()
