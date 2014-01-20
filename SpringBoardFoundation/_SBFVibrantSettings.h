/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UIColor, _UILegibilitySettings;



@interface _SBFVibrantSettings : NSObject

{

    long long _style;

    UIColor *_referenceColor;

    _UILegibilitySettings *_legibilitySettings;

    double _backgroundColorRedComponent;

    double _backgroundColorGreenComponent;

    double _backgroundColorBlueComponent;

}



+ (id)computeVibrantColorDodgeColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 factor:(double)arg4;

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 legibilitySettings:(id)arg2;

- (id)_colorDodgeColor;

- (id)_darkStyleColorCompositingViewWithFrame:(struct CGRect)arg1;

- (id)_darkStyleTintViewWithFrame:(struct CGRect)arg1;

- (id)_lightStyleColorCompositingViewWithFrame:(struct CGRect)arg1;

- (id)_lightStyleTintViewWithFrame:(struct CGRect)arg1;

- (id)_mixedStyleTintViewWithFrame:(struct CGRect)arg1;

- (long long)_style;

@property(readonly, nonatomic) double backgroundColorBlueComponent; // @synthesize backgroundColorBlueComponent=_backgroundColorBlueComponent;

@property(readonly, nonatomic) double backgroundColorGreenComponent; // @synthesize backgroundColorGreenComponent=_backgroundColorGreenComponent;

@property(readonly, nonatomic) double backgroundColorRedComponent; // @synthesize backgroundColorRedComponent=_backgroundColorRedComponent;

- (id)colorCompositingViewWithFrame:(struct CGRect)arg1;

- (id)darkTintViewWithFrame:(struct CGRect)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (id)initWithReferenceColor:(id)arg1 legibilitySettings:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;

- (id)lightTintViewWithFrame:(struct CGRect)arg1;

@property(readonly, nonatomic) UIColor *referenceColor; // @synthesize referenceColor=_referenceColor;

@property(readonly, nonatomic) long long style; // @synthesize style=_style;



@end

