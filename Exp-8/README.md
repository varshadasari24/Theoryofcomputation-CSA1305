# String Validation for the Grammar S → A101A, A → 0A | 1A | ε

## Aim
To write a C program to check whether a given string belongs to the grammar:

S → A101A  
A → 0A | 1A | ε

---

## Project Description

This project implements a C program to check whether a given binary string belongs to the specified Context-Free Grammar (CFG). The grammar allows **A** to generate any binary string (including the empty string). Therefore, the language consists of all binary strings that contain the substring **"101"** at least once.

The program first verifies that the input contains only binary digits (**0** and **1**). It then searches for the substring **"101"** in the input string. If the substring is found, the string is accepted; otherwise, it is rejected.

---

## Grammar

S → A101A

A → 0A | 1A | ε

---

## Features

- Checks whether the input string belongs to the given grammar.
- Accepts binary strings over the alphabet **{0,1}**.
- Rejects strings containing invalid symbols.
- Searches for the substring **"101"** in the input string.
- Displays whether the string is **Accepted** or **Rejected**.

---

## Language

C

---

## Algorithm

1. Read the input binary string.
2. Check whether every character is either **0** or **1**.
3. If any invalid character is found, reject the string.
4. Traverse the string from left to right.
5. Compare every three consecutive characters with **"101"**.
6. If the substring **"101"** is found, accept the string.
7. Otherwise, reject the string.

---

## Time Complexity

**O(n)**

where **n** is the length of the input string.

---

## Space Complexity

**O(1)**

---

## Sample Input

```
1101010
```

## Sample Output

```
Accepted
```

---

## Sample Input

```
111000
```

## Sample Output

```
Rejected
```

---

## Result

The C program successfully checks whether the given binary string belongs to the grammar **S → A101A, A → 0A | 1A | ε** by verifying that it contains only valid binary symbols and includes the substring **"101"**.

---

## Author

**Gayathri**
