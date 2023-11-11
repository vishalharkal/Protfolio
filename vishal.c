// #include <stdio.h>

// int main() {
//     int hours, minutes, seconds, totalSeconds;

//     // Input hours, minutes, and seconds from the user
//     printf("Enter hours: ");
//     scanf("%d", &hours);
//     printf("Enter minutes: ");
//     scanf("%d", &minutes);
//     printf("Enter seconds: ");
//     scanf("%d", &seconds);

//     // Calculate the total seconds
//     totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

//     // Display the total seconds
//     printf("Total seconds: %d\n", totalSeconds);

//     return 0;
// }


// write a 
// #include <stdio.h>

// int main() {
//     float fahrenheit, celsius;

//     // Input temperature in Fahrenheit from the user
//     printf("Enter temperature in Fahrenheit: ");
//     scanf("%f", &fahrenheit);

//     // Convert Fahrenheit to Celsius
//     celsius = (fahrenheit - 32) * 5.0 / 9.0;

//     // Display the temperature in Celsius
//     printf("Temperature in Celsius: %.2f\n", celsius);

//     return 0;
// }


#include <stdio.h>
 
int main()
{
 
    int a = 10, b = 5;
    // Arithmetic operators
    printf("Following are the Arithmetic operators in C\n");
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
 
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of a % b is %d\n", a % b);
    // First print (a) and then increment it
    // by 1
    printf("The value of a++ is %d\n", a++);
 
    // First print (a+1) and then decrease it
    // by 1
    printf("The value of a-- is %d\n", a--);
 
    // Increment (a) by (a+1) and then print
    printf("The value of ++a is %d\n", ++a);
 
    // Decrement (a+1) by (a) and then print
    printf("The value of --a is %d\n", --a);
 
    // Assignment Operators --> used to assign values to
    // variables int a =3, b=9; char d='d';
 
    // Comparison operators
    // Output of all these comparison operators will be (1)
    // if it is true and (0) if it is false
    printf(
        "\nFollowing are the comparison operators in C\n");
    printf("The value of a == b is %d\n", (a == b));
    printf("The value of a != b is %d\n", (a != b));
    printf("The value of a >= b is %d\n", (a >= b));
    printf("The value of a <= b is %d\n", (a <= b));
    printf("The value of a > b is %d\n", (a > b));
    printf("The value of a < b is %d\n", (a < b));
 
    // Logical operators
    printf("\nFollowing are the logical operators in C\n");
    printf("The value of this logical and operator ((a==b) "
           "&& (a<b)) is:%d\n",
           ((a == b) && (a < b)));
    printf("The value of this logical or operator ((a==b) "
           "|| (a<b)) is:%d\n",
           ((a == b) || (a < b)));
    printf("The value of this logical not operator "
           "(!(a==b)) is:%d\n",
           (!(a == b)));
 
    return 0;
}