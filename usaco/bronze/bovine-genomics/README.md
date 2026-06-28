## Bovine Genomics (USACO Bronze)

For this complete search problem, I used 3 arrays in total. I used one to keep track of spotty cow DNA strands, one to keep track of plain cow DNA strands, and then a 2x4 boolean `letters` array to keep track of whether or not spotty cows and plain cows had the same genetic letter at position j (for each position).