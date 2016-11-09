// Define types as abstraction layer to protect against implementation changes
typedef unsigned int MINDEX;
typedef long double MVALUE;

// Use abstract types inside definition for robustness
typedef struct matrix {
  MINDEX rows;
  MINDEX cols;
  // Note that this is simply a pointer to an MVALUE
  // The code does not specify at this stage whether
  // an array is stored at that address, or a multi-dimensional
  // array, or just a single value. It is just an address
  // The rest of the code will clarify what is stored here,
  // but without good documentation, it is impossible to tell.
  // Intended: a 2-dimensional array of MVALUES
  MVALUE *mat;
} MATRIX;

// Constructor that initializes type in sensible way
MATRIX new_matrix(const MINDEX, const MINDEX);
// Destructor for allocated memory
void delete_matrix(MATRIX);
// Setter for individual elements
void mset(MATRIX *, const MINDEX, const MINDEX, const MVALUE);
// Getter for individual elements
MVALUE mget(const MATRIX *, const MINDEX, const MINDEX);
// Abstraction layer for printing values
void print_value(const MVALUE);
// Abstraction layer for printing matrices
void print_matrix(const MATRIX *);
// Addition of two matrices
MATRIX add_matrix(const MATRIX *, const MATRIX *);
