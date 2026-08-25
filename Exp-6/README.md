# String Validation for the Grammar S → 0S0 | A, A → 1A | ε

## Aim

To write a C program to check whether a given string belongs to the grammar:

```
S → 0S0 | A
A → 1A | ε
```

## Project Description

This project implements a C program to verify whether a given binary string belongs to the specified context-free grammar. The grammar generates strings with an equal number of `0`s at the beginning and end, while allowing any number of `1`s (including zero) in the middle.

## Features

- Checks whether the input string belongs to the given grammar.
- Accepts binary strings over the alphabet `{0,1}`.
- Rejects invalid symbols.
- Verifies the grammar using recursive pattern matching.
- Displays whether the string is accepted or rejected.

## Language

- C

## Algorithm

1. Read the input string.
2. Verify that every character is either `0` or `1`.
3. Count the number of leading `0`s.
4. Count the number of trailing `0`s.
5. Check whether the number of leading and trailing `0`s are equal.
6. Verify that all remaining characters between them are `1`s.
7. If all conditions are satisfied, accept the string.
8. Otherwise, reject the string.

## Time Complexity

**O(n)**

where **n** is the length of the input string.

## Space Complexity

**O(1)**

## Sample Input

```text
0011100
```

## Sample Output

```text
Accepted
```

## Result

The C program successfully checks whether the given binary string belongs to the grammar **S → 0S0 | A, A → 1A | ε** and correctly determines whether the string is accepted or rejected.

## Author

Gayathri
