//Standard C Libraries
#include <stdio.h>
#include <stdlib.h>

#define FIZZES 3 //Fizz factor
#define BUZZES 5 //Buzz factor
#define FIZZBUZZES (FIZZES*BUZZES) //Fizzbuzz factor

//Main function
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        unsigned register long long int max = strtoull(argv[2], NULL, 10); //Maximum number to be fizzbuzzed

        //Fizzbuzz loop
        for(unsigned register long long int i = strtoull(argv[1], NULL, 10); i <= max; i++)
        {
            if(i % FIZZBUZZES == 0)
            {
                printf("FizzBuzz!\r\n");
            }
            else if(i % FIZZES == 0)
            {
                printf("Fizz!\r\n");
            }
            else if(i % BUZZES == 0)
            {
                printf("Buzz!\r\n");
            }
            else
            {
                printf("%llu\r\n", i);
            }
        }

        //Exit with success code because the correct number of arguments were passed to the program
        exit(EXIT_SUCCESS);
    }
    else if(argc > 0)
    {
        //If an incorrect number of arguments were passed to the program and at least one was, print usage information to stderr
        fprintf(stderr, "Usage: %s base10_min base10_max\n", argv [0]);
    }
    else
    {
        //If an incorrect number of arguments were passed to the program and at least one was, print usage information to stderr
        fprintf(stderr, "Usage: program_name base10_min base10_max\n");
    }
    //Exit with failure code because an incorrect number of arguments were passed to the program
    exit(EXIT_FAILURE);
}