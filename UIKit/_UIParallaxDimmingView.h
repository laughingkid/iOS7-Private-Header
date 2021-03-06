/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIColor, UIImageView;



__attribute__((visibility("hidden")))

@interface _UIParallaxDimmingView : UIView

{

    UIImageView *leftEdgeFade;

    _Bool _backgroundIsDimmed;

    UIColor *_dimmingColor;

    UIView *_addingSubview;

}



+ (id)newDimmingViewWithFrame:(struct CGRect)arg1;

+ (id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(double)arg2;

- (id)_basicAnimationWithKeyPath:(id)arg1;

@property(retain, nonatomic) UIView *addingSubview; // @synthesize addingSubview=_addingSubview;

@property(nonatomic) _Bool backgroundIsDimmed; // @synthesize backgroundIsDimmed=_backgroundIsDimmed;

- (void)crossFade;

- (void)dealloc;

- (id)defaultBorderColor;

- (void)didMoveToWindow;

@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;

- (id)initViewWrappingView:(id)arg1 withLeftBorder:(double)arg2;

- (id)initWithFrame:(struct CGRect)arg1;



@end


