/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSCEFormulaMap : NSObject

{

    struct hash_map<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>>>, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>>>>>> mOwnerToFormulasMap;

    int mCount;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)addFormula:(struct TSCEFormula *)arg1 inOwner:(struct __CFUUID *)arg2 atCellCoordinate:(CDStruct_0441cfb5)arg3;

- (int)count;

- (id)formulaEnumerator;



@end


