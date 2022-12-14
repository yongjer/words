s = "the only thing necessary for the triumph of evil is for good men to do nothing"
s = s.split()
s = list(s)
num = "1 12 3 10 15 16"
num = num.split()
num = list(num)
for i in range(len(num)):
    num[i] = int(num[i])
ans = []
for i in num:
    ans.append(s[i-1])
print(" ".join(ans))