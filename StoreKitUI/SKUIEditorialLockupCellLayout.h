/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIItemCellLayout.h"


@class SKUICellLayoutView, SKUIEditorialCellLayout, SKUILockupItemCellLayout, SKUITextBoxView, UIView;



@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout

{

    struct UIEdgeInsets _contentInsets;

    SKUIEditorialCellLayout *_editorialCellLayout;

    UIView *_editorialContainerView;

    double _editorialHeight;

    long long _layoutStyle;

    SKUILockupItemCellLayout *_lockupLayout;

    SKUICellLayoutView *_lockupView;

    SKUITextBoxView *_textBoxView;

    unsigned long long _visibleFields;

}



+ (double)_imagePaddingForArtworkSize:(long long)arg1;

+ (double)editorialWidthForCellWidth:(double)arg1 lockupStyle:(struct SKUILockupStyle)arg2;

- (void).cxx_destruct;

- (id)_editorialCellLayout;

- (id)_editorialContainerView;

- (_Bool)_isItemOfferButtonHidden;

- (id)_lockupView;

- (_Bool)_showsItemOfferUnderEditorial;

- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2;

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;

- (id)iconImage;

- (id)iconImageView;

- (_Bool)isIconImageHidden;

- (id)itemOffer;

- (id)itemState;

- (void)layoutForItemOfferChange;

@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;

- (void)layoutSubviews;

@property(readonly, nonatomic) SKUILockupItemCellLayout *lockupCellLayout;

- (void)setBackgroundColor:(id)arg1;

- (void)setClientContext:(id)arg1;

- (void)setColoringWithColorScheme:(id)arg1;

- (void)setIconImage:(id)arg1;

- (void)setIconImageHidden:(_Bool)arg1;

- (void)setItemOffer:(id)arg1;

- (void)setItemOfferButtonAppearance:(id)arg1;

- (void)setItemState:(id)arg1 animated:(_Bool)arg2;

- (void)setRestricted:(_Bool)arg1;

@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;

@property(readonly, nonatomic) SKUITextBoxView *textBoxView;



@end


