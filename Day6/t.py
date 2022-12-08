def part1():
    with(open('day6\data.txt')) as f:
        input = f.read()
        amount = 0
        while amount == 0:
            for c in range(len(input) - 4):
                current = ""
                for i in range(4):
                    if input[c+i] in current:
                        break
                    else:
                        current += input[c+i]
                if len(current) == 4:
                    amount = c+i+1
                    break

        print(current)
        return amount

print(part1())