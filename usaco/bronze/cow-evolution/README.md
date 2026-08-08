## Cow Evolution (USACO Bronze)

For this graphs problem, I analyzed the different types of final sub populations. There is only one type of final subpopulation that is impossible to write as a proper evolution chart.
This type is where, given traits A and B, the group of subpopulations has one group that contains only trait A, one group that contains only trait B, and another groups that contains
both trait A and trait B. I pretty much just created an algorithm to see whether the input is this type of group of subpopulations or not and outputted yes or no accordingly.