/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSString, UIColor, UIImage;



@interface SKUIProductPageHeaderLabel : UIView

{

    NSString *_text;

    UIColor *_textColor;

    NSString *_contentRating;

    UIImage *_contentRatingImage;

    UIColor *_ratingColor;

    _Bool _isPad;

}



- (void).cxx_destruct;

- (id)_imageForContentRating:(id)arg1;

- (struct __CTFramesetter *)_newTextFramesetter;

- (id)_textAttributes;

@property(retain, nonatomic) NSString *contentRating; // @synthesize contentRating=_contentRating;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;

- (void)layoutSubviews;

@property(retain, nonatomic) UIColor *ratingColor; // @synthesize ratingColor=_ratingColor;

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


