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
`queue_ops.c`: contains queue manipulation functions. \
`memory.c`: contains clean up functions. \
`helper_functions.c`: containes some shared utility functions. \
`switch_mode.c`: functions to switch data format (LIFO, FIFO) \
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
|`push`   | pushes an element to the stack |
|`pall`   | prints all the values on the stack, starting from the top |
|`pint`   | prints the value at the top of the stack |
|`pop`    | removes the top element of the stack |
|`swap`   | swaps the top two elements of the stack |
|`add`    | adds the top two elements of the stack |
|`nop`    | do nothing |
|`sub`    | subtracts the top element of the stack from the second top element of the stack |
|`div`    | divides the second top element of the stack by the top element of the stack |
|`mul`    | multiplies the second top element of the stack with the top element of the stack |
|`mod`    | computes the rest of the division of the second top element of the stack by the top element of the stack |
|`pchar`  | prints the char at the top of the stack |
|`pstr`   | prints the string starting at the top of the stack |
|`rotl`   | the top element of the stack becomes the last one, and the second top element of the stack becomes the first one |
|`rotr`   | the last element of the stack becomes the top element of the stack |
|`stack`  | set data format to stack LIFO |
|`queue`  | set data format to queue FIFO |

## Author
**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com

