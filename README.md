# Monty interpreter — ALX Project
0x19. C - Stacks, Queues - LIFO, FIFO

## Introduction
Welcome to the `Monty` Interpreter project, a part of ALX School's curriculum focusing on stacks and queues. This project serves as a practical exercise aimed at developing an interpreter for Monty ByteCode files.

## Project Overview
The primary objective of this endeavor is to construct an interpreter capable of executing Monty ByteCode instructions. Through this project, we delve into the intricacies of stacks and queues, applying their understanding to build a functional interpreter.

## Key Goals
- Develop a robust interpreter for Monty ByteCode files.
- Implement stack and queue functionalities effectively.
- Gain hands-on experience in handling ByteCode instructions.

## Structure
`main.c`: main program entry point. \
`monty.h`: header file containing function prototypes and structures. \
`process.c`: functions related to the processing of instructions. \
`call_instruction_handler.c`: function that determinate which handler to call. \
`stack_ops.c`: holds stack manipulation functions. \
`memory.c`: contains clean up functions. \
`helper_functions.c`: containes some shared utility functions. \
`[opcode handlers]`: each function in a separate file, such as **push**, **pall** \
`/bytecodes`: directory containes *".m"* test files.

## Monty 0.98 & Monty byte code files
`Monty 0.98` is a language like Python. It turns scripts into Monty byte codes and uses its own set of instructions to work with a special stack.

`Monty ByteCode files` typically carry the `.m` extension, a widespread industry convention but not mandatory as per the language specifications. Each line in these files contains a single instruction. The opcodes and their arguments can be surrounded by any number of spaces. Blank lines, whether empty or composed solely of spaces, are permissible within Monty ByteCode files. Any extra text after the opcode or its required argument is disregarded during interpretation.
```bash
 push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```

## How to Use
Compile the code using gcc or another preferred compiler.
```bash
 gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
Execute the interpreter by providing the Monty ByteCode file as an argument.
```bash
 ./monty bytecode_file
 ```

## Operation codes
| Opcode | Description |
|------------------- | --------------|
|`push`   | Pushes an element to the stack |
|`pall`   | Prints all the values on the stack, starting from the top |
|`pint`   | Prints the value at the top of the stack |
|`pop`    | Removes the top element of the stack |
|`swap`   | swaps the top two elements of the stack |
|`add`    | adds the top two elements of the stack |

## Author
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com

