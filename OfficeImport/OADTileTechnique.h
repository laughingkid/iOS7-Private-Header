/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADImageFillTechnique.h"


__attribute__((visibility("hidden")))

@interface OADTileTechnique : OADImageFillTechnique

{

    float mOffsetX;

    _Bool mIsOffsetXOverridden;

    float mOffsetY;

    _Bool mIsOffsetYOverridden;

    float mScaleX;

    _Bool mIsScaleXOverridden;

    float mScaleY;

    _Bool mIsScaleYOverridden;

    int mFlipMode;

    _Bool mIsFlipModeOverridden;

    int mAlignment;

    _Bool mIsAlignmentOverridden;

}



+ (id)defaultProperties;

- (int)alignment;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (int)flipMode;

- (unsigned long long)hash;

- (id)initWithDefaults;

- (_Bool)isAlignmentOverridden;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isFlipModeOverridden;

- (_Bool)isOffsetXOverridden;

- (_Bool)isOffsetYOverridden;

- (_Bool)isScaleXOverridden;

- (_Bool)isScaleYOverridden;

- (float)offsetX;

- (float)offsetY;

- (float)scaleX;

- (float)scaleY;

- (void)setAlignment:(int)arg1;

- (void)setFlipMode:(int)arg1;

- (void)setOffsetX:(float)arg1;

- (void)setOffsetY:(float)arg1;

- (void)setScaleX:(float)arg1;

- (void)setScaleY:(float)arg1;



@end

