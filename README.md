# 150-Leetcode

Solutions for the [LeetCode 150](https://leetcode.com/studyplan/leetcode-75/) study plan — implemented in C++ with time and space complexity notes.

---

## Array / String

| # | Problem | File | Time | Space | Approach |
|---|---------|------|------|-------|----------|
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | `1.cpp` | **O(m + n)** | **O(1)** | Two pointers from end; fill `nums1` from back |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | `2.cpp` | **O(n)** | **O(1)** | Slow/fast pointers; overwrite in place |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | `3.cpp` | **O(n)** | **O(1)** | Single pass; copy non-`val` to front |
| 80 | [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) | `4.cpp` | **O(n)** | **O(1)** | Allow at most 2; compare with `nums[k-2]` |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | `5.cpp` | **O(n)** | **O(1)** | Boyer–Moore majority vote |
| 189 | [Rotate Array](https://leetcode.com/problems/rotate-array/) | `6.cpp` | **O(n)** | **O(n)** | Auxiliary array; index `(i + k) % n` |

---

## Complexity summary

| File | Problem | Time Complexity | Space Complexity |
|------|---------|-----------------|------------------|
| `1.cpp` | Merge Sorted Array | O(m + n) | O(1) |
| `2.cpp` | Remove Duplicates (I) | O(n) | O(1) |
| `3.cpp` | Remove Element | O(n) | O(1) |
| `4.cpp` | Remove Duplicates (II) | O(n) | O(1) |
| `5.cpp` | Majority Element | O(n) | O(1) |
| `6.cpp` | Rotate Array | O(n) | O(n) |

---

## How to run

```bash
# Compile and run (example for 1.cpp)
g++ -std=c++17 -o run 1.cpp && ./run
```

---

## Progress

**6 / 150** problems completed.
