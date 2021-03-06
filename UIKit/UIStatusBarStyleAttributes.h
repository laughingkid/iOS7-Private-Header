/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;



__attribute__((visibility("hidden")))

@interface UIStatusBarStyleAttributes : NSObject

{

    UIStatusBarStyleRequest *_request;

    UIStatusBarForegroundStyleAttributes *_foregroundStyle;

}



- (_Bool)areTopCornersRounded;

- (id)backgroundColorWithTintColor:(id)arg1;

- (id)backgroundImageName;

- (int)cornerStyle;

- (void)dealloc;

- (double)foregroundAlpha;

- (id)foregroundStyle;

- (double)glowAnimationDuration;

- (double)heightForMetrics:(long long)arg1;

- (double)heightForOrientation:(long long)arg1;

- (long long)idiom;

- (id)init;

- (id)initWithRequest:(id)arg1;

- (_Bool)isDoubleHeight;

- (_Bool)isTranslucent;

- (_Bool)isTransparent;

- (long long)legibilityStyle;

- (id)newForegroundStyleWithHeight:(double)arg1;

- (_Bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;

- (_Bool)shouldUseVisualAltitude;

- (long long)style;

- (_Bool)supportsRasterization;



@end


