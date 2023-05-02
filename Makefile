LDLIBS=-lnetfilter_queue

all: nfqnl_test

nfqnl_test.o: nfqnl_test.c

nfqnl_test: nfqnl_test.o
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm -f nfqnl_test *.o
