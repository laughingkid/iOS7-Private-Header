/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartAxisRenderer.h"


__attribute__((visibility("hidden")))

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer

{

}



- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2;

- (_Bool)canEditTextForSelectionPath:(id)arg1;

- (_Bool)canRenderSelectionPath:(id)arg1;

- (id)categoryAxisLayoutItem;

- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;

- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;

- (unsigned long long)p_categoryIndexForSelectionPath:(id)arg1;

- (_Bool)p_doesSelectionPathReferToAxisLabel:(id)arg1;

- (_Bool)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg1;

- (void)p_drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3 limitRenderLabels:(int)arg4 limitLabelIndex:(unsigned long long)arg5 rangePtr:(struct _NSRange *)arg6;

- (unsigned long long)p_seriesIndexForSelectionPath:(id)arg1;

- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;

- (id)transparencyLayers;



@end

