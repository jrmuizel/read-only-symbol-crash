#include "header.h"

extern nsTHashtable<int> k;
nsTHashtable<int> f()
{
	return k;
}

PLDHashTable::PLDHashTable(struct PLDHashTableOps const *) {}
gfxPlatformFontList::gfxPlatformFontList() {
}
