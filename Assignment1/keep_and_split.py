a = [0, 0]
sz = 30
for i in range(2, sz + 1):
    score = 0
    for j in range(1, i):
        first = j
        second = i - j

        if(first > j):
            break

        curr_score = first*second + a[first] + a[second]
        score = max(curr_score, score)
    print(f"{i} -> {score}")
    a.append(score)

print(a)
print(len(a))


a = [0, 0]
sz = 30
for i in range(2, sz + 1):
    score = 1000
    for j in range(1, i):
        first = j
        second = i - j

        if(first > j):
            break

        curr_score = first*second + a[first] + a[second]
        score = min(curr_score, score)
    print(f"{i} -> {score}")
    a.append(score)

print(a)
print(len(a))
        




# 987 6765 17711