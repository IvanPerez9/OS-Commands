# OS-Commands 

This repository is a small collection of several Operating System commands, some of them already implemented in the UNIX systems, but others expand the OS ones to provide better functionality. Operating systems project 1. 

## How to compile this proyect:

We use Wall and Wextra as options to request or suppress warnings

<b>Wall: </b>This enables all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning), even in conjunction with macros.

<b> Wextra: </b>This enables some extra warning flags that are not enabled by -Wall. (This option used to be called -W. The older name is still supported, but the newer name is more descriptive.)
```shell
$ make
gcc -Wall -Wextra -o test test.c 
```

## What is in the repository?


### 1. Tail:
File that implements a function which prints the last n lines of its input. By default, n is 10. The tail command copies the named file to the standard output beginning at a designated place. <b> If no file is named, the standard input is used.</b>

#### How does it work?
```shell
$ ./test tail <N> <file1> 
```

### 2. Head:
File that implements a function which copy the first "n" bytes of a file into a new one. The number of bytes can be specified. The first specified file is the source and the second one is the destination one. <b>In case that the second file does not exist, it will be created.</b>

#### How does it work?
```shell
$ ./test head <N> <file1> 
```

### 3. Longlines:
File that implements a function which prints the longest lines of its input. By default, n is 10.

#### How does it work?

```shell
$ ./test longlines <N> <file1> 
```
## Requirements:
These commands are designed to work in a UNIX (GCC Compiler needed). <b>Max OSX or Any Linux distribution</b>
