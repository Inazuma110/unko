run:
	apt-get install libncurses5-dev
	gcc  main.c -lncurses -o unko
	cp ./unko /usr/local/bin/unko

uninstall:
	rm /usr/local/bin/unko
