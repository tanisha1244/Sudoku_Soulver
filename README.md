# Sudoku_Solver
   This is a program which solves 9x9 Sudoku puzzles. Written __completely in C++__ and __built wholly from scratch__, this program reads input either from a user or from a    file containing the Sudoku values and solves the puzzle. It employs concepts such as backtracking and recursion.\
 we have a Sudoku grid and we have to solve this famous number maze problem, Sudoku. We know that Sudoku is a 9 x 9 number grid, and the whole grid are also divided into 3 x 3   boxes There are some rules to solve the Sudoku.\
   1.We have to use digits 1 to 9 for solving this problem.\
   2.One digit cannot be repeated in one row, one column or in one 3 x 3 box.\
Using backtracking algorithm, we will try to solve Sudoku problem. When some cell is filled with a digit, it checks whether it is valid or not. When it is not valid, it checks for other numbers. If all numbers are checked from 1-9, and no valid digit found to place, it backtracks to previous option.\
__Input__
    
   ![sudoku_solver](https://user-images.githubusercontent.com/66546368/104476942-c6bc4b80-55e6-11eb-8e1e-1e6436809212.jpg)

__Output__
  
   ![sudoku_solver1](https://user-images.githubusercontent.com/66546368/104477381-0a16ba00-55e7-11eb-886b-406a6a33036e.jpg)
   
-----
# steps
 ## incol()
 Define a method called __incol()__, this will take call and num\
      for each row r in the arr, do\
      if  arr[r, col] = num, then return true\
  return false otherwise\
  
 ----
## inrow()
Define a method called __inrow()__, this will take row and num\
for each column c in the arr, do\
if arr[row, c] = num, then return true\
return false otherwise\

------
## inbox()
Define a method called __inbox()__ this will take boxStartRow, boxStartCol, num\
for each row r in boxStartRow to next 3 rows, do\
for each col r in boxStartCol to next 3 columns, do\
if arr[r, c] = num, then return true\
return false otherwise\

-------
## unassignedlocation()
Define a method called __unassignedlocation()__, this will take row and col\
for each row r in the arr, do\
for each column c in the arr, do\
if arr[r, c] = 0, then return true\
return false\

------
##  issafe()

Define a method called __issafe()__, this will take row, col, num\
if inrow(row, num) and incol(col, num) and inbox(row – row mod 3, col – col mod 3, num) all are false and arr[row][col]==0 , then return true\

-------
##  solvesudoku()
Define a method called __solveSudoku()__, this will take the grid\
if no place in the grid is empty, then return true\
for number 1 to 9, do\
if issafe(row, col, number), then\
arr[row, col] := number\
if solveSudoku = true, then return true\
grid[row, col] := 0\
return false\

-------
## main function()
  In main function, values of each row and column has already been assigned in which 0 denotes as unassigned location.\
  If __sudokusolve(arr)__ is true then Solved Sudoku will be printed using __print(arr)__ function.\
  If there is no solution of Sudoku then, a message __"No Solution of this Sudoku Exists"__ dispalyed on the output screen.\
  
  --------

