# LeetCode Solutions 🧩

A collection of LeetCode problems I've solved, uploaded as I go. Solutions are organized by problem number.

## 📂 Structure

Each file is named with the problem's LeetCode number and title, e.g.:

```
0001-two-sum.cpp
0020-valid-parentheses.cpp
0141-linked-list-cycle.cpp
```

No fixed folder structure by topic or difficulty — just a running log of problems solved, in the order they were added.

## 🧠 Solution Format

Each file includes the problem link and my actual thought process — if I first arrived at a brute force approach before finding the optimal one, both are included, in that order.

```cpp
/*
LeetCode #1 - Two Sum
Link: https://leetcode.com/problems/two-sum/

Brute Force:
- Check every pair of numbers to see if they sum to target.
- Time: O(n^2)
- Space: O(1)
*/

class BruteForce {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};

/*
Optimal:
- Use a hashmap to store value -> index as we iterate.
- For each number, check if its complement already exists in the map.
- Time: O(n)
- Space: O(n)
*/

class Optimal {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.count(complement))
                return {seen[complement], i};
            seen[nums[i]] = i;
        }
        return {};
    }
};
```

## 🛠️ Tech

- Language: C++
