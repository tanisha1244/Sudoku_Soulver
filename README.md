# Sudoku_Solver
   This is a program which solves 9x9 Sudoku puzzles. Written __completely in C++__ and __built wholly from scratch__, this program reads input either from a user or from a    file containing the Sudoku values and solves the puzzle. It employs concepts such as backtracking and recursion.\
 we have a Sudoku grid and we have to solve this famous number maze problem, Sudoku. We know that Sudoku is a 9 x 9 number grid, and the whole grid are also divided into 3 x 3   boxes There are some rules to solve the Sudoku.\
   1.We have to use digits 1 to 9 for solving this problem.\
   2.One digit cannot be repeated in one row, one column or in one 3 x 3 box.\
Using backtracking algorithm, we will try to solve Sudoku problem. When some cell is filled with a digit, it checks whether it is valid or not. When it is not valid, it checks for other numbers. If all numbers are checked from 1-9, and no valid digit found to place, it backtracks to previous option.\
__Input__
    
   ![sudoku_solver](https://user-images.githubusercontent.com/66546368/104476942-c6bc4b80-55e6-11eb-8e1e-1e6436809212.jpg)

__Output__
  
  
