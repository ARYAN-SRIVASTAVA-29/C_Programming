/*
#include <stdio.h>
  //declaration/prototype
void helloWorld();

int main(){

helloWorld(); //function call
helloWorld();
helloWorld();

    return 0;
}

//function definition
void helloWorld(){
    printf("Hello World \n");
}

*/


//=================================================


/*

//Ques: Write 2 functions- one to print "Hello" & second to print "Goodbye"

#include <stdio.h>


void sayHello();
void sayBye();


int main(){

sayHello();
sayBye();

return 0;

}

void sayHello(){
    printf("Hello Guys\n");
}

void sayBye(){
    printf("Will be meeting Agian , Bye");
}

*/


//==================================================================


/*

// Ques: Write a function that prints "Namaste" if user is Indian & Bonjour if the user is French.

#include <stdio.h>

void namaste();
void bonjour();

int main(){

int input;
printf("For INDIAN enter 1 \n For French enter 2");
scanf("%d", &input);

if(input == 1){
    namaste();
}
else if(input == 2){
    bonjour();
}
else{
    printf("Invalid Input");
}



return 0;

}


void namaste(){
    printf("Namaste Indian\n");
}
void bonjour(){
    printf("Bonjour French");
}

*/


//==========================================================

//*************Arguements*******************

/*
#include <stdio.h>

int sum(int a, int b);


int main(){

int d, e;

printf("Enter First Number\n");
scanf("%f", &d);
printf("Enter Second Number\n");
scanf("%f", &e);

int s = sum(d, e);
printf("The sum is %d" , s);



    return 0;
}

int sum(int a, int b){
    return a + b;
}

*/

//---------------------------------------------


//Ques:Function to print Table of n

/*
#include <stdio.h>

void printTable(int n);

int main(){

int n;
printf("Enter The number for Table\n");
scanf("%d", &n);

printTable(n); //arguement / actual parameter

return 0;
}

void printTable(int n){ //parameter/formal parameter 
for(int i =1 ; i<= 10; i++){
    int product = n * i;
    printf("%d\n", product);
}
}
*/

//-----------------------------------------------------


//Ques: Use Library Functions to calculate the square of a numnber given by user.


/* #include <stdio.h>
#include <math.h>

int main(){

int n = 4;
printf("%f", pow(n, 2));

return 0;

} */



//------------------------------------------


//Ques: Write Function to calculate area of a square, a circle & a rectangle.


/* #include <stdio.h>

void areaSquare(int side);
void areaCircle(float radius);
void areaRectangle(int base, int height);

int main(){

int side;
float radius;
int length;
int breadth;

printf("Enter the side of square For area\n");
scanf("%d", &side);
areaSquare(side);

printf("Enter the radius of circle For area\n");
scanf("%f", &radius);
areaCircle(radius);


printf("Enter the Length of Rectangle For area\n");
scanf("%D", &length);
printf("Enter the Breadth of Rectangle For area\n");
scanf("%d", &breadth);
areaRectangle(length, breadth);


    return 0;
}


void areaSquare(int side){
    printf("Area of square is: %d ", side*side );
}

void areaCircle(float radius){
printf("Area of circle is %f", 3.14 * radius * radius);
}

void areaRectangle(int length, int breadth){
    printf("Area of rectangle is %d", length * breadth);
}
 */



//-----------------------------------------

//----------------------------------------------
//******************Recursion********************
//------------------------------------------------


//Ques: Print Hello World 5 Times

/* #include <stdio.h>

void printHW(int count);

int main(){
int count = 5;
printHW(count);
    return 0;
}

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printHW(count - 1);
} */

//----------------------------------------------


// Ques: Sum of first n natural numbers

/* #include <stdio.h>

int sum(int n);

int main(){
  
printf("Sum is %d", sum(5));

    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to (n-1)
    int sumN = sumNm1 + n;
    return sumN;
} */

//------------------------------------------

//Ques: Factorial of n

/* #include <stdio.h>

int factorial(int n);

int main(){

printf("Factorial is %d" , factorial(1));

}

int factorial(int n){
    if(n == 1){
        return 1;
    }
   int factNm1 = factorial(n-1);
   int fact = factNm1 * n;

   return fact;
} */


//------------------------------------------


//Ques: Write a function to convert celsius to Fahrenite

/* #include <stdio.h>

float conversion(float celsius);

int main(){

float celsius;
printf("Enter the temp in celsius\n");
scanf("%f", &celsius);

printf("The temperature in Fahrenite is %f", conversion(celsius)) ;
 return 0;
}

float conversion(float celsius){
    float far = celsius * 9.0/5.0 + 32;
    return far; 
}
 */

