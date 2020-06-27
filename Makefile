bin/fizzbuzz : src/fizzbuzz.c
	mkdir -p bin
	cc -o bin/fizzbuzz src/fizzbuzz.c