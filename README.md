# scripts-in-C
Sundries of C scripts created in the framework of procedural programming subject

**a4f1**
A merchant bought at a wholesale price goods of value
purchaseAmount € and sold them saleAmount €. If the amount
saleAmount is derived from net purchaseAmount and the
merchant's profit rate on net worth
purchaseAmount, be a program that calculates and displays:
a) the trader's profit profit (double), b) the amount collected saleAmount (double).

**a13f2**
A coffee vending machine only accepts ONE €5 note at a time and dispenses them
change in 10, 20 & 50 cent coins as well as 1 and 2 euro coins. Every coffee has a cost
70 minutes. Write a program that requests the number of coffees (int) and displays them
change (in coins) (int) to give from the €5 note. In the event that the
insufficient funds displays the appropriate message. (Money is calculated in euro cents).

**a19f2**
Write a program that calculates traffic fees (float) based on CO2 emissions
(grams, int)

**a20f2**
Write a program in which we will enter a random number (int) from 1 to 7 and
accordingly it will print the corresponding day of the week. The first day of the week (1) is Monday
(Monday). The day names will be displayed in English (Monday, Tuesday, ... Sunday). In
In case of an invalid day number, the message "ERROR" will be displayed.

**a13f3**
Write a program that asks the user for an integer N (limit) and calculates the sum of
of fractions, i.e. 1/1+1/2+1/3+…+1/N. Assume that the user always enters an integer greater than or equal to 1 .
The result should be displayed to 2 decimal places.

**a20f3**
Write a program that reads an array of people's ages (sequence of int numbers that
entered by the user) and find the youngest and oldest age. The program will
continues to read ages until -1 is given as age.

**a23f3**
Write a program that asks the user for a positive integer (int) (> 0) and then if o
integer is even (even) displays on the screen the ascending sequence of the number from 0 with a step of 2,
while if the integer is odd (odd) it displays the ascending sequence of the number from 1 on the screen
with step 2.

**a14f4**
A program which: Will read the values ​​of three integers a, b, c,
It will calculate and display the value of the expression (double):
y=2*max( a,b)+3∗gr(a,b,c )4where max(a, b) is the function to calculate the maximum of the numbers a and b
and gr(a, b, c) the function to calculate the maximum of three numbers a, b, c. The
reading the three numbers, calculating and displaying the value of the expression will
be done in the main program, using the max and gr functions that will
implement as functions in C.

**a5f4**
The numbers for which the sum of the cubes of their digits is equal to the number itself
are called Armstrong numbers (e.g. 153 = 13 +53 +33
). Write a program that will include
below:
a) the function Sum_Cube which will accept an integer (between 1 and 999)
and will return the sum of the cubes of its digits.
b) the function IsArmstrong which will accept an integer and return it
value true or false depending on whether the number is Armstrong or not respectively.
The main program will find and display what the Armstrong numbers are in space
(1-999).

**a23f4**
A program that includes a function named Valid_Time which will accept as
standard parameters 3 integers (int) corresponding to hours, minutes and seconds of one
time of day (time) and will return true or false depending on whether the given
time (time) is valid or not (that is, if the hours should be from 0 to 23 and the
minutes and seconds to be from 0 to 59). The data (hours, minutes and seconds) will
are requested by the user in the main program, as shown in the following examples. In the end
the program will display the message “Valid: yes” or “Valid: no” from the main program

**a26f4**
Create the functions f() and g(), which are defined by the following mathematicians
types, which should be implemented as functions in the language f (x )={x+2 , x>0
−3 x+7 , x≤0}
 g( x,y )={ x−y, x>0 and y>0
7 x−5 , otherwise }
The values ​​of the x,y parameters in the above functions are integers (int). The type of functions
will be determined by you. To implement a program that asks the user for the parameters x and y,
and then displays (a) the result of the function f(x), (b) the result of the function
g(x,y) and the result of the function f(g(x))

