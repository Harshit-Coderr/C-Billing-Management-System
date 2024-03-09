# C-Billing-Management-System
<h2>This code appears to be written in C and implements a billing system for a shop. It takes customer details, allows them to purchase  various cosmetic, grocery, and beverage items, calculates the total bill amount including tax, and displays a receipt.</h2>


<h3><p align="center"><b>Header Inclusions (#include statements)</b></p></h3>

<h2>The code starts by including several header files using #include statements. These files provide pre-written functions and definitions that the code will use. </h2>

 <stdio.h>: This header provides standard input/output functions like printf for printing to the console and scanf for getting user input.
 
 <windows.h>: This header is specific to Windows systems and might provide functions for interacting with the Windows operating system 
              (OS). However, its use in this code seems limited. Consider removing it if targeting other platforms.
 
 <string.h>: This header contains functions for string manipulation, like strlen (to get string length) and strcmp (to compare strings).
 
 <ctype.h>: This header provides functions for working with characters, like isalpha (to check if a character is an alphabet) and isdigit 
            (to check if a character is a digit).
 
 <time.h>: This header offers functions for working with time and dates, like time (to get the current time) and ctime (to convert time 
           to a human-readable format).
           



            
Variable Declarations (int, long long int, float, char)

long long int number, id: These variables store the customer's phone number (10 digits) and ID (11 digits) as long integers.

int number1, name1: These seem like unused integer variables.

float CGST, SGST, grand: These variables store the Central Goods and Service Tax (CGST), State Goods and Service Tax (SGST), and grand 
total (including tax) as floating-point numbers.

Various integer variables are declared for quantities of cosmetic, grocery, and beverage items (e.g., foundation, concealer, sugar, tea, etc...).

char name[50]: A character array to store the customer's name with a maximum length of 50 characters.

time_t t: A variable of type time_t to store the current time.



<h3><p align="center"><b>Main Function</b></p></h3>



The main function is the entry point of the program.

Customer Details

The code uses printf statements with formatting to display a visually appealing billing system header.

It then prompts the user to enter their name using fgets and stores it in the name variable.

An if statement checks if the entered name consists only of alphabets using isalpha and strspn functions.

Customer Number and ID (if name is valid)

If the name is valid, the code prompts the user for their 10-digit phone number (number) and 11-digit ID (id) using scanf.

Another if statement checks if the phone number has exactly 10 digits.

Product Selection (if number is valid)

If the phone number is valid, various printf statements with formatting are used to display categorized lists of cosmetic, grocery, and 

beverage items along with their prices.

The code uses a loop (not explicitly shown) to prompt the user to enter the quantity for each item using scanf.

Calculating Bill Amounts (if ID is valid)



An if statement checks if the ID has exactly 11 digits. If valid, the code calculates the total price for each cosmetic, grocery, and beverage category by multiplying the quantity with the unit price and stores them in separate variables (cos_sum, gro_sum, bev_sum).

It also calculates the total quantity and total price for all items (qt_gro_sum, qt_cos_sum, qt_bev_sum, all_sum).

CGST and SGST are calculated as 2.5% of the total bill amount (all_sum).

The grand total (grand) is calculated by adding CGST, SGST, and the total bill amount.

Printing the Receipt

The code uses formatted printf statements to display the receipt header with shop information, customer details (name, number, ID), a table with item descriptions, quantities, and prices categorized by Grocery, Cosmetic, and Beverage, subtotals, tax amounts (CGST, SGST), and the grand total.

It uses ctime to get the current date and time and prints it on the receipt.


<h3><p align="center"><b>Error Handling</b></p></h3>



The code uses nested if statements to handle invalid inputs for name, phone number, and ID. It displays error messages if the user enters an invalid name (not alphabets), phone number.
