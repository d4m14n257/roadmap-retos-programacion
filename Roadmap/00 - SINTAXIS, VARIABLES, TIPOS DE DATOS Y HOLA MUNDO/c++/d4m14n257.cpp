/* Official documentation https://isocpp.org/ */

//One line comment 

/**
 * Many line
 * comment
*/

#include <iostream>

int main () {

    /* Example with an integer variable and integer constant */
    int variable = 3;
    const int constant = 3;

    /**
     * Primitiva datatype in c++  
     * Some primitive data types use modifiers that can change how the bytes in the datatype are used.
     * Data type modifiers avaiable in C++ are:
     *  Signed: Using negative and positive range. -> This is default modifiers. 
     *  Unsigned: Using only positive range.
     *  Short: Using only a part of bytes and can join with signed or unsigned.
     *  Long: Increase the amount of bytes used. Equal that short modifier can join with signed and unsigned
     *  1 byte = 8 bits
    */
    
    /** 
     * Integers: Typically requiere 4 bytes of memory.
     * May use the modifiers: 
     *  signed int -> 4 bytes with the range in [-2^31, 2^31 - 1]
     *  unsinged int -> 4 bytes with the range in [0, 2^32 - 1]
     *  short int -> 2 bytes with the range:
     *      with signed -> [-2^15, 2^15 - 1]
     *      with unsigned -> [0, 2^16 - 1]
     *  long long int (long int is the same that int) -> 8 bytes with the range:
     *      with signed -> [-2^61, 2^61 - 1]
     *      with unsigned -> [0, 2^62 - 1]
     * 
     * */
    int integer_data = 3;

    /**
     * Characters: Used from storing characters. Typically require 1 byte of memory 
     * May use the modificers: 
     *   signed char -> 1 byte with the range in [-2^7, 2^7 - 1]
     *   unsigned char -> 1 byte with the range in [0, 2^8 - 1]
     * Sometime can use wchar_t who can use 2 or 4 bytes because the size of bits used in characters formats
     * */
    char character_data = 'E';

    /* Boolean: Used from storing a logic value, true o false. */
    bool boolean_data = true; 

    /** 
     * Floating point: Used 4 bytes and the standar IEE754 for calculate the range and decimal point in the value. 
     * The range by the IEE754: [-3.4×10^38 to 3.4×10^38]
     * No may use modifier
    */
    float floating_point_data = 3.1416; 

    /** 
     * Double Floating Point: Used 8 bytes and the standar IEE754 for calculate the range and decimal point in the value. 
     *  The range by the IEE754: [-1.7×10^308 to1.7×10^308]
     * May use the modificer: 
     *  long double -> 12 bytes with the range in [-1.1×10^4932 to1.1×10^4932]
     * 
    */
    double double_floating_point_data = 3.141592; 

    /** 
     * Void data means without any value. Representes a valueless entity.
     */
    void voidData();
    
    std::cout << "¡Hola, C++!" << std::endl;

    return 0;
}