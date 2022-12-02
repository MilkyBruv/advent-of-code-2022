score = 0
lines = []

File.readlines("Day2/data.txt").each do | line |
    
    lines << line

end

for line in lines

    line = line.chomp

    if line[2] == "X" # LOSE

        score += 0

        if line[0] == "A" then score += 3 end
        if line[0] == "B" then score += 1 end
        if line[0] == "C" then score += 2 end

        next

    end

    if line[2] == "Y" # DRAW

        score += 3

        if line[0] == "A" then score += 1 end
        if line[0] == "B" then score += 2 end
        if line[0] == "C" then score += 3 end

        next

    end

    if line[2] == "Z" # WIN

        score += 6

        if line[0] == "A" then score += 2 end
        if line[0] == "B" then score += 3 end
        if line[0] == "C" then score += 1 end

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