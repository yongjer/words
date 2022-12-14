s = input()
s = s.split()
s = list(s)
num = input()
num = num.split()
num = list(num)
for i in range(len(num)):
    num[i] = int(num[i])
ans = []
for i in num:
    ans.append(s[i-1])
print(" ".join(ans))