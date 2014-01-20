/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPObject.h"


@interface CPChunk : CPObject

{

    struct CGRect bounds;

    _Bool shrinksWithChildren;

    _Bool dirtyBounds;

    unsigned int position;

    long long insertionOrder;

}



+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;

- (float)absoluteGapTo:(id)arg1;

- (void)accept:(id)arg1;

- (void)add:(id)arg1;

- (void)add:(id)arg1 atIndex:(unsigned int)arg2;

- (void)addChildrenOf:(id)arg1;

- (struct CGRect)adjustToPointBoundary:(struct CGRect)arg1;

- (struct CGSize)advance;

- (float)advanceDeltaAfterSpace;

- (struct CGPoint)anchor;

- (double)bottom;

- (struct CGRect)bounds;

- (_Bool)boundsEqualsRect:(struct CGRect)arg1 accuracy:(double)arg2;

- (double)center;

- (unsigned int)chunkPosition;

- (float)clusterGapTo:(id)arg1;

- (int)clusterLevelHint;

- (long long)compareAnchorX:(id)arg1;

- (long long)compareAnchorY:(id)arg1;

- (long long)compareAnchorYDescending:(id)arg1;

- (long long)compareChunkPosition:(id)arg1;

- (long long)compareInsertionOrder:(id)arg1;

- (long long)compareLinearBounds:(id)arg1;

- (long long)compareTopDescending:(id)arg1;

- (long long)compareX:(id)arg1;

- (long long)compareXBounds:(id)arg1;

- (long long)compareY:(id)arg1;

- (long long)compareYBounds:(id)arg1;

- (long long)compareYDescending:(id)arg1;

- (long long)compareYDescendingX:(id)arg1;

- (long long)compareZ:(id)arg1;

- (long long)compareZDescending:(id)arg1;

- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)describeBounds;

- (void)fitBoundsToChildren;

- (float)fontSize;

- (_Bool)geometricallyContains:(id)arg1;

- (id)init;

- (long long)insertionOrder;

- (_Bool)intersectsChild:(struct CGRect)arg1;

- (double)left;

- (id)newTakeChildren;

- (id)newTakeChildrenAmong:(id)arg1;

- (float)opticalLeading;

- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;

- (_Bool)overlapsHorizontallyWith:(id)arg1;

- (_Bool)overlapsVerticallyWith:(id)arg1;

- (float)referenceAdvanceWidth;

- (void)remove:(id)arg1;

- (void)removeAll;

- (struct CGRect)renderedBounds;

- (void)resizeWith:(id)arg1;

- (double)right;

- (double)rotationAngle;

- (void)setAnchor:(struct CGPoint)arg1;

- (void)setBounds:(struct CGRect)arg1;

- (void)setChildren:(id)arg1;

- (void)setChunkPosition:(unsigned int)arg1;

- (void)setInsertionOrder:(long long)arg1;

- (void)setShrinksWithChildren:(_Bool)arg1;

- (_Bool)shrinksWithChildren;

- (void)sortUsingSelector:(SEL)arg1;

- (double)top;

- (void)translateObjectYBy:(double)arg1;



@end

