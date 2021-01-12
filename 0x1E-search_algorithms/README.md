# Search algorithms

The search algorithms used in this project:

## Linear search
Checks each element of the list until it finds the one it is searching or the whole list has been checked.
**Worst case time complexity:** O(n)

## Binary search
Selects a position within a sorted list. Then compares the element with that middle position, if they're not equal the half in which the element cannot lie is eliminated and the search repeats on the remaining half. And so on until the element has been found or there are no more elements to be compared.
**Worst case time complexity:** O(log(n))
