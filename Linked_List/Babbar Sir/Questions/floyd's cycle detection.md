## Floyd's Cycle Detection Algorithm

Also called the **Tortoise and Hare** algorithm. The core idea is simple: use two pointers moving at different speeds through the list. If there's a cycle, the fast pointer will eventually "lap" the slow one and they'll meet.

---

### The two phases

**Phase 1 — Detect the cycle.** Move `slow` one step at a time, `fast` two steps at a time. If they ever point to the same node, a cycle exists. If `fast` reaches `NULL`, there's no cycle.

**Phase 2 — Find the cycle entry point.** Once they've met, reset `slow` back to `head` and keep `fast` at the meeting point. Now move *both* one step at a time. The node where they meet again is the start of the cycle.

Let me show you the algorithm in action — click Step to watch it run:---

### Why does Phase 2 actually work? (The math)

Let's define:
- `F` = distance from **head** to cycle entry
- `C` = length of the cycle
- `a` = distance from cycle entry to the **meeting point** (inside the cycle)

When they meet in Phase 1, slow has traveled `F + a` steps. Fast has traveled twice that: `2(F + a)`. But fast also lapped slow inside the cycle, so:

```
2(F + a) = F + a + C
→ F + a = C
→ F = C - a
```

`C - a` is exactly the distance from the **meeting point back to the cycle entry**. So if you reset `slow` to head and move both one step at a time, after `F` steps they both land on the cycle entry simultaneously. That's the proof.

---

### The code

```cpp
Node* detectCycleEntry(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Phase 1: detect the cycle
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {           // they've met inside the cycle
            // Phase 2: find cycle entry
            slow = head;              // reset slow to head
            while (slow != fast) {   // move both one step at a time
                slow = slow->next;
                fast = fast->next;
            }
            return slow;             // this is the cycle entry node
        }
    }
    return nullptr;                  // no cycle
}
```

---

### Key properties

| Property | Value |
|---|---|
| Time complexity | O(n) |
| Space complexity | O(1) — no extra data structures |
| Detects cycle | Phase 1 |
| Finds entry | Phase 2 |
| Works on | Singly linked lists, any sequence that can be modeled as `f(x)` |

The algorithm is also used beyond linked lists — anywhere you have a function `f(x)` applied repeatedly (like detecting cycles in number sequences, or finding repeated states in a simulation).