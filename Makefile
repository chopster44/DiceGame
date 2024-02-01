build: src/main.c 
	gcc main.c -o dice

run: src/main.c 
	gcc main.c -o dice
	./dice 

clean:
	rm dice
