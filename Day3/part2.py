# Get lines from file
with open ("Day3/data.txt", "r") as file:

    lines = file.read().splitlines()

total = 0
groups = []
prior_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

# Split lines into groups of three
for i, line in enumerate(lines):

    rem = i % 3

    if rem == 2:

        groups.append([
            
            lines[i - (rem)], 
            lines[i - (rem - 1)], 
            lines[i - (rem - 2)]
            
        ])

# Check groups for matching char
for group in groups:

    for char in group[0]:

        if char in group[1] and char in group[2]:

            
            for i, p_char in enumerate(prior_chars):

                if char == p_char:

                    total += i + 1

            break

print(f"Total: {total}")
    