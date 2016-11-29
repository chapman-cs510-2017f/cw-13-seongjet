all: test_matrix

test_matrix: ../src/matrix/matrix.o

test: all
	./test_matrix

clean:
	$(MAKE) -C ../src/matrix/ clean

cleaner: clean
	rm -f ./test_matrix