//------------------------------------------------

//Ques: Write a Function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

/* #include <stdio.h>

float calcPercentage(float science, float maths, float Sanskrit);

int main(){

printf("Percentage is %f", calcPercentage(50, 42, 60));

    return 0;
}

float calcPercentage(float science, float maths, float Sanskrit){
    float percentage = (( science +  maths + Sanskrit) / 300) * 100 ;

    return percentage;

} */


//-------------------------------------------------


//Ques: Write a function to print n terms of the fibonacci sequence

/* #include <stdio.h>

float fibonacci(int n);

int main(){

    int n;
    printf("Enter N");
    scanf("%d", &n);

printf("Fibonacci till %d terms is %f", n , fibonacci(n));


    return 0;
}

float fibonacci(int n){
    if(n==0 || n==1){
        if( n == 0){
            return 0;
        }
        if( n ==1 ){
            return 1;
        }
    }
    float fib = fibonacci(n-1) + fibonacci(n-2);
    return fib;
} */


//-----------------------------------------------------
//**********************Pointers************************
//------------------------------------------------------

/* #include <stdio.h>

int main(){

int age = 22;
int *ptr = &age;
int _age = *ptr;

int num = 45;
printf("%p\n", &num);
printf("%p\n", &age);
printf("%p\n", ptr);
printf("%p\n", &_age);

 return 0;
} */


//---------------------------------------
//---------Pointer To Pointer------------

//Ques: Print the value of 'i' from its pointer to pointer

/* #include <stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", **pptr);
} */


//--------------------------------------


//Ques: Write a function to calculate the sum, product and average of 2 numbers. Print that average in main function.


/* #include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a = 3, b = 5;
    int sum, prod , avg ;
    doWork(a, b, &sum, &prod, &avg);
    printf("sum = %d, prod = %d, avg = %d\n", sum , prod, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    int *sum = a+b;
    int *prod = a*b;
    int *avg = (a+b)/2;
} */


//-------------------------------------------


//--------------------------------------------------
//***********************Arrarys*********************
//----------------------------------------------------

/* #include <stdio.h>

int main(){

    int marks[3] = {35, 60, 75};
    printf("Marks is %d", marks[1]);


    return 0;
} */

//------------------------------------------------

//Ques: Write a Program to enter price of 3 items & print their final cost with GST

/* #include <stdio.H>

int main(){

float price[3];
printf("Enter 3 prices : ");
scanf("%f", &price[0]);
scanf("%f", &price[1]);
scanf("%f", &price[2]);

printf("Total Price 1: %f" , price[0]+(0.18*price[0]));
printf("Total Price 2: %f" , price[1]+(0.18*price[1]));
printf("Total Price 3: %f" , price[2]+(0.18*price[2]));

return 0;
} */


//------------------------------------------

/* #include <stdio.h>

int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d Index: ", i);
        scanf("%d", (ptr+i));
    }

    //Output

    for(int i= 0; i<5; i++){
        printf("Output is : %d", *(ptr + i) );
    }
    return 0;

} */


//--------------------------------------------------

/* #include <stdio.h>

void printNumbers(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    printNumbers(arr, 6);
    return 0;
}

void printNumbers(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", arr[i]);
    }
} */


//-----------------------------------------

// #include <stdio.h>

// int main(){
//     int marks[2][3];
//     marks[0][0] = 90;
//     marks[0][1] = 91;
//     marks[0][2] = 92;

//     marks[1][0] = 80;
//     marks[1][1] = 81;
//     marks[2][2] = 82;

//     return 0;
// }


//-----------------------------------------


//*************************************************

//Ques: Write a function to count the number of odd numbers in an array.

/* #include <stdio.h>

int countOdd(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countOdd(arr, 6));
    return 0;

}

int countOdd(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] %2 != 0){
            count++;
        }
    }

    return count;
} */

//*******************************************

//--------------------------------------------


//Ques: Create a 2D array storing the tables of 2 & 3

// #include <stdio.h>

// void storeTable( int arr[][], int n, int m, int number);

// int main(){
// int tables[2][10];
// storeTable(tables, 0, 10, 2);
// storeTable(tables, 1, 10, 3);

// return 0;

// }

// void storeTable( int arr[][], int n, int m, int number){
//     for(int i=0; i<m; i++){
//         arr[n][m] = number * (i+1);
//     }
// }





