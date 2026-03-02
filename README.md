So, time to learn code. Each Readme in each subsection will have a summery of what I have learned and stuff like that:
What I've learned about C:
    C is a low level, portable and effeciant programming language
    Operates close to hardware level
    is a Procedual Language, meaning it has straightforward answers for some forms of programming
    is versatile.
Drawbacks:
    require manual memory managment
    no Object−Oriented Feature
    no garbage collection: relates back to the manual requirement of memory handeling. Must ensure to both allocate and deallocate in the program.
    Has no exception handeling.

Great for:
    Network programming: C language is used to develop networking software such as protocols, routers, and network utilities.
    Compiler and Interpreters for other languages
    Database Systems − Since C language is efficient and fast for low-level memory manipulation. It is used for developing DBMS and RDBMS engines. 
    Embedded Systems: Like micro controllers, clocks or other small systems.

Getting Started with C:
    All C files require Headers which contain certain declerations, constants, and macros that can be used in one or more source code files. Think Python libraries but for C and are the central Source code of C.
    The types of Headers are:
        stdio.h − Provides input and output functions like printf and scanf.
        stdlib.h − Contains functions involving memory allocation, rand function, and other utility functions.
        math.h − Includes mathematical functions like sqrt, sin, cos, etc.
        string.h − Includes functions for manipulating strings, such as strcpy, strlen, etc.
        ctype.h - Functions for testing and mapping characters like isalpha, isdigit, etc.
        stdbool.h − Defines the boolean data type and values true and false. - Allows for True or False type answers (Binary Answers)
        time.h − Contains functions for working with date and time.
        limits.h − Defines various implementation-specific limits on integer types.

Global Declarations in C:
    Global declarations are optional
    They are Global variables that can be used across different parts of a program.
    An example:
        #include <stdio.h>

        // Global variable declaration. This is the Global Variable
        int globalVariable;

        int main() 
        {
        // Rest of the program
         return 0;
        }
Main Function:
    Every C program must have a main function. Its the entry point of any C program. It can be as simple as printing hello or more complex, being the main focus as well, but either way it is the start of the program.
Functions in C:
    Can define as many other functions as needed. The main function may call these other functions as the program is ran.
    Declear the Global functions first, then intiate the Main function as the first Function that can later call upon the other functions.
    Example:
        // Global function declaration
        void samplefunction();

        int main() {
        // Programming statements
        return 0;
        }

        // Global function definition
        void samplefunction () {
        // Function programming statements implementation
        }

