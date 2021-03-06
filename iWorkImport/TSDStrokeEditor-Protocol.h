/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDEditor.h"



@class NSArray, NSString, TSDInteractiveCanvasController, TSDStroke, TSUColor;



@protocol TSDStrokeEditor <TSDEditor>

- (void)beginChangingStrokeWidth:(id)arg1;

- (void)didChangeStrokeWidth:(id)arg1;

- (void)endChangingStrokeWidth:(id)arg1;

@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;

- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;

@property(copy, nonatomic) TSDStroke *stroke;

@property(retain, nonatomic) TSUColor *strokeColor;

@property(readonly, nonatomic) NSString *strokeColorPickerTitle;

@property(readonly, nonatomic) NSArray *strokeSwatches;

- (double)strokeWidthForNormalizedWidth:(double)arg1;

- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;

@end


