build: src/main.c 
	gcc src/main.c -o dice.out -Isrc

run: src/main.c 
	gcc src/main.c -o dice.out -Isrc
	./dice.out 

clean:
	rm dice.out
