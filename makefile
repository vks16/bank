view_list.o: view_list.c common.h
	gcc -c view_list.c
close.o: close.c common.h
	gcc -c close.c
fordelay.o: fordelay.c common.h
	gcc -c fordelay.c
menu.o: menu.c common.h
	gcc -c menu.c
new_acc.o: new_acc.c common.h
	gcc -c new_acc.c
interest.o: interest.c
	gcc -c interest.c

main.o: main.c common.h
	gcc -c main.c

start: *.o common.h
	gcc *.o -o start

