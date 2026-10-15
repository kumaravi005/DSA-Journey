# Next Permutation

**LeetCode:** [31 - Next Permutation](https://leetcode.com/problems/next-permutation/)

**Difficulty:** Medium

**Topic:** Array, Two Pointers, In-place Algorithms

**Language:** C++

## Problem

Given an array of integers, rearrange it into the next lexicographically greater permutation.

If no greater permutation exists, rearrange the array into ascending order.

The modification must be performed in place using constant extra memory.

## Examples

### Example 1

**Input:**
```text
nums = [1,2,3]
```

**Output:**
```text
[1,3,2]
```

### Example 2

**Input:**
```text
nums = [3,2,1]
```

**Output:**
```text
[1,2,3]
```

### Example 3

**Input:**
```text
nums = [1,1,5]
```

**Output:**
```text
[1,5,1]
```

## Approach

The solution uses an in-place, four-step algorithm.

### 1. Find the pivot

Traverse from right to left and find the first index `i` where:

```cpp
nums[i] < nums[i + 1]
```

This is the pivot.

### 2. Handle the last permutation

If no pivot exists, the array is in descending order. Reverse the entire array to obtain the smallest permutation.

### 3. Find the successor

Starting from the right, find the first element greater than the pivot and swap them.

### 4. Reverse the suffix

Reverse all elements after the pivot to arrange the suffix in ascending order.

This produces the immediate next lexicographical permutation.

## Complexity

**Time Complexity:** `O(n)`

**Auxiliary Space Complexity:** `O(1)`

The algorithm uses constant extra space and modifies the array in place.

## Key Learning

The main learning is how to find the next lexicographical permutation efficiently without generating all possible permutations.

The important concepts are finding a pivot, swapping with its successor, and reversing the suffix.

## Solution

See [`solution.cpp`](./solution.cpp).