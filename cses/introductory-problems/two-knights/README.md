# Two Knights (CSES)

## Approach I took
- First, I thought about the brute force approach where I would check every possible pair of knight placements on the board.
- Then, I realized that would be far too slow because the number of placements grows extremely quickly as k increases.
- Instead, I counted all possible ways to place two knights using n choose 2 logic and then subtracted the number of attacking placements.
- I figured out that every attacking configuration occurs inside a 2x3 or 3x2 rectangle, which allowed me to count all attacking pairs with a formula that I derived (4(k-2)(k-1)).

## Mistakes and Takeaways
- At first, I was confused whether or not to count overlapping rectangles.
- I learned that the important idea was not the rectangles themselves, but that they each contained two possible ways to organize the knights to attack each other. These rectangles never had the same pair of knights, even if you overlap them.
- I also strengthened my understanding of combinations and why you have to divide by two to avoid counting duplicate pairs.
- This problem helped me better understand how counting “bad cases” can sometimes be much easier than directly counting valid cases. All you need to do is just subtract the number of bad cases from the number of total cases to get the number of good cases.