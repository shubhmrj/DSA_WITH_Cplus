# 🧠 DSA with C++ — Data Structures & Algorithms for Interview Preparation

[![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-LeetCode-orange?logo=leetcode&logoColor=white)](https://leetcode.com/)
[![Platform](https://img.shields.io/badge/Platform-GeeksforGeeks-green?logo=geeksforgeeks&logoColor=white)](https://www.geeksforgeeks.org/)
[![Platform](https://img.shields.io/badge/Platform-InterviewBit-blueviolet)](https://www.interviewbit.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub Stars](https://img.shields.io/github/stars/shubhmrj/DSA_WITH_Cplus?style=social)](https://github.com/shubhmrj/DSA_WITH_Cplus)

---

## 📋 Table of Contents

- [Description](#-description)
- [Topics Covered](#-topics-covered)
- [Repository Structure](#-repository-structure)
- [How to Run](#-how-to-run)
- [Problem Index](#-problem-index)
- [Complexity Reference](#-complexity-reference)
- [Resources](#-resources)
- [Contributing](#-contributing)
- [License](#-license)

---

## 📝 Description

**DSA with C++** is a structured, self-contained repository of Data Structures and Algorithm implementations written in modern **C++17**, designed specifically for **coding interview preparation**. Every solution is aimed at problems from leading competitive programming and interview platforms — [LeetCode](https://leetcode.com/), [GeeksforGeeks](https://www.geeksforgeeks.org/), and [InterviewBit](https://www.interviewbit.com/).

### Purpose

The goal of this repository is threefold:

1. **Document** clean, well-commented C++ solutions to canonical DSA problems organised by topic.
2. **Reinforce** conceptual understanding by pairing implementations with time and space complexity annotations.
3. **Serve as a revision reference** in the days leading up to technical interviews at product-based companies.

### Who This Is For

This repository is intended for undergraduate students, software engineering candidates preparing for technical rounds, and anyone looking to strengthen their algorithmic problem-solving skills in C++. Prior familiarity with basic C++ syntax is assumed; no advanced template metaprogramming or competitive-programming-specific macros are used, keeping every solution readable and interview-appropriate.

---

## 📚 Topics Covered

The repository covers the following major DSA domains. Each topic directory contains both the fundamental data structure implementation and applied problem solutions.

### 1️⃣ Arrays & Strings
Core manipulation, sliding window, two-pointer, and prefix sum techniques — the backbone of the majority of interview problems.

- Kadane's Algorithm (Maximum Subarray)
- Two Sum / Three Sum variants
- Sliding Window (Fixed & Variable)
- Prefix Sum and Difference Arrays
- Dutch National Flag Problem
- Merge Intervals
- Matrix Rotation and Spiral Traversal

### 2️⃣ Linked Lists
Pointer manipulation, cycle detection, and merging — a classic interview category testing low-level reasoning.

- Singly and Doubly Linked List implementation
- Reversal (iterative and recursive)
- Cycle Detection (Floyd's Algorithm)
- Merge Two Sorted Lists
- Find Middle of Linked List
- LRU Cache Implementation

### 3️⃣ Stacks & Queues
Monotonic stacks, deques, and bracket matching — essential for parsing and next-greater-element style problems.

- Stack using Arrays / Linked List
- Balanced Parentheses
- Next Greater Element
- Largest Rectangle in Histogram
- Sliding Window Maximum (Deque)
- Implement Queue using Stacks

### 4️⃣ Trees & Binary Search Trees
Traversals, construction, validation, and path problems across binary trees and BSTs.

- Binary Tree (Inorder, Preorder, Postorder — iterative & recursive)
- Level Order Traversal (BFS)
- Height, Diameter, and Balance Check
- Lowest Common Ancestor (LCA)
- Binary Search Tree Insertion, Deletion, Validation
- Serialize and Deserialize Binary Tree

### 5️⃣ Heaps & Priority Queues
Min-heap and max-heap patterns used in scheduling, top-K, and graph algorithms.

- Min/Max Heap Implementation
- K Largest / K Smallest Elements
- Merge K Sorted Lists
- Top K Frequent Elements
- Median of a Data Stream

### 6️⃣ Graphs
BFS, DFS, shortest path, cycle detection, and topological ordering across directed and undirected graphs.

- BFS and DFS (Adjacency List & Matrix)
- Cycle Detection (Directed & Undirected)
- Topological Sort (DFS + Kahn's Algorithm)
- Dijkstra's Shortest Path
- Bellman-Ford Algorithm
- Prim's and Kruskal's MST
- Flood Fill / Island Counting
- Bipartite Graph Check

### 7️⃣ Sorting & Searching
Classical sorting algorithms from scratch, plus binary search and its many variants.

- Bubble, Selection, Insertion Sort
- Merge Sort and Quick Sort (with partition variants)
- Counting Sort, Radix Sort
- Binary Search (Standard, Lower Bound, Upper Bound)
- Search in Rotated Sorted Array
- Find Peak Element

### 8️⃣ Dynamic Programming
Bottom-up and top-down DP patterns covering the most frequently tested problem archetypes.

- Fibonacci and Memoisation
- 0/1 Knapsack and Unbounded Knapsack
- Longest Common Subsequence (LCS)
- Longest Increasing Subsequence (LIS)
- Edit Distance
- Coin Change (Count & Minimum)
- Matrix Chain Multiplication
- DP on Grids (Unique Paths, Minimum Path Sum)
- Partition Problems (Subset Sum, Equal Partition)

### 9️⃣ Recursion & Backtracking
Systematic exploration problems requiring constraint satisfaction and decision-tree traversal.

- N-Queens Problem
- Rat in a Maze
- Sudoku Solver
- Permutations and Combinations
- Word Search on Grid
- Generate All Subsets (Power Set)

### 🔟 Hashing & Hash Maps
Frequency counting, grouping, and constant-time lookup patterns.

- Group Anagrams
- Longest Consecutive Sequence
- Subarray with Zero Sum
- Count Distinct Elements in Every Window

### 1️⃣1️⃣ Tries & Advanced Trees
Prefix-based structures and segment trees for range queries.

- Trie (Insert, Search, StartsWith)
- Word Dictionary with Wildcards
- Segment Tree (Point Update, Range Query)
- Fenwick Tree (Binary Indexed Tree)

---

## 🗂️ Repository Structure

Files are organised by topic, with each problem stored as a self-contained `.cpp` file. The naming convention follows `ProblemName.cpp` in PascalCase, ensuring files are easy to locate and sort alphabetically within each directory.

```
📁 DSA_WITH_Cplus/
│
├── 📁 01_Arrays/
│   ├── MaximumSubarray.cpp
│   ├── TwoSum.cpp
│   ├── MergeIntervals.cpp
│   ├── SlidingWindowMaximum.cpp
│   └── MatrixSpiralOrder.cpp
│
├── 📁 02_LinkedList/
│   ├── LinkedListImpl.cpp
│   ├── ReverseLinkedList.cpp
│   ├── DetectCycle.cpp
│   ├── MergeSortedLists.cpp
│   └── LRUCache.cpp
│
├── 📁 03_StacksQueues/
│   ├── BalancedParentheses.cpp
│   ├── NextGreaterElement.cpp
│   ├── LargestRectangleHistogram.cpp
│   └── ImplementQueueUsingStacks.cpp
│
├── 📁 04_Trees/
│   ├── BinaryTreeTraversals.cpp
│   ├── LevelOrderTraversal.cpp
│   ├── LowestCommonAncestor.cpp
│   ├── ValidateBST.cpp
│   └── SerializeDeserialize.cpp
│
├── 📁 05_Heaps/
│   ├── KLargestElements.cpp
│   ├── MergeKSortedLists.cpp
│   └── MedianDataStream.cpp
│
├── 📁 06_Graphs/
│   ├── BFS_DFS.cpp
│   ├── TopologicalSort.cpp
│   ├── Dijkstra.cpp
│   ├── BellmanFord.cpp
│   ├── KruskalMST.cpp
│   ├── PrimMST.cpp
│   └── BipartiteCheck.cpp
│
├── 📁 07_Sorting/
│   ├── MergeSort.cpp
│   ├── QuickSort.cpp
│   ├── BinarySearch.cpp
│   └── SearchRotatedArray.cpp
│
├── 📁 08_DynamicProgramming/
│   ├── Knapsack01.cpp
│   ├── LongestCommonSubsequence.cpp
│   ├── LongestIncreasingSubsequence.cpp
│   ├── EditDistance.cpp
│   ├── CoinChange.cpp
│   └── UniquePaths.cpp
│
├── 📁 09_Backtracking/
│   ├── NQueens.cpp
│   ├── SudokuSolver.cpp
│   ├── Permutations.cpp
│   └── WordSearch.cpp
│
├── 📁 10_Hashing/
│   ├── GroupAnagrams.cpp
│   ├── LongestConsecutiveSequence.cpp
│   └── SubarrayZeroSum.cpp
│
├── 📁 11_Trie/
│   ├── TrieImplementation.cpp
│   └── WordDictionary.cpp
│
├── 📁 12_SegmentTree/
│   ├── SegmentTree.cpp
│   └── FenwickTree.cpp
│
├── README.md                           # This file
└── LICENSE                             # MIT License
```

### File Convention

Each `.cpp` file follows a consistent internal structure to make solutions easy to navigate during revision:

```cpp
/*
 * Problem  : Maximum Subarray (LeetCode #53)
 * Approach : Kadane's Algorithm
 * Time     : O(n)
 * Space    : O(1)
 * Link     : https://leetcode.com/problems/maximum-subarray/
 */

#include <bits/stdc++.h>
using namespace std;

// ---- Solution ----
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], curr = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        curr = max(nums[i], curr + nums[i]);
        maxSum = max(maxSum, curr);
    }
    return maxSum;
}

// ---- Driver ----
int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
```

---

## ⚙️ How to Run

All solutions are standard C++ files and can be compiled and executed from any terminal using the **GNU C++ compiler (`g++`)**.

### Prerequisites

Ensure `g++` is installed on your system.

```bash
# Verify installation
g++ --version

# Install on Ubuntu / Debian
sudo apt-get install g++

# Install on macOS (via Homebrew)
brew install gcc

# Install on Windows
# Download MinGW from: https://www.mingw-w64.org/
# Then add the bin/ directory to your system PATH
```

### Compiling and Running a Single File

```bash
# Navigate to the topic directory
cd 08_DynamicProgramming/

# Compile
g++ -std=c++17 -O2 -Wall -o solution CoinChange.cpp

# Run
./solution
```

### Flags Explained

| Flag | Purpose |
|------|---------|
| `-std=c++17` | Use the C++17 standard (required for structured bindings, `std::optional`, etc.) |
| `-O2` | Enable level-2 optimisation (mirrors competitive judge environments) |
| `-Wall` | Enable all compiler warnings — catches common bugs early |
| `-o solution` | Name the output executable `solution` |

### Compiling Multiple Files at Once

```bash
# Compile all files in a directory (bash)
for f in 06_Graphs/*.cpp; do
    g++ -std=c++17 -O2 -Wall -o "${f%.cpp}" "$f"
    echo "Compiled: $f"
done
```

### Using an IDE

If you prefer an integrated development environment, the following configurations work well with this repository.

**VS Code:** Install the [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) by Microsoft. Open any `.cpp` file and use the built-in **Run C/C++ File** button (top-right) or configure a `tasks.json` with the flags above.

**CLion:** Open the repository root as a project. CLion auto-detects `.cpp` files. Add a CMakeLists.txt at the root level if you wish to use CMake-based build configurations.

**Code::Blocks:** Create a new empty project, add the `.cpp` file to the project, and set the compiler standard to C++17 under *Project → Build Options → Compiler Flags*.

---

## 📇 Problem Index

A quick-reference index of solved problems, organised by topic and difficulty.

| # | Problem | Topic | Difficulty | Platform |
|---|---------|-------|------------|----------|
| 1 | Maximum Subarray | Arrays | Easy | LeetCode #53 |
| 2 | Two Sum | Arrays | Easy | LeetCode #1 |
| 3 | Merge Intervals | Arrays | Medium | LeetCode #56 |
| 4 | Reverse Linked List | Linked Lists | Easy | LeetCode #206 |
| 5 | Detect Cycle in LL | Linked Lists | Medium | LeetCode #142 |
| 6 | LRU Cache | Linked Lists + Hashing | Medium | LeetCode #146 |
| 7 | Largest Rectangle in Histogram | Stacks | Hard | LeetCode #84 |
| 8 | Lowest Common Ancestor | Trees | Medium | LeetCode #236 |
| 9 | Serialize & Deserialize BT | Trees | Hard | LeetCode #297 |
| 10 | Median of Data Stream | Heaps | Hard | LeetCode #295 |
| 11 | Topological Sort | Graphs | Medium | GFG |
| 12 | Dijkstra's Algorithm | Graphs | Medium | GFG |
| 13 | Number of Islands | Graphs | Medium | LeetCode #200 |
| 14 | 0/1 Knapsack | Dynamic Programming | Medium | GFG |
| 15 | Longest Common Subsequence | Dynamic Programming | Medium | LeetCode #1143 |
| 16 | Edit Distance | Dynamic Programming | Hard | LeetCode #72 |
| 17 | Coin Change | Dynamic Programming | Medium | LeetCode #322 |
| 18 | N-Queens | Backtracking | Hard | LeetCode #51 |
| 19 | Sudoku Solver | Backtracking | Hard | LeetCode #37 |
| 20 | Group Anagrams | Hashing | Medium | LeetCode #49 |
| 21 | Trie Implementation | Trie | Medium | LeetCode #208 |
| 22 | Segment Tree | Segment Tree | Hard | GFG |

> This index is updated as new solutions are added. Problem numbers reference the platform's own identifiers where applicable.

---

## ⏱️ Complexity Reference

A quick reference for the time and space complexity of the fundamental data structure operations covered in this repository.

| Data Structure | Access | Search | Insertion | Deletion | Space |
|---------------|--------|--------|-----------|----------|-------|
| Array | O(1) | O(n) | O(n) | O(n) | O(n) |
| Linked List | O(n) | O(n) | O(1) | O(1) | O(n) |
| Stack | O(n) | O(n) | O(1) | O(1) | O(n) |
| Queue | O(n) | O(n) | O(1) | O(1) | O(n) |
| Hash Table | O(1) avg | O(1) avg | O(1) avg | O(1) avg | O(n) |
| Binary Search Tree | O(log n) avg | O(log n) avg | O(log n) avg | O(log n) avg | O(n) |
| Heap (Binary) | O(1) | O(n) | O(log n) | O(log n) | O(n) |
| Trie | — | O(m) | O(m) | O(m) | O(n·m) |
| Segment Tree | — | O(log n) | O(log n) | O(log n) | O(n) |

*m = length of key string; averages for hash tables assume a good hash function with low collision rate.*

---

## 📖 Resources

The following references were used in developing solutions and understanding the underlying theory.

### Books

| Title | Author | Focus |
|-------|--------|-------|
| *Introduction to Algorithms* (CLRS, 4th Ed.) | Cormen, Leiserson, Rivest, Stein | Rigorous algorithm theory and proofs |
| *Competitive Programming 3* | Steven Halim | Problem-solving patterns and optimisations |
| *Cracking the Coding Interview* | Gayle Laakmann McDowell | Interview-focused problems and walkthroughs |
| *The Algorithm Design Manual* | Steven Skiena | Applied algorithm design and trade-offs |
| *Data Structures and Algorithms in C++* | Michael T. Goodrich | C++-specific implementations |

### Online Platforms

- [LeetCode](https://leetcode.com/) — Primary source of interview-style problems.
- [GeeksforGeeks](https://www.geeksforgeeks.org/) — Algorithm explanations, diagrams, and Indian MNC interview questions.
- [InterviewBit](https://www.interviewbit.com/) — Structured topic-wise problem sets with difficulty progression.
- [CP-Algorithms](https://cp-algorithms.com/) — In-depth explanations of advanced algorithms (Segment Trees, Fenwick Trees, MST, etc.).
- [USACO Guide](https://usaco.guide/) — Structured learning paths for competitive programming topics.
- [Visualgo](https://visualgo.net/) — Step-by-step algorithm visualisations.
- [Big-O Cheat Sheet](https://www.bigocheatsheet.com/) — Quick complexity reference for all common data structures and algorithms.

### YouTube Channels

- [Abdul Bari](https://www.youtube.com/channel/UCZCFT11CWBi3MHNlGf019nw) — Clear, rigorous explanations of algorithms with animated visuals.
- [take U forward (Striver)](https://www.youtube.com/c/takeUforward) — Graph, DP, and tree series widely used in Indian SDE interview prep.
- [NeetCode](https://www.youtube.com/c/NeetCode) — LeetCode problem walkthroughs with clean C++ / Python solutions.
- [Back To Back SWE](https://www.youtube.com/c/BackToBackSWE) — In-depth whiteboard-style explanations ideal for FAANG preparation.

---

## 🤝 Contributing

Contributions are welcome and appreciated. Whether you have a cleaner solution, a new problem to add, a bug fix, or a documentation improvement, your input helps make this repository more useful for the entire community.

### How to Contribute

**1. Fork the Repository**
```bash
# Click "Fork" on GitHub, then clone your fork locally
git clone https://github.com/YOUR_USERNAME/DSA_WITH_Cplus.git
cd DSA_WITH_Cplus
```

**2. Create a Feature Branch**

Use a descriptive branch name that reflects your change.
```bash
git checkout -b feature/add-bellman-ford-solution
# or
git checkout -b fix/linked-list-cycle-edge-case
```

**3. Follow the File and Code Conventions**

Before submitting, ensure your contribution adheres to the repository style.

- Place the file in the correct topic directory (e.g., `06_Graphs/BellmanFord.cpp`).
- Use PascalCase for filenames: `ProblemName.cpp`.
- Include the standard header comment block with problem name, approach, time complexity, space complexity, and a link to the original problem.
- Add a `main()` driver with at least one representative test case.
- Compile successfully with `g++ -std=c++17 -O2 -Wall` before submitting.

**4. Commit with a Clear Message**
```bash
git add 06_Graphs/BellmanFord.cpp
git commit -m "Add: Bellman-Ford shortest path with negative edge support (LeetCode #743)"
```

Commit message prefixes: `Add:` for new solutions, `Fix:` for bug corrections, `Refactor:` for code improvements, `Docs:` for documentation changes.

**5. Push and Open a Pull Request**
```bash
git push origin feature/add-bellman-ford-solution
```
Then navigate to your fork on GitHub and click **"Compare & pull request"**. In the PR description, briefly explain what you changed and why.

### Reporting Issues

If you find an incorrect solution, a complexity annotation error, or a bug in a driver function, please [open an issue](https://github.com/shubhmrj/DSA_WITH_Cplus/issues) with the following information: the filename, a description of the problem, and (if applicable) a failing test case.

### Code of Conduct

All contributors are expected to engage respectfully. Submissions that are dismissive, plagiarised without attribution, or unrelated to DSA will not be merged.

---

## 📄 License

This repository is released under the **MIT License** — you are free to use, copy, modify, and distribute the code for any purpose, including commercial use, provided the original copyright notice is retained.

```
MIT License — Copyright (c) 2024 Shubham Raj
```

Full license: [LICENSE](https://github.com/shubhmrj/DSA_WITH_Cplus/blob/main/LICENSE)

---

## 🌟 Support

If this repository has aided your interview preparation, a ⭐ **star** on GitHub is the best way to help others find it.

**Author:** [Shubham Raj](https://github.com/shubhmrj)
📧 shubham4312raj@gmail.com | 💼 [LinkedIn](https://linkedin.com/in/shubmraj)

---

> *"The best way to prepare for an interview is not to memorise solutions — it is to understand the patterns well enough to derive them under pressure."*
>
> **Keep Solving. Keep Growing. 🚀**