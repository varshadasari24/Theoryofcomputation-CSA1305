# Design DFA Using Simulator to Accept the Strings "a", "ac", and "bac"

## Aim

To design a Deterministic Finite Automaton (DFA) using a simulator that accepts the input strings:

- a
- ac
- bac

## Project Description

This project implements a DFA that accepts exactly the strings **"a"**, **"ac"**, and **"bac"** over the alphabet {a, b, c}. Any other string is rejected.

The DFA processes one character at a time, changes its state according to the transition function, and determines whether the input string is accepted or rejected.

## Features

- Accepts the strings **a**, **ac**, and **bac**.
- Rejects all other strings.
- Uses deterministic state transitions.
- Easy to implement in JFLAP or any DFA simulator.

## Language

C

## Alphabet

Σ = {a, b, c}

## Algorithm

1. Read the input string.
2. Compare the string with:
   - "a"
   - "ac"
   - "bac"
3. If it matches any one of them, print **Accepted**.
4. Otherwise, print **Rejected**.

## Time Complexity

O(n)

where n is the length of the input string.

## Space Complexity

O(1)

## Sample Input

```
bac
```

## Sample Output

```
Accepted
```

## Result

The program successfully checks whether the given input string is one of the accepted strings ("a", "ac", or "bac").

## Author

**Gayathri**
