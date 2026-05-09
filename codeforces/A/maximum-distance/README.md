## Maximum Distance (A)

# Approach I took

- First, I determined that brute force was fine because of the restriction that N <= 5000.
- Then, I stored all x coordinates and y coordinates in arrays.
- Finally, I used a nested for loop to keep track of the maximum squared Euclidean distance.


# Mistakes and Takeaways

- Learned that Math.pow() returns a double, so it is better practice to just use normal multiplication when working with ints.
- Understood more deeply how int j=i+1 avoids duplicate comparisons in nested for loops.
