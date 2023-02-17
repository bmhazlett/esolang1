CC=gcc

main: main.o
	$(CC) -o es1 main.c;

run:
	./es1 input.txt

clean:
	rm es1; rm main.o; rm *~; rm *#;
