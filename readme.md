# Computer Science I
## Lab 4.0 - Loops

This lab introduces loop control structures using the C programming
language.

This is a lab used in Computer Science I (CSCE 155E, CSCE 155H) in the 
[Department of Computer Science & Engineering](https://cse.unl.edu) at 
the [University of Nebraska-Lincoln](https://unl.edu).

## Prior to Lab

* Read and familiarize yourself with this handout.
* Read the required chapters(s) of the textbook as 
  outlined in the course schedule.

## Peer Programming Pair-Up

***For students in the online section:*** you may complete
the lab on your own if you wish or you may team up with a partner
of your choosing, or, you may consult with a lab instructor to get
teamed up online (via Zoom).

***For students in the on campus section:*** your lab instructor 
will team you up with a partner.  

To encourage collaboration and a team environment, labs are be
structured in a *peer programming* setup.  At the start of
each lab, you will be randomly paired up with another student 
(conflicts such as absences will be dealt with by the lab instructor).
One of you will be designated the *driver* and the other
the *navigator*.  

The navigator will be responsible for reading the instructions and
telling the driver what to do next.  The driver will be in charge of the
keyboard and workstation.  Both driver and navigator are responsible
for suggesting fixes and solutions together.  Neither the navigator
nor the driver is "in charge."  Beyond your immediate pairing, you
are encouraged to help and interact and with other pairs in the lab.

Each week you should alternate: if you were a driver last week, 
be a navigator next, etc.  Resolve any issues (you were both drivers
last week) within your pair.  Ask the lab instructor to resolve issues
only when you cannot come to a consensus.  

Because of the peer programming setup of labs, it is absolutely 
essential that you complete any pre-lab activities and familiarize
yourself with the handouts prior to coming to lab.  Failure to do
so will negatively impact your ability to collaborate and work with 
others which may mean that you will not be able to complete the
lab.  

## Lab Objectives & Topics
At the end of this lab you should be familiar with the following
* How loop structures work and how to use them
* The difference between `for` loops, `while` loops, and `do-while` loops
* How to use loops to solve a problem

### Background

Loop control structures allow us to design algorithms and procedures 
that repeatedly execute a block of code.  This allows us to repeatedly 
perform the same computation until some terminating condition is met, 
or to perform the same operation on a collection of data.  Three 
common loop control structures are the for-loop, the while-loop, and 
the do-while loop.  Though the syntax and behavior are slightly different, 
each one supports the same basic functionality.  In fact, loops are 
usually interchangeable: for example any for-loop can be rewritten 
as a while-loop and vice versa.

A `for` loop has three basic components: an initialization statement, 
a terminating condition, and an iteration statement.  An example:

```c
for(int i=0; i<10; i++) {
  printf("%d\n", i); 
}
```

In this loop the first statement initializes the variable `i` 
to `0` while the third increments `i` by one on each 
iteration of the loop.  The second statement is the terminating 
condition: it is evaluated at the start of each iteration of the loop.  
If the condition is true, then the loop executes; if it evaluates to 
false, the loop does not execute any further.  The loop above 
would print out the values 0 thru 9.  On the 10th iteration, the 
variable `i` would have a value of 10 and thus `i < 10` 
would no longer be true and the loop ends.  Take careful note of the 
syntax and usage of semicolons.

A `while` loop is similar, but does not collect all three components 
in the same line.  With a while loop, the terminating condition is 
still checked at the beginning of the loop.  Only if the condition is 
true does the loop execute.  

```c
int i=0;
while(i<10) {
  printf("%d\n", i);
  i++;
}
```

In this example, the initialization is done outside, before the loop 
while the increment is done as part of the loop (inside the loop's 
code block).  

Another loop structure, the `do-while` loop, is slightly different in 
how it behaves.  Though it is similar to the while-loop, the key 
difference is that the do-while loop checks the terminating condition 
at the end of a loop's iteration.  As a consequence, the code block 
in a do-while loop is always executed at least once.

```c
int i;
do {
  printf("%d\n", i);
  i++;
} while(i<10);
```

Note a slight syntax difference as well: there is a semicolon used 
at the end of the terminating condition. 

# Activities

We have provided partially completed programs for each of the 
following activities.  Clone the lab's code from GitHub using the 
following URL: https://github.com/cbourke/CSCE155-C-Lab04

## Warm Up Exercises

We have provided a source file, `exercises.c` (see the `src` directory)
with several loop exercises for you to complete as outlined in the 
comments embedded in that file.  Complete all of the exercises and 
try them with various input values of `n` to ensure they all work.  

Here is a *partial* output example for an input value of `n = 10`.
Submit your solution to the webhandin and use the webgrader to
verify your full program results:

```text
10 13 16 19 
3 2 1 0 -1 -2 -3 
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
1, 4, 9, 16, 25, 36, 49, 64, 81, 100
Sum of 1 thru 10 = 55
Sum of 1^2 thru 10^2 = 385
Sum of even numbers 1 thru 10 = 30
```

## Generate Multiplication Tables

Write a program to generate a multiplication table.  We have
provided starter code in `multTable.c` that reads in an integer
`n` as a command line argument.  Write code to produce an
`n x n` multiplication table for values 1 thru n.  For example,
if `n` is 5, it should produce a table that looks like something
like the following.  

```text
---   1   2   3   4   5 
  1   1   2   3   4   5 
  2   2   4   6   8  10 
  3   3   6   9  12  15 
  4   4   8  12  16  20 
  5   5  10  15  20  25 
```

Be sure to print the first row and column correctly!  Your
code should work for any value of `n`; if `n` were 10, it
would produce the following larger table.

```text
---   1   2   3   4   5   6   7   8   9  10 
  1   1   2   3   4   5   6   7   8   9  10 
  2   2   4   6   8  10  12  14  16  18  20 
  3   3   6   9  12  15  18  21  24  27  30 
  4   4   8  12  16  20  24  28  32  36  40 
  5   5  10  15  20  25  30  35  40  45  50 
  6   6  12  18  24  30  36  42  48  54  60 
  7   7  14  21  28  35  42  49  56  63  70 
  8   8  16  24  32  40  48  56  64  72  80 
  9   9  18  27  36  45  54  63  72  81  90 
 10  10  20  30  40  50  60  70  80  90 100
```

## Number Guessing Game

Shall we play a game?  In this game, a computer program randomly 
generates a number between 1 and 1,000.  You, the player, then 
make guesses as to what that number is.  If you guess correctly, 
the game ends and you win.  For each wrong guess, the computer 
program gives you a hint by telling you whether your guess is too 
low or too high.  The goal is to minimize the number of guesses 
you make.

We have provided an incomplete program, `guessingGame.c`
that randomly generates a number between 1 and 1,000.  You 
need to write a loop structure that prompts the user for a guess.  
While that guess is wrong, the loop should continue.  It should 
also keep track of how many guesses the user makes and, for 
each wrong guess it should print the appropriate hint to the user.

# Handin/Grader Instructions

* Hand in your completed source files: `exercises.c`, `multTable.c`, 
`guessingGame.c` through the webhandin (https://cse-apps.unl.edu/handin) 
using your cse login and password.  There is no worksheet for this
lab. 
* Even if you worked with a partner, you *both* should turn in 
*all* files.
* Verify your program by grading yourself through the webgrader 
(https://cse.unl.edu/~cse155e/grade/) using the same credentials.
* Recall that both expected output and your program's output will 
be displayed.  The formatting may differ slightly which is fine.
As long as your program successfully compiles, runs and outputs 
the *same values*, it is considered correct.

# Advanced Activities (Optional)

Write a program that is the "reverse" of the number guessing game.
That is, the computer is the player and the user is the one who
picks a number between a certain range.  The computer should
then formulate an optimal guessing strategy and the user indicates
if the actual number is correct, lower or higher.  The program
should be "smart enough" to know when the user is cheating.



