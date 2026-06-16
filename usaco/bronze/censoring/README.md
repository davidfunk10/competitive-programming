## Censoring (USACO Bronze)

For this problem, I initially tried to keep removing the string `t` from string `s` by using `.contains()` and `.remove()`; however, I discovered that it was `n^2` time and since `n` can be up to `10^6`, it took too much memory. So instead, I looped through the string `s` one character at a time and removed any instances of `t` as soon as they were detected.