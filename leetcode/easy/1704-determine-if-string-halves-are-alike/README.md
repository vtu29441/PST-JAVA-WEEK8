# Determine if String Halves Are Alike

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` of even length. Split this string into two halves of equal lengths, and let `a` be the first half and `b` be the second half.

Two strings are  **alike**  if they have the same number of vowels (`'a'`, `'e'`, `'i'`, `'o'`, `'u'`, `'A'`, `'E'`, `'I'`, `'O'`, `'U'`). Notice that `s` contains uppercase and lowercase letters.

Return `true` *if* `a` *and* `b` *are  **alike***. Otherwise, return `false`.

 

 **Example 1:** 

```
Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.

```

 **Example 2:** 

```
Input: s = "textbook"
Output: false
Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
Notice that the vowel o is counted twice.

```

 

 **Constraints:** 

- 2 <= s.length <= 1000
- s.length is even.
- s consists of uppercase and lowercase letters.

## Solution

**Language:** Java  
**Runtime:** 3 ms (beats 93.82%)  
**Memory:** 42.6 MB (beats 96.34%)  
**Submitted:** 2026-09-08T03:32:06.263Z  

```java
class Solution {
    public boolean halvesAreAlike(String s) {
        int vowelsCount = 0;
        int n = s.length();
        String vowels = "aeiouAEIOU";
        
        for (int i = 0; i < n / 2; i++) {
            // Check first half
            if (vowels.indexOf(s.charAt(i)) >= 0) {
                vowelsCount++;
            }
            // Check second half
            if (vowels.indexOf(s.charAt(i + n / 2)) >= 0) {
                vowelsCount--;
            }
        }
        
        return vowelsCount == 0;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/determine-if-string-halves-are-alike/)