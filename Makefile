LDLIBS=-lnetfilter_queue

all: netfilter-test

main.o: main.c libnet.h

netfilter-test: main.o
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm -f nfqnl_test *.o
