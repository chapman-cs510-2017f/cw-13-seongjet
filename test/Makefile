all: test_matrix

test_matrix: ../src/matrix/matrix.o

test: all
	./test_matrix

clean:
	rm -f ../src/matrix/matrix.o

cleaner: clean
	rm -f ./test_matrix
