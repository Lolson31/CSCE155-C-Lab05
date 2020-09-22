
# CSCE 155E
## Lab 5.0 Worksheet

Name(s) and Login(s):



1. Identify three functions you've used prior to this lab and
identify the return type, the function identifier (name) and
its parameter types.  

For example, the math library's `pow` function has the following
characteristics:
  * Return Type: `double`
  * Function Name: `pow`
  * Parameter Type(s): `(double, double)`

  * Return Type: `double`
  * Function Name: `log`
  * Parameter Type(s): `(double)`

  * Return Type: `double`
  * Function Name: `sqrt`
  * Parameter Type(s): `(double)`

2. Open all the files and review the code to answer the following
questions.

  a) Identify all of the user-defined functions in the program
  along with the functions' return types and the number of parameters
  they accept.
  * Return Type: `int`
  * Function Name: `insertionSort`
  * Parameter Type(s): `(int, int)`

  * Return Type: `int`
  * Function Name: `strToIntArray`
  * Parameter Type(s): `(char, int)`

  * Return Type: `int`
  * Function Name: `getOrderStatistic`
  * Parameter Type(s): `(int, int, int)`

  b) Among the functions `main`, `strToIntArray`, `insertionSort`,
  and `getOrderStatistic`: identify which function calls which
  other function(s).
  main calls all other functions
  strToIntArray calls malloc and atoi
  insertionSort calls no other functions
  getOrderStatistic calls insertionSort

  c) How might you implement the following function?  Hint: it
  should only be a one-liner.
  ```c
  int getMin(int *arr, n)
  {
      return (*arr < n) ? *arr : n;
  }
  ```

  d) Prototypes and documentation were placed in the header file
  and function definitions were placed into a separate source file.
  Identify at least one advantage of this approach.

  It would make the code better organized, as you could write the explanations for the functions in the separate file.
