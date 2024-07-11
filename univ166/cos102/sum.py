num1 = [1, 2, 3]
num2 = [[1, 2], [3, 4], [5, 6]]

sum1 = 0
sum2 = 0

for i in num1:
    sum1 = sum1 + i

for j in num2:
    for l in j:
        sum2 = sum2 + l

print("sum1 is: ", sum1)
print("sum2 is: ", sum2)
