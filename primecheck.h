/* primecheck.h
 * by sternenseemann
 * simple utilities to check if a number is a prime or not
 */

/* simple brute force check
 * num is the integer that should be checked.
 */
int check(int num);

/* Lucas-Lehmer-test for Merssene-Primes
 * the argument p is not the Merssene-Number
 * but p of M(p) = 2^p -1
 * M(p) can only be a prime if p is a prime.
 */
int lucas_lehmer(int p);
