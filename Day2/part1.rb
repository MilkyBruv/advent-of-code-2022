score = 0
lines = []

def calcScore(line)

    finalScore = 0

    if line[2] == "X"

        finalScore += 1
        
        return finalScore

    end

    if line[2] == "Y"

        finalScore += 2
        
        return finalScore

    end

    if line[2] == "Z"

        finalScore += 3
        
        return finalScore

    end

end

File.readlines("Day2/data.txt").each do | line |
    
    lines << line

end

for line in lines

    line = line.chomp

    if line == "A X" || line == "B Y" || line == "C Z"

        draws += 1

        score += 3 + calcScore(line)

        next

    end

    if line == "A Y" || line == "B Z" || line == "C X"

        wins += 1

        score += 6 + calcScore(line)

        next

    end

    if line == "A Z" || line == "B X" || line == "C Y"

        loses += 1

        score += 0 + calcScore(line)

        next

    end

end

puts "Score: #{score}"

# A X   = ROCK        = 1
# B Y   = PAPER       = 2
# C Z   = SCISSORS    = 3
# WIN   = 6
# DRAW  = 3
# LOSE  = 0