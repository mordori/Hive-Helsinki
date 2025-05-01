# libft

> A library of commonly used standard and additional utility functions from libc recreated in C.

### 🚨 Usage

- Create the `libft.a` library in your terminal with command:
``` Makefile
make all
```
- To run the tests for a function, use command `make test TEST=name` where name is the function to be tested.
- E.g., for `ft_split.c` the command is:
``` Makefile
make test TEST=split
```
- To compile and run the tests for bonus functions, use the following commands:
``` Makefile
make bonus
```
``` Makefile
make test bonus
```
- To delete all of the compiled files, use:
``` Makefile
make fclean
```
