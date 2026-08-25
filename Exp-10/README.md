# Design Push Down Automata (PDA) for the Language L = { aⁿbⁿ | n ≥ 0 }

## Aim

To design a Push Down Automata (PDA) that accepts the language:

L = { aⁿbⁿ | n ≥ 0 }

where **n** is the number of **a's** and **b's** in the string.

## Project Description

This project implements a Push Down Automata (PDA) that accepts strings consisting of an equal number of **a's** followed by an equal number of **b's**. The PDA uses a stack to keep track of the number of **a's** read from the input. For every **a**, one symbol is pushed onto the stack, and for every **b**, one symbol is popped from the stack. The string is accepted if the stack becomes empty exactly when the input is completely processed.

## Features

- Accepts strings of the form **aⁿbⁿ**.
- Uses stack operations (Push and Pop).
- Rejects strings with unequal numbers of **a's** and **b's**.
- Rejects strings where **b** appears before **a**.
- Demonstrates the working of a Push Down Automata.

## Language

C

## Alphabet

Σ = {a, b}

## Algorithm

1. Read the input string.
2. Push one symbol onto the stack for every **a**.
3. When **b** is encountered, pop one symbol from the stack.
4. If a **b** is found when the stack is empty, reject the string.
5. After processing the entire string:
   - Accept if the stack is empty.
   - Otherwise, reject the string.

## Time Complexity

O(n)

where **n** is the length of the input string.

## Space Complexity

O(n)

due to stack usage.

## Sample Input

```
aaabbb
```

## Sample Output

```
Accepted
```

## Sample Input

```
aabbb
```

## Sample Output

```
Rejected
```

## Result

The Push Down Automata successfully checks whether the given input string belongs to the language **L = { aⁿbⁿ | n ≥ 0 }** by using stack operations to verify that the number of **a's** and **b's** are equal and appear in the correct order.

## Author

**Gayathri**
