#include "header.h"

const PLDHashTableOps *f(const PLDHashTableOps *p) { return p; }

PLDHashTableOps mo;
void r()
{
	mo = *Ops();
}
