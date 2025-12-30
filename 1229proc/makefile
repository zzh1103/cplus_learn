all: PID proc fork
PID:PID.c
	gcc PID.c -o PID
proc:proc.c
	gcc proc.c -o proc
fork:fork.c
	gcc fork.c -o fork


.PHONY:clean
clean:
	rm -f PID
	rm -f proc
	rm -f fork
