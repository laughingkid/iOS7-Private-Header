/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFPGradientBrush.h"


@class NSArray, TSDBezierPath, TSUColor;



__attribute__((visibility("hidden")))

@interface MFPPathGradientBrush : MFPGradientBrush

{

    TSUColor *mCenterColor;

    struct CGPoint mCenterPoint;

    NSArray *mSurroundColors;

    TSDBezierPath *mPath;

}



- (id).cxx_construct;

- (void)createShading;

- (void)dealloc;

- (id)endColor;

- (void)setCenterColor:(id)arg1;

- (void)setCenterPoint:(struct CGPoint)arg1;

- (void)setPath:(id)arg1;

- (void)setSurroundColors:(id)arg1;

- (id)startColor;



@end


