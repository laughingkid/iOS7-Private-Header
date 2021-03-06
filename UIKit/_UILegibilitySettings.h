/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIColor;



@interface _UILegibilitySettings : NSObject

{

    long long _style;

    UIColor *_contentColor;

    UIColor *_primaryColor;

    UIColor *_secondaryColor;

    UIColor *_shadowColor;

    double _shadowRadius;

    double _shadowAlpha;

    double _imageOutset;

    NSString *_shadowCompositingFilterName;

}



+ (id)sharedInstanceForStyle:(long long)arg1;

@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;

- (void)dealloc;

@property(nonatomic) double imageOutset; // @synthesize imageOutset=_imageOutset;

- (id)initWithContentColor:(id)arg1;

- (id)initWithContentColor:(id)arg1 contrast:(double)arg2;

- (id)initWithStyle:(long long)arg1;

- (id)initWithStyle:(long long)arg1 contentColor:(id)arg2;

- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;

@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;

- (void)setPropertiesForStyle:(long long)arg1;

@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;

@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;

@property(copy, nonatomic) NSString *shadowCompositingFilterName; // @synthesize shadowCompositingFilterName=_shadowCompositingFilterName;

@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;

@property(nonatomic) long long style; // @synthesize style=_style;



@end


