//Binary Search Tree, Stone Yang P6
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
  //1. Read in numbers through .txt or through terminal
  int choice;
  cout << "Binary Search Tree\n Type '1' to use a .txt file, '2' to insert in terminal, '0' to exit.\n";
  cin >> choice;
  
  //text file
  //if(choice == '1')
    {
      int line[200]; //when inputted, copy into separate array, so if option 1 or 2 is taken, the following functions/steps use one main array
      ifstream file ("text.txt"); //reads from .txt
      if(file.is_open())
	{
	  while (getline(file, line))
	    {
	      cout << line << endl;
	    }
	  file.close();
	}
      else
	cout << "File not found.\n";
    }
}
  /*  if(choice == '2')
    {
      int array[200];
      for(int i = 0; i < 200; i++) //spaces will separate values
	{
	  
      

  //2. Create list of values given in step 1

  //3. Take values and order them
  
  //3a. If "n" is total amount of values, use the n/2th term (middle value)
  
  //3b. Using n/2th term, sort them by looking for a lesser value and "cutting" the sort group until it gets the lowest number

  //4. Repeat this recursively until list is ordered from lowest to highest

  //5. Use ordered list to form binary tree structure

  //6. ADD function - Add a number to the list, and repeat the process of sorting (3-5)

  //7. REMOVE function - Remove node that contains a certain value, reorder with the process (3-5)

  //8. PRINT function - Printing the tree by printing parent values (n/2) and starting new lines for children (2n+1, 2n+2)
  
}

  
