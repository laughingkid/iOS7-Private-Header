/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ODDLayoutObject.h"


@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface ODDShape : ODDLayoutObject

{

    int mType;

    int mPresetType;

    NSMutableArray *mAdjustments;

}



- (void)addAdjustment:(id)arg1;

- (id)adjustments;

- (void)dealloc;

- (id)init;

- (int)presetType;

- (void)setPresetType:(int)arg1;

- (void)setType:(int)arg1;

- (int)type;



@end

