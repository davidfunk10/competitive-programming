# Speeding Ticket (USACO Bronze)

## Approach I took
- Basically, the problem provided segments of miles grouped by a certain number of miles
- In such a format, it is hard to compare two sets of mile segments grouped by different numbers of miles
- Since the total number of miles was 100 for this problem, I made two arrays, with each index(0-99) corresponding to each mile.
- For one array, each mile was assigned the speed of the cow at that mile. In the other array, each mile was assigned the speed limit at that mile.
- Then I looped over both arrays and found how much the cow was speeding by using a maxDif var. 

## Mistakes and Takeaways
- I confused the speed[] and limit[] arrays and what the actual values within them represented.
- My main takeaway from this problem was understanding the power of dividing chunks(like mile segments) into ones, so that they are easier to loop over and compare to other "chunks," which might be grouped by different intervals.
