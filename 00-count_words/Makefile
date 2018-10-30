count_words: count_words.o lexer.o
	gcc count_words.o lexer.o -ll -o count_words

count_words.o: count_words.c
	gcc -c count_words.c

lexer.o: lexer.c
	gcc -c lexer.c

lexer.c: lexer.l
	flex -t lexer.l > lexer.c

# clean target will confused as file name clean if not define .PHONY
.PHONY: clean
clean:
	rm *.o lexer.c count_words