**a27f4**
In the case of codes consisting of a large number of digits (e.g. bank accounts,
payment codes etc) for the security of transactions there should be an easy way
ensuring that the user does not type the digits incorrectly. The way is to add to
codes check digits. A simple way to do the above is to add 2 check digits to
end of the code thus creating the final code. For example:
Initial Code (N) Check Digits Final Code (EN)
12558 60 1255860
55257 03 5525703
The check digits of a prime N (long) code are given by the formula:
Check Digits = (98 - (N*100) % 97) % 97 (1)
The validity check of a final ΕΝ code is easily calculated by checking if the ΕΝ transaction % 97 has as
result 1, i.e. given a final EN code this is valid if the integer remainder of me
the number 97 is one.
Implement:
Functions - Procedures - page 9 of 13
(a) An encode function which accepts an initial code (long) and returns the corresponding final one
code (long). It is again stated that the final code results from adding to the end of an initial
code of check digits, which are given by formula (1).
(b) a check function which accepts a final code and returns true if it is valid and false if
contrary case. It is again stated that the check is done by considering whether the whole balance of the final
code with 97 is equal to 1.
(c) a program which accepts from the user two limits of initial codes (long) and displays for each
code between these two limits the initial code, the final code and whether it is valid or not,
according to the following examples.

**a28f4**
. Write a program that will read the code and price of an unknown number of products that
someone bought in a department store. The code should be in the range [0..2000] and be done
the corresponding control from the program. Data entry (code and price) will continue until
to be given as code zero (see execution example).
Discount
During the discount period, each product is discounted according to its code, as follows:
Product code Discount percentage
1..300 5%
301..500 10%
501..1000 15%
1001..2000 20%
Calculation of Points
For each product some points are given, which the customer redeems with various gifts. Specifically,
for each product is given:
• a point regardless of its value and
• additionally for products with a code from 1000 to 1500 one point for every 5 Euro of the final
value of the product. (ie the value obtained after the discount). The extra points
are calculated by the formula
extra_points = ceil(finalvalue/5)

**a29f4**
Implement the corresponding functions in the C language of the following mathematical definitions:
• The greatest common divisor (gdc) of two non-negative integers is given by the following recursive
definition:
gcd (a, b)={
a , if b=0
gcd(b, a%b), else }
• Two integers are said to be relatively prime (coprime) if their greatest common divisor is
1.
• Euler's function φ (phi) of a positive integer N is the number of positive integers
of numbers less than or equal to N, which are relatively prime to N (i.e. the integers K with 1
<= K <= N).
Implement a C program that prompts the user for an integer X and displays its values
of Euler's function φ from 1 to the number X. Assume that the user always gives a number
greater than or equal to 1

**a11f5**
The national meteorological office records every 8 hours the temperatures of 10 cities in Greece (the names of the cities are
coded with numbers: 0=Thessaloniki, 1=Athens etc). Write a program that will read them
temperatures (double variables) of a twenty-four hour period for each city (temperature 0
8 o'clock,1
8 o'clock, 2
of 8 hours for each city). Then calculate and display:
a) the national average temperature (double type variable) and
b) for each city its average temperature and its maximum deviation from the national average
(variables of type double).

**a13f5**
A program which:
(a) It will prompt the user for two positive integers R (rows) and C (columns) from 1 to
and 10. You can safely assume that the user will enter correct numbers according to the
previous limits. No control required. The input will be done by the main function.
(b) It will "fill" the R x C elements of a two-dimensional array A of integers (of dimension 10x10) with random
integers from 0 to 99 (rand() % 100), by calling a populate_data function.
That is, the program will use part of the matrix A, based on the numbers R and C, entered by
user.
(c) It will call a print_array function that will print the R x C elements of array A.
(d) It will call a change_array procedure, which for each row of array A will set as many
elements are to the left of the maximum of the line equal to it (ie those on the same line as
that, but have a smaller column index will become equal to the maximum).
(e) Finally, the elements of the "changed" array will be displayed again by rows.
All your functions will follow the C99 standard for 2-dimensional arrays.

**a16f5**
To develop (using the functions described) a program in which,
 - will fill array a of size 50 with random numbers from 0 to 9 using
function rand() (a[i]=rand() % 10), of library <stdlib.h> (function populate)
- will display the array a on the screen (function printArr),
- will request an integer N from 0 to 9 from the user - no check required,
- will call the checkTable function, which will calculate and return the count of
of occurrences of the number N in table a and will tabulate the positions of table a at
which the number appears (the function accepts 4 arguments)
- will display the results to the user, as shown in the example run. The appearance of
results will be done by the main() function (main program), where you will display it
number of occurrences of the number N and the number of places the number N appears by calling it
printArr.

**a21f5**
Write a program that reads 5 real numbers of double type and
stores in an array. The program calculates the distance between its consecutive elements
table and stores it in a new table (you will specify the required size). The distance
is derived as the absolute value of the difference of the elements (fabs function).
The program will finally display the original table that
Tables entered by the user, on one line as well as table of differences.

