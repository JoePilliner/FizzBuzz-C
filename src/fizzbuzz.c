//Standard C Libraries
#include <stdio.h>
#include <stdlib.h>

//Constant value preprocessor defines
#define FIZZ_FACTOR 3ULL
#define BUZZ_FACTOR 5ULL
#define FIZZBUZZ_FACTOR (FIZZES * BUZZES)

//Main function
int main(int argc, char **argv)
{
    //Constant values
    const register unsigned long long FIZZES = FIZZ_FACTOR; //Fizz factor
    const register unsigned long long BUZZES = BUZZ_FACTOR; //Buzz factor
    const register unsigned long long FIZZBUZZES = FIZZBUZZ_FACTOR; //Fizzbuzz factor

    switch(argc)
    {
        case 3:
            for(const register unsigned long long int max = strtoull(argv[2], NULL, 10);;) //Maximum number to be fizzbuzzed
            {
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
                return EXIT_SUCCESS;
            }
        case 0:
            //If an incorrect number of arguments were passed to the program and at least one was, print usage information to stderr
            fprintf(stderr, "Usage: program_name base10_min base10_max\n");
            return EXIT_FAILURE;
        default:
            //If an incorrect number of arguments were passed to the program and at least one was, print usage information to stderr
            fprintf(stderr, "Usage: %s base10_min base10_max\n", argv [0]);
            return EXIT_FAILURE;
    }
}