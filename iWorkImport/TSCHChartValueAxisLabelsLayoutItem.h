/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartAxisLabelsLayoutItem.h"


__attribute__((visibility("hidden")))

@interface TSCHChartValueAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem

{

}



- (struct CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect)arg3 unrotatedSize:(struct CGSize)arg4 unitSpaceValue:(double)arg5;

- (void)dealloc;

- (id)initWithParent:(id)arg1;

- (struct CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2;

- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;

- (unsigned long long)numberOfLabelsForAxis:(id)arg1;

- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2;

- (id)selectionPathLabelType;

- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;



@end

