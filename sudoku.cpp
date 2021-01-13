#include<bits/stdc++.h>
#define n 9
#define UNASSIGNED 0
using namespace std;
bool unassignedlocation(int arr[n][n],int& row,int& col)
{
	for (row = 0; row < n; row++)
       
		 for (col = 0; col < n; col++)
            
			if (arr[row][col] == UNASSIGNED)
                return true;
	     	
        
    return false;
}
bool incoloum(int arr[n][n],int col,int num)
{
for (int row = 0; row < n; col++)
        
		if (arr[row][col] == num)
            return true;
    return false;	
}
bool inrow(int arr[n][n],int row,int num)
{ for (int col= 0; col < n; col++)
        {
		if (arr[row][col] == num)
            return true;
    }
    return false;
}
bool inbox(int arr[n][n],int br,int bc,int num)
{
	
    for (int row = 0; row < 3; row++)
        {
		for (int col = 0; col < 3; col++)
            {
			if (arr[row + br][col + bc] ==num)
               return true;
           }
       }
    return false;
}
bool issafe(int arr[n][n],int row,int col,int num)
{
	return !incoloum(arr,col,num)&& !inrow(arr,row,num) && !inbox(arr,row-row % 3,col-col % 3,num) && arr[row][col]==UNASSIGNED;
}
bool solvesudoku(int arr[n][n])
{ 
  int row,col;
  if (!unassignedlocation(arr, row, col))
		return true;
    
	for(int num=1;num<=9;num++)
	{
	   if(issafe(arr,row,col,num))
	   {
	   	 arr[row][col]=num;
	   	 if(solvesudoku(arr))
	   	    return true;
			  
		  arr[row][col]=UNASSIGNED;  
	   }
	}
	return false;
}
void print(int arr[n][n])
{
    for (int row = 0; row < n; row++) 
    {
        for (int col = 0; col < n; col++)
            cout <<"|" <<arr[row][col] << " ";
        cout <<"|"<< endl;
    }
}
int main()
{
	int arr[n][n]={{ 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    if(solvesudoku(arr)==true)
    {
    	print(arr);
	}
	else
	{
		cout<<"no solution exist";
	}
	return 0;
}
