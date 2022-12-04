# Pair class
class Pair():

    total = 0

    def __init__(self, line) -> None:
        
        self.nums = line.split(",")

    def get_ranges(self) -> int:

        # Get range of numbers and check for overlaps
        self.left = [
            
            int(self.nums[0].split("-")[0]),
            int(self.nums[0].split("-")[1])
            
        ]

        self.right = [
            
            int(self.nums[1].split("-")[0]),
            int(self.nums[1].split("-")[1])
            
        ]

        if self.left[0] >= self.right[0]:

            if self.left[1] <= self.right[1]:

                return 1

        if self.right[0] >= self.left[0]:

            if self.right[1] <= self.left[1]:

                return 1

        return 0
        

# Get data from file
with open("Day4/data.txt", "r") as file:

    lines = file.read().splitlines()

total = 0

# Get nums from lines and split them up
for line in lines:

    p = Pair(line)
    total += p.get_ranges()

print(f"Total: {total}")