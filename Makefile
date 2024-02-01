build: src/main.c 
	gcc	main.c -o dice -Isrc

run: src/main.c 
	gcc main.c -o dice -Isrc
	./dice 

clean:
	rm dice
