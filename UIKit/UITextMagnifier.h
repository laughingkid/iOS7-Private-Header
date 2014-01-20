/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIResponder<UITextInput>, UITextMagnifierTimeWeightedPoint;



__attribute__((visibility("hidden")))

@interface UITextMagnifier : UIView

{

    UIView *_target;

    struct CGPoint _magnificationPoint;

    struct CGPoint _animationPoint;

    struct CGPoint _terminalPoint;

    _Bool _terminalPointPlacedCarefully;

    UIResponder<UITextInput> *_text;

    UITextMagnifierTimeWeightedPoint *_weightedPoint;

    UIView *_magnifierRenderer;

    UIView *_autoscrollRenderer;

    int _autoscrollDirections;

}



+ (id)getLoupeBackgroundColorForViewService:(id)arg1;

- (void)animateToAutoscrollRenderer;

- (void)animateToMagnifierRenderer;

@property(nonatomic) struct CGPoint animationPoint; // @synthesize animationPoint=_animationPoint;

- (void)autoscrollWillNotStart;

- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;

- (void)dealloc;

- (void)detectLostTouches:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) struct CGPoint magnificationPoint; // @synthesize magnificationPoint=_magnificationPoint;

- (void)postAutoscrollPoint:(struct CGPoint)arg1;

- (void)remove;

- (void)setAutoscrollDirections:(int)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setNeedsDisplay;

@property(retain, nonatomic) UIView *target; // @synthesize target=_target;

@property(retain, nonatomic) UIResponder<UITextInput> *text; // @synthesize text=_text;

- (void)setToMagnifierRenderer;

- (void)stopMagnifying:(_Bool)arg1;

@property(readonly, nonatomic) struct CGPoint terminalPoint; // @synthesize terminalPoint=_terminalPoint;

@property(readonly, nonatomic) _Bool terminalPointPlacedCarefully; // @synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully;

- (void)windowWillRotate:(id)arg1;

- (void)zoomDownAnimation;

- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;

- (void)zoomUpAnimation;

- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;



@end

