CFLAGS += -c -g -Wall -Wextra -Wpedantic  -Wwrite-strings -Wvla -Wfloat-equal

run: main
	valgrind --leak-check=full --show-leak-kinds=all ./main

main:  main.c ws.o
	$(CC) $(CFLAGS) $^ -o $@ 

debug: CFLAGS += -g 

clean:
	$(RM) *.o main

.PHONY: run clean