# Block Game (USACO Bronze)

## Approach I took
- First, I created a total array that stored the final frequencies of letters.
- Then, I looped through each block and found the most amount of times each letter occurred in word1 OR word2.
- I used int index = c - 'a' logic to find the index of the character(0-25).
- Finally, I outputted the total frequency of each letter needed on a new line.


## Mistakes and Takeaways
- In the beginning, I tried to create an array of letters a-z, so I could manually find each letter's index based on that array.
- I found out that this was unnecessary because Java stores characters' true values under the hood with a=97 to z=122.
- Using that logic, I could simply loop through each character in a word and add 1 to the corresponding index of the c1[] or c2[] arrays. 
