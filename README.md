# OS-Commands 

This repository is a small collection of several Operating System commands, some of them already implemented in the UNIX systems, but others expand the OS ones to provide better functionality. Operating systems project 1. 

## How to compile this proyect:

We use Wall and Wextra as options to request or suppress warnings

<b>Wall: </b>This enables all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning), even in conjunction with macros.

<b> Wextra: </b>This enables some extra warning flags that are not enabled by -Wall. (This option used to be called -W. The older name is still supported, but the newer name is more descriptive.)
```shell
$ make
gcc -Wall -Wextra libreria.c test.c -o test
```
There are other commands that are not in test.c file and they are not for the university project

```shell
$ make
gcc -Wall -Wextra myDiff.c -o myDiff
```
<i> You can change "myDiff" for other command name </i>

## What is in the repository?

### 1.Inside Test.c <i> ( University Project ) </i>

#### 1.1 Tail:
File that implements a function which prints the last n lines of its input. By default, n is 10. The tail command copies the named file to the standard output beginning at a designated place. <b> If no file is named, the standard input is used.</b>

##### How does it work?
```shell
$ ./test tail <N> <file> 
```

#### 1.2 Head:
File that implements a function which copy the first "n" bytes of a file into a new one. The number of bytes can be specified. The first specified file is the source and the second one is the destination one. <b>In case that the second file does not exist, it will be created.</b>

##### How does it work?
```shell
$ ./test head <N> <file> 
```

#### 1.3 Longlines:
File that implements a function which prints the longest lines of its input. By default, n is 10.

##### How does it work?

```shell
$ ./test longlines <N> <file> 
```
### 2.myCd 
Command to change the directory/folder of the terminal's shell.
You can press the tab button in order to auto complete the directory name

##### How does it work?

```shell
$ ./myCd [directory]
```

### 3.myDiff
File that implements a function which compares 2 existing files and determine if they are equal or not.

#### How does it work?
```shell
$ ./myDiff <file1> <file2>
```

### 4.mySeq
Print a sequence of numbers.

<b>mySeq</b> [OPTION]... LAST

<b>mySeq</b> [OPTION]... FIRST LAST

<b>mySeq</b> [OPTION]... FIRST INCREMENT LAST

#### How does it work?
```shell
$ ./mySeq FIRST INCREMENT LAST
```

## Requirements:
These commands are designed to work in a UNIX (GCC Compiler needed). <b>Max OSX or Any Linux distribution</b>