**a22f5**
. Write a program to check the validity of credit card numbers. The program will
reads a sixteen-digit integer (of type long long - see clarification at the end of the exercise*)
by the user and will print the card number followed by the word "VALID" if he
is a valid credit card number or the word "invalid" otherwise, according to the messages that
are shown below.
To implement the exercise, you will create a table of type long long, size 16 elements,
in which in each position of the table you will put a digit of the code.
The validity of each sixteen-digit number is checked according to the following:
• If the first digit is less than 4 or greater than 7, the card is marked as not
valid.
• If the number does not have exactly 16 digits then the card is invalid.
• Otherwise:
◦ We double (only) the digits that are in the odd positions of the number (i.e. the 1st,
3rd, 5th,..., 15th, as shown in the execution example in yellow). All of them
become two digits, we add their digits to make them single digits. Examples:
▪ initial digit 4, 2*4=8 so new digit 8.
▪ initial digit 7, 2*7=14 so new digit 1+4 =5.
◦ Calculate the sum of all the resulting new digits (i.e. both those in
odd places after the changes as well as those in the even ones). If the sum of 16 digits is
integer multiple of 10, the card is valid. and otherwise invalid.

**a2f6**
Write a program that reads non-negative integers (int) from the user (not
needs checking) and will store them in a one-dimensional array of maximum size 100. The
program accepts numbers from the user until he enters the value -1. Then it calculates it
maximum and minimum element of the array and displays (from the main program ie the function
main()) appropriate screen message as shown in the example run. Your program will
must have:
a) a function readData which reads the numbers from the user, stores in the table
(all numbers except -1), and returns the count of values ​​entered by
user without calculating the value -1,
b) a findMinMax function which finds and updates the calling function at the same time
for both the smallest and largest value of a one-dimensional array of integers,
that is, it "returns" two values.

**a6f6**
It will display the average weight, height and age for both males and females
women. Calculating (rather than displaying) the average for each element (height, weight, etc.)
age) will be done with the help of one (only) void FindMean function. In addition to the other parameters that you will define in the function, 
it will also have as a parameter a numerical index (values ​​1,2,3). The subscript will point to the corresponding element of the quartet, whose average
is calculated on the specific call, i.e. the appropriate column of the 2D array. For example, when the numerator is 1, then the average weight will becalculated. 
The function FindMean in each of its calls will simultaneously "return" the corresponding mean for men
and the corresponding average for women, will "return" i.e. 2 values.
In the main() function the above functions/procedures will be called appropriately in order to
read the data and then display the averages of weight, height and
age of men and women. Averages will be displayed to one decimal place.

**a9f6**
A company sells 5 products worth 250, 150, 320, 210 and 920 euros respectively. The sale of
above products is done through 4 sellers. The following table gives the sales made in
a week:

N/A Seller
Product
0
Product
1
Product
2
Product
3
Product
4
0 10 4 5 6 7
1 7 0 12 1 3
2 4 19 5 0 8
3 3 2 1 5 6
If the sales table is given and fixed, and the product prices are stored in
fixed table of suitable dimension, to write a program that will:
a) calculates and will store in the salesPerson[] array the total collection amount (int)
for each salesperson, via a calculateSales() function
b) calculates and will store in the productSale[] array the quantities (int) that
sold by each product, via a calculateProductSales() function
c) will print the total sales of each seller and the total sales of each product,
d) The seller with the largest (in terms of revenue) sales and his revenue and the product with the
more sales and how many units he sold.
For the above calculations to implement
e) a maxArray() function which will accept a one-dimensional array, its size
(number of elements) and will return its maximum element (int) and its position in the array
(int),
f) a function printArray() which accepts an array, its dimension and will print it
table on the screen in two columns, where the first column will give the position of the item in
table and in the second its value.

