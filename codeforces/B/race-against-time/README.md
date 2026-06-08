# Race Against Time (Codeforces B)

## Approach I Took:

1. At first, I thought about the problem physically. If you walked around the clock from `t1` to `t2` and you hit a clock hand, then that path would be invalid.
2. Then, I realized the minute hand, hour hand, and second hand divided the clock into three segments. If `t1` and `t2` were in the same segment, traversal between them was possible.
3. To implement this, I converted the hour, minute, and second hands into decimal positions on the clock, stored them along with t1 and t2 in an array, and sorted the array.
4. Then, I checked whether `t1` and `t2` were adjacent in the sorted order, and I made sure to deal with clock issues by initially setting clock hands that were at `12` to `0`.

## Mistakes and Takeaways:

1. One thing that confused me at first was that the minute and hour hands do not always point directly at an integer hour. I had to account for the movement caused by the second hand.
2. I also made a mistake by converting `12` to `0` after calculating the hour hand position instead of before. This caused some edge cases to fail.
3. Another thing I learned was that clocks are often easier to think about as circles rather than as the numbers `1` through `12`.
4. Once I discovered that I could turn this geometric problem into a sorting one by sorting the array, implementation became much easier.
