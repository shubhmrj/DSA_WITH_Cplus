def build_hash(matrix):
    seen = set()

    for row in matrix:
        for val in row:
            seen.add(val)

    return seen


matrix = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
]

hash_set = build_hash(matrix)

# queries
print(5 in hash_set)   # True
print(10 in hash_set)  # False