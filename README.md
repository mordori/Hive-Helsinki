# <p align="middle">Collection of my projects at [Hive Helsinki](https://www.hive.fi/)</p>

# 📢 [Feedback](https://github.com/mordori/Philosophers)
**Snapshot of feedback received through peer project evaluations.**
- Each entry displays the critique I gave to other students, and the feedback I received from conducting those evaluations.
- In cases where I successfully validated a student's project, but the grade is 0, the student cancelled their project before being fully evaluated. They most likely found mistakes in their following evaluations.

<br>

# 💾 Projects

> [!IMPORTANT]
> The projects in `C` are made in accordance with a programming standard called `Norm` that defines a strict set of rules to follow when writing code. The full standard can be viewed [here](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf).

<br>

## [ft_transcendence]() `Typescript` `Docker` `Babylon.js`
**Work in progress.**
- WIP

## [Cpp Modules]() `C++`
**Work in progress.**
- WIP

## [miniRT]() `C`
**Work in progress.**
- WIP

## [minishell]() `C`
**Work in progress.**
- WIP

## [Philosophers](https://github.com/mordori/Philosophers) `C`
**Dining philosophers with threads and mutex.**
- Resources shared between the threads are locked with mutex to avoid data races
- Main thread handles the monitoring of the philosophers' status
- Dedicated logging thread decoupled from the status monitoring handles the printing of the philosophers' states

## [FdF](https://github.com/mordori/FdF) `C`
**Simple wireframe model software renderer.**
- Implements a software-based geometry pipeline similar to that of modern GPUs
- Uses the Liang-Barsky algorithm for line clipping and Bresenham’s algorithm for rasterizing the lines
- Includes an orbiting camera controller that emulates the navigation style of 3D modeling software like Blender

## [push_swap](https://github.com/mordori/push_swap) `C`
**Program that sorts a stack in ascending order using indexed least significant digit LSD radix sort.**

The goal of the project was not computational efficiency, but to minimize the number of operations performed.
- Uses two LIFO (Last In — First Out) stacks `a` and `b` (vector arrays)
- Parses and validates user input for duplicates with a hashtable
- Indexes the numbers using insertion sort with a temporary copy
- Sorts the stacks with `pb`, `pa`, `sa`, `ra`, and `rra` operations
- Worst-case time complexity is $O(n^2)$ with insertion sort as the dominant term
- Space complexity is $O(n)$
- Sorts 100 numbers in fewer than 1,100 operations and 500 numbers in fewer than 7000 operations under all conditions

## [minitalk](https://github.com/mordori/minitalk) `C`
**Program that sends a string to another process using UNIX signals.**

It first sends the length of the string in bits, then sends the actual string, bit by bit. The receiving process acknowledges each bit via a signal handler.
- Server-client model
- ACK handshake
- Ensures the complete message is received before printing it
- Supports unicode characters

## [libft](https://github.com/mordori/libft) `C`
**Static library of fundamental and additional utility functions from libc recreated in C.**
- Some of the functions have been modified from the subject, e.g. to handle errors
- Includes functions from subsequently completed projects and expanded utility implementations

## [get_next_line](https://github.com/mordori/get_next_line) `C`
**Function that returns a line read from a file descriptor.**
- Included in `libft`

## [ft_printf](https://github.com/mordori/ft_printf) `C`
**Simplified recreation of the variadic `printf` function.**
- Included in `libft`

<br>

## Inception `Docker`
**Work in progress.**
- WIP

## born2beroot `VM` `shell`
**Project about creating a virtual machine in VirtualBox, installing Debian, and implementing strict rules for use.**
- Topics explored included LVM, SSH, ufw, sudo, users, passwords, logs, and cron among other things
- Clear understanding of the commands and protocols used was a rigorous instruction for this project

## Netpractice `TCP`
**Work in progress.**
- WIP
