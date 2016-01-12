struct PLDHashTableOps {
	void (*moveEntry)();
};

class PLDHashTable {
	public:   PLDHashTable(const PLDHashTableOps *aOps);
};

template <class EntryType> struct nsTHashtable {
	   nsTHashtable()       : mTable(Ops()) {
		  }
	  PLDHashTable mTable;
	  static const PLDHashTableOps *Ops();
};

inline void dancing() {}

template <class EntryType> const PLDHashTableOps *nsTHashtable<EntryType>::Ops() {
	static const PLDHashTableOps sOps = {
		true ? 0 : dancing};
	return &sOps;
}

struct gfxPlatformFontList  {
	gfxPlatformFontList();
	nsTHashtable<int> mFontFamilies;
};


