build: src/main.c 
	clang src/main.c -o dice.out -Isrc

run: src/main.c 
	clang src/main.c -o dice.out -Isrc
	./dice.out 

clean:
	rm dice.out
