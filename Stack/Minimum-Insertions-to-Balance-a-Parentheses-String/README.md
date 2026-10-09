# Minimum Insertions to Balance a Parentheses String

**LeetCode:** [1541 - Minimum Insertions to Balance a Parentheses String](https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/)

**Difficulty:** Medium

**Topic:** Stack, Greedy, Parentheses

**Language:** C++

## Problem

Given a parentheses string `s` containing only `(` and `)`, find the minimum number of insertions needed to make it balanced.

A balanced string must satisfy these rules:

- Every opening parenthesis `(` must have two consecutive closing parentheses `))`.
- The opening parenthesis must appear before its corresponding closing parentheses.

## Example

**Input:**
```text
s = "(()))"
```

**Output:**
```text
1
```

**Explanation:** One additional `)` is needed to balance the first opening parenthesis.

## Approach

This solution uses a greedy strategy with a stack-like structure to track unmatched opening parentheses.

### Algorithm

1. Initialize a stack, an index `i`, and an answer counter `ans`.
2. If the current character is `(`, store it as an unmatched opening parenthesis.
3. If the current character is `)`, check whether the next character is also `)`.
4. If the next character is not `)`, count an insertion to complete the closing pair.
5. Match each closing pair with an available opening parenthesis.
6. If no opening parenthesis is available, count the missing opening parenthesis.
7. After processing the string, account for any unmatched opening parentheses. Each requires two closing parentheses.

## Complexity

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)` in the worst case when unmatched opening parentheses are stored.

Here, `n` is the length of the input string.

## Key Learning

This problem demonstrates how greedy decisions and tracking unmatched parentheses can minimize insertions. Each opening parenthesis requires two consecutive closing parentheses, so matching must account for pairs rather than individual closing characters.

## Solution

See [`solution.cpp`](./solution.cpp).