/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TSTCellMap <NSObject>

- (void)addCell:(id)arg1 andCellID:(CDStruct_0441cfb5)arg2;

@property(nonatomic) _Bool appliesToHidden;

- (id)cellAtIndex:(unsigned long long)arg1;

- (CDStruct_0441cfb5)cellIDAtIndex:(unsigned long long)arg1;

- (CDStruct_0441cfb5 *)cellIDs;

- (_Bool)containsCellID:(CDStruct_0441cfb5)arg1;

- (unsigned long long)count;

- (_Bool)mayModifyFormulasInCells;

- (_Bool)mayModifyValuesReferencedByFormulas;

- (void)popLastCell;

- (void)setMayModifyValuesReferencedByFormulas:(_Bool)arg1;

@end


