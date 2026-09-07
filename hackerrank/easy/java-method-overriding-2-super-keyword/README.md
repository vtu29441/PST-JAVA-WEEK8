# Java Method Overriding 2 (Super Keyword)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

When a method in a subclass overrides a method in superclass, it is still possible to call the overridden method using **super** keyword. If you write *super.func()* to call the function *func()*, it will call the method that was defined in the superclass.

You are given a partially completed code in the editor. Modify the code so that the code prints the following text:

    Hello I am a motorcycle, I am a cycle with an engine.
    My ancestor is a cycle who is a vehicle with pedals.


**Input Format**

 

**Constraints**

 

**Output Format**

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T15:58:46.234Z  

```java
import java.util.*;
import java.io.*;

class BiCycle {
    String define_me() {
        return "a vehicle with pedals.";
    }
}

class MotorCycle extends BiCycle {
    String define_me() {
        return "a cycle with an engine.";
    }
    
    MotorCycle() {
        System.out.println("Hello I am a motorcycle, I am 
        " + define_me());
        
        // Use the super keyword to call the method from 
        the parent class
        String temp = super.define_me(); 
        
        System.out.println("My ancestor is a cycle who is 
        " + temp);
    }
}

class Solution {
    public static void main(String []args) {
        MotorCycle M = new MotorCycle();
    }
}
```

---

[View on HackerRank](https://www.hackerrank.com/challenges/java-method-overriding-2-super-keyword/problem)