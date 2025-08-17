// File: source/random.h

#ifndef RANDOM_H
#define RANDOM_H

// --- Public Function Declarations ---
unsigned char random_setup(int seed);
unsigned char random_dice(unsigned char number, unsigned short sides);
unsigned char* random_name(unsigned char* filedata);
unsigned char get_random_number(void); // This is our new, safe way to get a random number

#endif // RANDOM_H