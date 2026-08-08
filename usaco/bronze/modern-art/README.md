## Modern Art (USACO Bronze)

For this Ad Hoc problem, I created a set of all numbers showing on the painting `ans`, excluding zero. Then, I looped through each number in `ans`'s imaginary recangle and added all overlapping numbers to a set called `blacklist`. Finally, I removed all numbers from `blacklist` from `ans` and outputted `ans.size()`. I am most proud of my blacklist approach because I think it greatly simplified the problem.

