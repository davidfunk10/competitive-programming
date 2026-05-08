# Mixing Milk (USACO Bronze)

## Approach I took
- Found the repeating pouring pattern
- Set "from" = to the bucket pouring into the other bucket, "to"
- Found how much to pour into the "to" bucket with Math.min()
- Adjusted the milk levels at the appropriate indexes and repeated for 100 pours

## Mistakes and Takeaways
- During my first approach, I tried to manually handle every pour with conditionals instead of recognizing the pattern that "from" was always pouring to "to" and "from" = i%3 and "to" = (i+1)%3
- In the future, I know to look for these patterns that can be simulated easily with % logic, instead of trying to manually handle each case
- I also made the mistake of confusing my two arrays: state[] and cap[]. cap[] in this case stayed constant, but it was necessary because of its ability to store milk capacity for buckets at certain indexes
