#include "header.h"

struct nsTHashtable {
	  nsTHashtable() : mTable(Ops()) { }
	  PLDHashTable mTable;
};

struct gfxPlatformFontList  {
	gfxPlatformFontList();
	nsTHashtable mFontFamilies;
};


const PLDHashTableOps *f(const PLDHashTableOps *p) { return p; }
PLDHashTable::PLDHashTable(struct PLDHashTableOps const *) {}
gfxPlatformFontList::gfxPlatformFontList() {
}

void r()
{
	gfxPlatformFontList list;
}
