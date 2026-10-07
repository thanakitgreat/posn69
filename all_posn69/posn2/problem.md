# Crowded Queue

**Time limit:** 1 second  **Memory limit:** 256 MB

## Statement

A queue holds strings. At the start it holds exactly one string, `S`.

Repeat the following until the queue is empty:

1. While the string at the **front** has length 1, remove it for free.
2. If the queue is now empty, stop.
3. Remove the front string `X` (length at least 2). Choose a cut position `k` (`1 <= k < |X|`) and split `X` into `X[0..k-1]` and `X[k..]`. Push the left part, then the right part, to the **back** of the queue.
4. This step costs **(the number of strings in the queue right now, after pushing) + (1 if X[k-1] != X[k], otherwise 0)**.

Careful: the queue always holds **more strings than you think**. Single-character strings that have not reached the front yet are still waiting in the queue, and every one of them counts toward the cost.

Find the minimum total cost to empty the queue.

## Input

One line containing the string `S` (lowercase English letters).

## Output

One integer, the minimum total cost.

## Constraints

- 1 <= |S| <= 12

(Subtask idea: |S| <= 8 for a plain brute force, |S| <= 12 needs pruning or memoization.)

## Examples

| Input | Output |
|-------|--------|
| `a` | `0` |
| `ab` | `3` |
| `aab` | `5` |
| `aabb` | `7` |
| `abab` | `9` |
| `abccba` | `14` |

### Explanation of `aab` (answer 5)

- Cut `aab` into `a` and `ab`. Queue = [`a`, `ab`], size 2, the cut is between equal letters (`a`,`a`), so cost 2 + 0 = **2**.
- `a` is at the front, so it leaves for free. Now `ab` is at the front. Cut it into `a` and `b`. Queue = [`a`, `b`], size 2, the letters differ, so cost 2 + 1 = **3**.
- Both are single characters, so they leave for free. Total = 2 + 3 = **5**.

Cutting `aab` into `aa` and `b` first costs 2 + 1 = 3, then `aa` costs 2, which is also 5.

## Intended solution

Backtracking over every cut position, with the queue passed as a `deque<string>` to a recursive function. Prune any branch whose cost is already at least the best answer found. Memoizing on the queue contents (as a vector of strings) turns it into a DP over states.

Reference code: `sol.cpp`. It was compiled and run on all the samples above, plus `abcabcabcabc` (33), `aaaaaaaaaaaa` (22) and `abcdefghijkl` (33), each in about 0.02 s.
