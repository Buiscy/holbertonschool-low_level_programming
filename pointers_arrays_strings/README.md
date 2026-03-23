
Hello

Notes for learning!
    In 2.strlen.c the line for (length = 0; s[length] != '\0'; length ++) means:
    length is my counter variable, I create a int called length for this.
    length in the s[] is just putting that int variable inside the string variale called s. Note that the s is specified in char *s, the * meaning its pointing to the address of s. 
        Addressing is for using variables accross a large program/ mutiple C files.
    when doing s[length] != '\0'; length++ I'm basically saying that the program is to count and increment the length in so long as it does not equal the termination point of the string. 
    When I want something returned inside a function, just use return(thing)

    In the 2 main.c for this one the code goes as follows:
        char *str; creating the string value named str but also not addressing it directly here
        int len; creating the int variable len

        str = "My first strlen!"; - Creating the actual string text. This is whats going to be counted in the string, each character being one spot inside the string, including spaces!
        len = _strlen(str); - placing the str inside len and specifying how _strlen is to be used! len here is just so the length thats returned later can be printed.
        printf("%d\n", len); printing the length of the str string.