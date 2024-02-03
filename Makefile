build: src/main.c 
	clang src/main.c -o dice.out -lsrc

run: src/main.c 
	clang src/main.c -o dice.out -lsrc
	./dice.out 

clean:
	rm dice.out
