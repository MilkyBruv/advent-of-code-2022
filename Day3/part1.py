# Get lines from file
with open ("Day3/data.txt", "r") as file:

    lines = file.read().splitlines()

total = 0
prior_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

for line in lines:

    # Split each line in half
    left, right = line[:len(line) // 2], line[len(line) // 2:]

    # Check for matching chars in both halves
    match_char = ""
    
    for char in left:

        if char in right:

            match_char = char
            break

    # Get priority value relative to matching char
    for i, char in enumerate(prior_chars):

        if match_char == char:

            total += i + 1

            print(f"{match_char} = {i + 1}")

print(total)
    