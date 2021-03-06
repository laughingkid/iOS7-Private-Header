/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSTCell, TSTCellRegion, TSTTableDataStore, TSTTableModel, TSTTableTile, TSTTableTileRowInfo;



__attribute__((visibility("hidden")))

@interface TSTCellIterator : NSObject

{

    TSTTableModel *mTableModel;

    TSTCellRegion *mModelRegion;

    struct NSObject *mModelRegionIterator;

    TSTTableDataStore *mTableDataStore;

    CDStruct_0441cfb5 mPreviousCellID;

    TSTTableTileRowInfo *mCurRow;

    TSTTableTile *mCurTile;

    unsigned short mCurRowID;

    struct _NSRange mCurTileRange;

    TSTCell *mCell;

    _Bool mSkipStyleOnlyCells;

    _Bool mSkipCommentStorageOnlyCells;

    _Bool mDontExpandCellRefs;

    int mRowWalkDirection;

    _Bool mDontCheckSize;

    _Bool mDontReturnMergeRegions;

    _Bool mReturnHiddenCells;

    _Bool mDontInflateFormulas;

    _Bool mReturnEmptyCells;

}



- (id).cxx_construct;

- (void)dealloc;

@property(readonly) _Bool dontExpandCellRefs; // @synthesize dontExpandCellRefs=mDontExpandCellRefs;

- (_Bool)getNext:(CDStruct_6188ab8e *)arg1;

- (id)initWithTableModel:(id)arg1;

- (id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2;

- (id)initWithTableModel:(id)arg1 range:(CDStruct_5f1f7aa9)arg2;

- (id)initWithTableModel:(id)arg1 range:(CDStruct_5f1f7aa9)arg2 flags:(unsigned long long)arg3;

- (id)initWithTableModel:(id)arg1 region:(id)arg2;

- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3;

- (_Bool)p_getData:(CDStruct_6188ab8e *)arg1 forCellID:(CDStruct_0441cfb5)arg2;

- (void)p_resetIterData:(CDStruct_6188ab8e *)arg1;

@property(readonly) int rowWalkDirection; // @synthesize rowWalkDirection=mRowWalkDirection;

- (void)terminate;



@end


