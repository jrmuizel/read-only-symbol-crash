struct PLDHashTableOps {
	void (*moveEntry)();
};

class PLDHashTable {
	public:   PLDHashTable(const PLDHashTableOps *aOps);
};

inline void dancing() {}

inline const PLDHashTableOps *Ops() {
	static const PLDHashTableOps sOps = {
		true ? 0 : dancing};
	return &sOps;
}

struct nsTHashtable {
	   nsTHashtable()       : mTable(Ops()) {
		  }
	  PLDHashTable mTable;
};



struct gfxPlatformFontList  {
	gfxPlatformFontList();
	nsTHashtable mFontFamilies;
};


