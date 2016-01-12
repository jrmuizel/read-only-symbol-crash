struct PLDHashTableOps {
	void (*moveEntry)();
};

class PLDHashTable {
	public:   PLDHashTable(const PLDHashTableOps *aOps);
};

struct nsTHashtable {
	   nsTHashtable()       : mTable(Ops()) {
		  }
	  PLDHashTable mTable;
	  static const PLDHashTableOps *Ops();
};

inline void dancing() {}

inline const PLDHashTableOps *nsTHashtable::Ops() {
	static const PLDHashTableOps sOps = {
		true ? 0 : dancing};
	return &sOps;
}

struct gfxPlatformFontList  {
	gfxPlatformFontList();
	nsTHashtable mFontFamilies;
};


