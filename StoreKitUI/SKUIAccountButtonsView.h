/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSString, SKUIClientContext, SKUIColorScheme, SKUILinkButton, SKUIRoundedRectButton, UIButton, UIControl, UILabel;



@interface SKUIAccountButtonsView : UIView

{

    UILabel *_accountCreditsLabel;

    SKUIRoundedRectButton *_appleIDButton;

    SKUIClientContext *_clientContext;

    SKUIColorScheme *_colorScheme;

    SKUILinkButton *_ecommerceButton;

    SKUIRoundedRectButton *_giftingButton;

    long long _interfaceOrientation;

    UIButton *_termsAndConditionsButton;

    SKUIRoundedRectButton *_usernameButton;

    UIButton *_redeemButton;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) UIControl *ECommerceButton; // @synthesize ECommerceButton=_ecommerceButton;

@property(copy, nonatomic) NSString *ECommerceLinkTitle;

- (void)_layoutForIPad;

- (void)_layoutForIPhone;

- (id)_newLinkButtonWithTitle:(id)arg1;

- (id)_termsChevronImage;

@property(copy, nonatomic) NSString *accountCredits;

@property(readonly, nonatomic) UIButton *appleIDButton; // @synthesize appleIDButton=_appleIDButton;

@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;

@property(readonly, nonatomic) UIButton *giftingButton; // @synthesize giftingButton=_giftingButton;

- (id)initWithClientContext:(id)arg1;

@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;

@property(nonatomic, getter=isGiftingHidden) _Bool giftingHidden;

@property(nonatomic, getter=isTermsAndConditionsHidden) _Bool termsAndConditionsHidden;

- (void)layoutSubviews;

@property(readonly, nonatomic) UIButton *redeemButton; // @synthesize redeemButton=_redeemButton;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) UIButton *termsAndConditionsButton; // @synthesize termsAndConditionsButton=_termsAndConditionsButton;



@end

