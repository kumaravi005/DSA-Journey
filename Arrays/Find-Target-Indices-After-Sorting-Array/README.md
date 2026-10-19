# Find Target Indices After Sorting Array

**LeetCode:** [2089 - Find Target Indices After Sorting Array](https://leetcode.com/problems/find-target-indices-after-sorting-array/)

**Difficulty:** Easy

**Topics:** Array, Sorting, Linear Search

**Language:** C++

## Problem

Given a 0-indexed integer array `nums` and a target element `target`, return all indices where `nums[i] == target` after sorting the array in non-decreasing order.

If the target does not exist, return an empty list.

## Example

**Input:**
```text
nums = [1,2,5,2,3], target = 2
```

**Output:**
```text
[1,2]
```

**Explanation:**

After sorting, the array becomes `[1,2,2,3,5]`. The target `2` appears at indices `1` and `2`.

## Approach

First, sort the array using `sort()`. Then traverse the sorted array and store every index whose element equals the target.

### Algorithm

1. Sort `nums` in non-decreasing order.
2. Create an empty vector `ans`.
3. Traverse the array using a loop.
4. If `nums[i] == target`, add index `i` to `ans`.
5. Return `ans`.

## Complexity

**Time Complexity:** `O(n log n)` due to sorting.

**Auxiliary Space Complexity:** `O(log n)` typically for the sorting implementation's stack space, excluding the returned output.

The answer vector requires up to `O(n)` additional space.

## Key Learning

Sorting makes the target indices easy to identify. Since the array is sorted, traversing it from left to right naturally collects the indices in increasing order.

## Solution

See [`solution.cpp`](./solution.cpp).