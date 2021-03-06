/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSNumberFormatter, UILabel, UIProgressView, _UIBackdropView;



@interface PLProgressView : UIView

{

    UILabel *_labelView;

    UIProgressView *_progressView;

    UIView *_topDivider;

    unsigned int _didLayout:1;

    unsigned int _didSetPermanantTextOnLabelView:1;

    NSNumberFormatter *_progressFormatter;

    long long _backgroundType;

    UIView *_backgroundView;

    UIView *_backgroundTintedView;

    _UIBackdropView *_backgroundBlurredView;

    float _percentComplete;

}



- (void)_installBackgroundBlurredView;

- (void)_installBackgroundTintedView;

- (void)_installBackgroundView;

- (void)_removeBackgroundBlurredView;

- (void)_removeBackgroundTintedView;

- (void)_syncToBackgroundType;

@property(retain, nonatomic) _UIBackdropView *backgroundBlurredView; // @synthesize backgroundBlurredView=_backgroundBlurredView;

@property(retain, nonatomic) UIView *backgroundTintedView; // @synthesize backgroundTintedView=_backgroundTintedView;

@property(nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;

- (void)layoutSubviews;

@property(nonatomic) float percentComplete; // @synthesize percentComplete=_percentComplete;

- (void)setFrame:(struct CGRect)arg1;

- (void)setLabelText:(id)arg1;

- (void)updateUIForPublishingAgent:(id)arg1;



@end


