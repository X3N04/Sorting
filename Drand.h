#ifndef DRAND_H
#define DRAND_H

void initrand(unsigned long seed);	// initializing RNG with seed
long lrand(long min, long max);		// returns a random natural number between min and max, inclusive

#endif