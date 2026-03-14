In this File I'm going to explain this mess to myself.
This is where I start using my own new headers. The #include here is #include "main.h" - Its in qoutes as its specifying a non-standard libary.
Each project will tell you what to put in the main.h header by calling it the prototype code. Beaware of any cat files listed in the example as well as that ALSO includes important code.
    So in this section I'm learning about actually using the "main.h" header of using prototype functions, getting used to idea of what will soon be blueprinting.
Now in 0-putchar.c:
    Instead of printing out each character one By one, I will use a string and hold each character of "_putchar" and then print at the end.
    REMEMBER: 
        When using string -char [s] = "yada"
        when tying to use it later for an index, be it print or otherwise, it must be -func(s[*]) with * being a indexing variable.



Just remember, as scary as it is to be behind and learn code, its far worse and much scarier to leave good opitunities to waste from stress