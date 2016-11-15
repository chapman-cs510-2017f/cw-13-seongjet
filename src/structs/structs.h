#ifndef CW12_STRUCTS_H_
#define CW12_STRUCTS_H_
// The above convention is called a "#define guard" for a header file
// It ensures that the header file is only included once by the preprocessor
// The #ifndef is terminated at the end of the header file

// C++ convention is to CamelCase type names, class names, and struct names
// but have lowercase_names with underscores for variables

// typedef works the same way as C
typedef long double Component;

// In C++ structs have a typedef defined automatically
struct Vec3 {
    Component x;
    Component y;
    Component z;
};

// structs should only be used for static data
struct Vec2 {
    Component x;
    Component y;
};

// Function overloading allows the same name to be used for different types
// Below are two functions, both of name "print_vec", but for different types
//
// This is pass by value (as before in C)
void print_vec(const Vec3);

// This is pass by reference. Note subtle distinction:
//   Vec2 *wp : previous C pass-by-reference (still works here)
//              In this case wp is a pointer (memory address) so that
//              its fields will be accessed by (*wp).x or wp->x
//
//   Vec2 &wp : new C++ pass-by-reference
//              In this case wp is an explicit reference, so that
//              its fields are accessed by wp.x (just as pass-by-value)
//              but the original memory location is altered.
//              Think of this as a cleaner way to distinguish between
//              pass-by-value and pass-by-reference by only changing
//              the type and not every instance of wp.x as well
//
void print_vec(const Vec2&);

// Note the very different types here, but same overloaded function name
Vec3 set_vec(Vec3, Component, Component, Component);
void set_vec(Vec2&, Component, Component);

// Unlike in C, operators may be type overloaded in C++ as well
Vec3 operator+(const Vec3&, const Vec3&);
Vec2 operator+(const Vec2&, const Vec2&);

#endif // CW12_STRUCTS_H_
