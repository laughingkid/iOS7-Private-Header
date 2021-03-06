/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "_UISiriWaveyViewDelegate.h"



@class UIButton, UIDictationMeterView, UIKeyboardDicationBackground, _UISiriWaveyView;



__attribute__((visibility("hidden")))

@interface UIDictationView : UIView <_UISiriWaveyViewDelegate>

{

    UIKeyboardDicationBackground *_background;

    UIButton *_endpointButton;

    UIButton *_endpointButtonLandscape;

    UIButton *_waveTapEndpointButton;

    int _state;

    _Bool _keyboardInTransition;

    _Bool _automaticAppearanceWasEnabled;

    _UISiriWaveyView *_waveyView;

    UIDictationMeterView *_meterView;

}



+ (id)activeInstance;

+ (Class)dictationViewClass;

+ (struct CGSize)layoutSize;

+ (id)sharedInstance;

+ (struct CGSize)viewSize;

- (void)applicationEnteredBackground;

- (void)applicationWillResignActive;

- (float)audioLevelForWaveyView:(id)arg1;

- (struct CGPoint)backgroundOffset;

- (struct CGPoint)contentOffset;

- (id)createEndpointButtonWithRect:(struct CGRect)arg1 action:(SEL)arg2;

- (struct CGSize)currentScreenSize;

- (void)dealloc;

- (_Bool)drawsOwnBackground;

- (id)endpointButton;

- (id)endpointButtonImageWithRect:(struct CGRect)arg1 pressed:(_Bool)arg2;

- (void)endpointButtonPressed;

- (void)finishReturnToKeyboard;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)isShowing;

- (void)keyboardDidShow:(id)arg1;

- (void)layoutSubviews;

- (struct CGPoint)positionForShow;

- (void)prepareForReturnToKeyboard;

- (void)returnToKeyboard;

- (void)setState:(int)arg1;

- (void)show;

- (_Bool)visible;



@end


