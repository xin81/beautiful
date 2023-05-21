#ifndef __CODE_H__
#define __CODE_H__

/* Author: Newton Tan */
#if OPT == 1
#define OPTION	1
#elif OPT == 2
#define OPTION 2
#else
#define OPTION 0
#endif

// Einfache Addition
int sum(int a, int b);
int product(int a, int b);
// double power(double d, double p);

// Ausgabe des Facebook-Unsinns von min bis max
void output1(int min, int max);

// Einfache Summenausgabe zweier Zahlen von min bis max
void output2(int miin, int max);
#endif
