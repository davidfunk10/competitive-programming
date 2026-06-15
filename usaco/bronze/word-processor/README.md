## Word Processor (USACO Bronze)

For this problem, I looped through the amount of words (`n`) and kept track of current non space characters on each line to make sure they didn't exceed `k`. A key insight I made on this problem was outputting spaces before the words instead of after them because it was easier to handle edge cases.