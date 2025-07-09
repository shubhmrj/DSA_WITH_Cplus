
---

## 💡 What You'll Find

- ✅ Clean, modular C++ code
- ✅ Concept explanations and edge cases
- ✅ Time & space complexity analysis
- ✅ Leetcode, GFG, Codeforces, InterviewBit solutions
- ✅ Visual explanations (planned)

---

## 🧠 Topics Covered

| Topic                | Status  |
|---------------------|---------|
| Arrays              | ✅ Done |
| Linked Lists        | ✅ Done |
| Stacks & Queues     | ✅ Done |
| Trees & BSTs        | ✅ Done |
| Graphs (BFS/DFS)    | ✅ Done |
| Backtracking        | ✅ Done |
| Dynamic Programming | 🚧 In Progress |
| Sliding Window      | ✅ Done |
| Bit Manipulation    | ✅ Done |
| Tries               | 🚧 In Progress |

---

## 🛠️ Tech Stack

- Language: **C++17**
- Editor: **VS Code**
- Tools: **G++, Git, GitHub**

---

## 📚 Resources Used

- [GeeksforGeeks](https://www.geeksforgeeks.org)
- [LeetCode](https://leetcode.com)
- [Striver’s A2Z DSA Sheet](https://takeuforward.org)
- [Codeforces](https://codeforces.com)
- Abdul Bari, Sir 

---

## 🤝 Contributing

Want to contribute? Here’s how:

1. Fork the repo
2. Create a branch: `git checkout -b new-feature`
3. Commit: `git commit -m "Add your feature"`
4. Push: `git push origin new-feature`
5. Open a Pull Request

---

## 🙋‍♂️ Who This Repo is For

- 📘 Beginners starting with C++
- 💼 Job seekers preparing for interviews
- 🏆 Competitive programmers
- 🎓 Students in CS programs

---

## 📈 Progress Tracker

> Track your progress with commit logs or by checking `README.md` inside each folder. Each folder contains:
- ✅ Solved questions
- 📄 Output.txt 
- 📊 Complexity notes

---

## ⚡ Sample Code Snippet

```cpp
// Binary Search (Iterative)
int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