**a13f6**
The following table is given which contains somatometric data of students
1, 40, 120, 12
0, 45, 110, 13
0, 50, 140, 14
1, 40, 120, 14
1, 45, 135, 15
Each quartet refers to the details of a student, which are, in order, the following:
gender (0 if boy, 1 if girl)
the weight (in kilograms, integer value)
the height (in centimeters, integer value)
the age (in years, integer value)
Write a program that will find the greatest weight, height and age for both boys and
and for girls. The calculation (rather than the display) of the largest (weight, height, age) will
is done with the help of the same void FindMax function (ie FindMax will be called to find
each time depending on the parameter given (see below), either the greater weight, or the
greater height or older age. In addition to the other parameters you will set in the function,
there will also be a pointer (values ​​1, 2, 3) as a parameter. The pointer will show the
Indicators - page 12 of 15
corresponding element of the quad, whose highest value is calculated in the given call,
that is, the appropriate column of the two-dimensional array. For example, when the numerator is 1, then
the largest weight will be calculated, when the numerator is 2, then the largest will be calculated
height, etc. The FindMax function on each of its calls will "return" 2 values ​​the largest value for
boys and the higher price for girls (see note 5 at the beginning of the booklet for
term "returns").
In the main() function the FindMax function will be called appropriately (multiple times) in order to
be calculated and then display each time the largest values ​​of weight, height
and the age of boys and girls. Values ​​will be displayed to one decimal place
digit

**a16f7**
Write a program that will accept an alphanumeric character up to 99 characters (you will declare a
array of 100 characters) and display the digits contained within the alphanumeric and the
their sum, as shown in the following examples. If there is no digit, then it is displayed
the message "No digits in input".

**a7f8**
A car rental company keeps the following data for each rental:
a) Rental number
b) Brand
c) Cubic
d) Tenant's name
e) Rental days
f) Price per day
Write a program that will perform the following functions:
1. Enter the number of rentals
2. Enter the details of each rental
3. Calculation of detailed payment statement.
4. Calculation of the rental with the greatest profit
5. Show detailed status
6. Display the data (Brand, Cubic Units, Total Amount) for the rental with
greater profit.

**a8f8**
Write a program that includes a box structure, which represents rectangles
parallelograms, and includes five integer fields: width, height, depth
(depth), area (surface) and volume (volume). The program will include the following
functions:
a) A function that asks the user for the dimensions of the box in cm (non-negative integers –
no control required), i.e. width, height, depth and will return
box structure with the corresponding three fields completed.
b) A function void calc_box_area(box *a_box) to calculate the total area
of all sides of the box (area field). The function will update its corresponding field
structure.
c) A function void calc_box_volume(box *a_box) that calculates the volume (field
volume) of the box. The function will update the corresponding field of the structure.
The above data will be entered into a structure table (maximum table dimension N=20). In its i position
table the details of the i car will be entered. The rental number will be automatically given by the
program and not by the user (for the i rental, i will be given as the rental number).

**a10f8**
A project calendar records various work packages. Each task has a name
(char name [60]), start month (int) as measured from the start of the project, and duration in months
(int). For example:
• the “project specifications” task has a start time of 0 (starts in the first month of the project) and
duration of 4 months, so it is considered to be completed in the 4th month.
• the "implementation" task has a start time of 2 and a duration of 8 months, so it is assumed that
completes on the 10th month (10 = 8 + 2)
(a) Define an appropriate structure (new type) to store the tasks' data.
(b) Designate a program which:
• Asks the user for the total number of tasks of the WP project
• Through a function ReadWorkpackages asks the user for the details of WP jobs
(name, start time and duration)
• Finds which task starts first via the FindFirstWp function, which returns the
structure of the first time work.
• Prints the first time task's data to the screen via the main() function.
• Finds the total project duration (makespan) via the FindMakespan function. OR
total project duration is defined as the month in which the last task is completed
(all tasks are finished).
• Displays the total duration of the project on the screen

**a2f9**
is the text file 'i2f9.dat' of the students of a school which includes the following information about
each student:
 student name, which cannot contain more than 30 characters
 number of absences (int)
 various student details, which cannot exceed 68 characters
The above data for each student are separated by commas.
It is requested to make a program that will create the text file from the student file 'i2f9.dat'
'o2f9.dat' with the students with more than 100 absences. The text file 'o2f9.dat' will contain the
first name (30 characters) and the number of absences (int) of each student whose absences
exceed 100. Finally, it will contain the number of all students of the school as well as the number of
of school students whose absences exceed 100.
The program to be developed will:
 opens the input file ('i2f9.dat') in the main program (function main() )
 reads the contents of the input file and stores them appropriately in a structure array
(maximum size 100), via a readInput function. Parameters of the function the file, o
structure table, the number of all students in the school, the number of students in the school that
their absences exceed 100.
 creates a second text (output) file named 'o2f9.dat' in the main program
 saves in the output file 'o2f9.dat' the details of students with absences as described
above. Saving is done via the writeOutput function. Parameters of the function the
file, the current size of the struct array, the struct array, the count of all its students
school.
 closes the input and output files







