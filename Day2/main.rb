wins = 0
loses = 0
draws = 0

youScore = 0
oppScore = 0

lines = []

def calcYouScore(line)

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

def calcOppScore(line)

    finalScore = 0

    if line[0] == "A"

        finalScore += 1
        
        return finalScore

    end

    if line[0] == "B"

        finalScore += 2
        
        return finalScore

    end

    if line[0] == "C"

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

        youScore += 3 + calcYouScore(line)
        oppScore += 3 + calcOppScore(line)

        

        next

    end

    if line == "A Y" || line == "B Z" || line == "C X"

        wins += 1

        youScore += 6 + calcYouScore(line)
        oppScore += 0 + calcOppScore(line)

        next

    end

    if line == "A Z" || line == "B X" || line == "C Y"

        loses += 1

        youScore += 0 + calcYouScore(line)
        oppScore += 6 + calcOppScore(line)

        next

    end

end

puts "Wins: #{wins}"
puts "Loses: #{loses}"
puts "Draws: #{draws}"

puts "\nTotal Rounds: #{wins + loses + draws}"

puts "\nYour Score: #{youScore}"
puts "\nOpponent Score: #{oppScore}"

# A X   = ROCK        = 1
# B Y   = PAPER       = 2
# C Z   = SCISSORS    = 3
# WIN   = 6
# DRAW  = 3
# LOSE  = 0