build: src/main.c 
	gcc src/main.c -o dice -Isrc

run: src/main.c 
	gcc src/main.c -o dice -Isrc
	./dice 

clean:
	rm dice
