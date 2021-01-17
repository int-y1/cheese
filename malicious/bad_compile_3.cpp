// compiler may take too long
// this code prints 200 choose 100, with overflow
#include <stdio.h>

template <int a, int b>
struct C {int s=C<a-1,b>().s+C<a-1,b-1>().s;};

template <int a>
struct C<a, 0> {int s=1;};

template <int a>
struct C<a, a> {int s=1;};

int main() {
	printf("%d\n", C<200,100>().s);
}
