Lets make sure this isnt empty
What goes on in this Section:
0-positive_or_negative.c:
    First, file is labeled C as to designate it a C file. Second, going through Source code I'll list off everything that is going on for myself.
        #include <stdlib.h> - functions for memory allocation and rand function.
        #include <stdio.h> - Input output functions
        #include <time.h> - For Time functions

        int main(void) - creating 'main' function and declearing as void. can also just be main(), but for sake of Betty, stick with main(void)

        srand(time(0)); - is for random number generation. Not truly random, just uses a pre-defined number generating sequence. The time adds time as a seeding variable, meaning each number generated is random based on the time its generated. within srand(seed) is the seed, which helps 'seed' the generator allowing for a string of numbers to be generated off of something.

         n = rand() - RAND_MAX / 2; - the value n equals rand minus half of what the max possible value of rand is, however the max possible value is divided by 2 first, then minuses the picked value. Its done here so it can create negative values.
         Basically, if the Rand picks 37, the max rand value possible is 2147483647 (32 bit int), and that is then divided by 2 to 1073741823 which then causes the value to be -1,073,741,786 thus leading to a negative value!

         If: basic if statements in a program for each possible outcome, with specified results. n > 0 means n being greater then 0 (positive) while n == means equal to and n < 0 means less then zero (negative)

         return (0); - ends the main function
         
         {} - for containing the main function 'functions'.

    1-last_digit :
    


