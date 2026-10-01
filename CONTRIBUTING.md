# Contributing & Daily Workflow Guidelines

Welcome to **DSA-Journey**! This document outlines the standard commit conventions, problem organization, and daily workflow to maintain a clean, consistent, and easy-to-revise repository.

---

## 📌 Standard Commit Convention

To keep git history clean and standardized, use the following commit message formats:

### Solving a New Problem
```text
solve: <problem-name>
```
*Examples:*
- `solve: Two Sum`
- `solve: Valid Anagram`
- `solve: Binary Search`
- `solve: Reverse Linked List`

### Fixing an Existing Solution
```text
fix: <problem-name>
```
*Example:* `fix: Two Sum`

### Documentation Updates
```text
docs: update problem explanation
```
or
```text
docs: update README
```

### Repository Maintenance / Structure Changes
```text
chore: update repository structure
```

---

## 🔄 Daily Workflow

Follow these steps whenever solving a new problem:

1. **Solve a problem** on LeetCode.
2. **Identify its primary DSA topic** (e.g., Arrays, Binary-Search, Dynamic-Programming).
3. **Create the appropriate topic folder** if it does not exist yet.
4. **Create a folder using the problem name** (e.g., `Arrays/Two-Sum/`).
5. **Add the solution file** in your active language (e.g., `solution.java`, `solution.py`, or `solution.cpp`).
6. **Add `README.md`** inside the problem folder using the standard template from `problem-template/README.md`.
7. **Update the main `README.md`**:
   - Update topic problem count in the **Progress** table.
   - Update difficulty count in the **Difficulty Progress** table.
   - Add entry to the **Daily Progress** table.
   - Add entry with relative GitHub link to the **Problem Index** table.
8. **Test the solution locally**.
9. **Review the code** and explanation.
10. **Commit using the standard commit format**.
11. **Push to GitHub**.

---

## 📂 Example Problem Structure

```text
Arrays/
└── Two-Sum/
    ├── README.md
    └── solution.java
```

### Example Git Commands:
```bash
git add .
git commit -m "solve: Two Sum"
git push
```
