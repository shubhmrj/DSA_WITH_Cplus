anagrams = ["cat","bat","rat","tba","abt","rat","rat"]

for i in range(len(anagrams)):
    
    anagrams[i] = "".join(sorted(anagrams[i]))
    
anagrams = sorted(anagrams)
    
print(anagrams)

res = []

temp = []

for i in range(1,len(anagrams)):
    
    if anagrams[i] == anagrams[i-1]:
        temp.append(anagrams[i-1])
    
    else:
        temp.append(anagrams[i-1])
        res.append(temp)
        temp = []
        
temp.append(anagrams[-1])
res.append(temp)        
        
print(res)