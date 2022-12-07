# Variable declarations
crates = []
moves = []

def print_crates():

    for crate_set in crates:

        print(crate_set)

# Get lines from file
with open("Day5/crates.txt", "r") as file:

    lines = file.read().splitlines();

# Get each row of crates and add them to list
for line in lines:

    crates.append(line.split(","))

print_crates()

# Get moves and add them to array of ints
with open("Day5/moves.txt", "r") as file:

    lines = file.read().splitlines()

for line in lines:

    line = line.replace("move ", "").replace(" from ", "").replace(" to ", "")
    moveset = [int(num) for num in line]

    moves.append(moveset)

# Loop through each move and apply it to the corresponding crate/s
for move in moves:

    count = move[0]
    start = move[1] - 1
    end = move[2] - 1

    for i in range(count):

        try:

            crate_to_move = crates[start][-1]
            crates[end].append(crate_to_move)
            del crates[start][-1]

            print()
            print_crates()

        except IndexError as e:

            print("ERROR")

print()
print_crates()
print()

top = ""

for crate_set in crates:

    top += crate_set[-1] if len(crate_set) > 0 else ""

print(top)
