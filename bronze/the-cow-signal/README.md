# The Cow-Signal (USACO Bronze)

## Approach I took
- Created a variable named englared to save the value of each enlarged row.
- Printed enlarged k times, which handled vertical scaling.
- Separated the tasks of horizontal scaling and vertical scaling for a cleaner solution.
- Used StringBuilder instead of immutable Strings to help memory. 


## Mistakes and Takeaways
- Initially, I tried to loop through every character and print it out a certain number of times instead of realizing how to transform that long process into cleaner chunks.
- I also considered using arrays here, but that was inefficient compared to directly looping through the lines given.
- If you only need an input line once, process it immediately and move on, rather than storing it in an array.
- I used to be pretty bad at working with strings like this, but this problem helped me become more comfortable with them.
