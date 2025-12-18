*This project has been created as part of the 42 curriculum by bsaipidi*

# Push Swap 🎲

> “This is my take on Push Swap — it’s not perfect, but it’s mine.”

## About

**!!! There is a mistake, if you pass 4 arguments the program ingoners it!!!**
This is my Push Swap project for 42 School (Barcelona campus).  
The goal: sort a stack of integers using only two stacks and a very limited set of operations.  
Sounds simple, but the challenge is to do it with as few moves as possible.

## My Algorithm 🧠
I didn’t just copy a known solution — I tried to come up with my own approach.  
It’s split into **4 acts**, kind of like a play:

- **Act 0** → Special case for small numbers (up to 5).  
- **Act 1** → Define ranges of numbers and lift them to the top of stack A.  
- **Act 2** → Take the first node from stack A and push it to stack B, where it gets sorted in descending order.  
- **Act 3** → Bring everything back from stack B to stack A, finishing the sort.  

The idea was mine, but I asked for some help with the implementation — especially with optimizing the range search. Before optimizing it was sorting 100 numbers in 1200 movements, now about 750.

## Requirements 📋
Like all 42 projects, it has to follow the rules:
- Makefile to compile everything  
- Norminette compliance (code style)  
- Compilation with flags: `-Wall -Wextra -Werror`  
- No memory leaks allowed  

## 📬 Contact
Feedback, doubts, or tips are always welcome — don’t hesitate to contact me.
