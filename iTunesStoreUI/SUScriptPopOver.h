/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class SUScriptViewController, UIPopoverController, UIViewController;



@interface SUScriptPopOver : SUScriptObject

{

    _Bool _ignoreDismiss;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (void)_dismissAnimated:(_Bool)arg1;

- (_Bool)_isViewControllerVisible;

- (id)_nativeViewController;

- (void)_overlayWillShowNotification:(id)arg1;

- (id)_popOverController;

- (void)_setIgnoresDismiss:(_Bool)arg1;

- (void)_setNativeViewController:(id)arg1;

- (_Bool)_shouldDisplayAsPopover;

- (void)_showAsModalViewController;

- (void)_viewControllerDidDismiss:(id)arg1;

@property(readonly) UIViewController *activeViewController;

- (id)attributeKeys;

@property long long backgroundStyle;

@property(readonly) long long backgroundStyleBlack;

@property(readonly) long long backgroundStyleClear;

@property(readonly) long long backgroundStyleCream;

@property(readonly) long long backgroundStyleDefault;

@property(readonly) long long backgroundStyleShare;

@property double contentHeight;

@property double contentWidth;

- (void)dealloc;

- (void)dismissAnimated:(id)arg1;

- (id)init;

- (_Bool)isVisible;

@property(retain, nonatomic) UIPopoverController *nativePopoverController;

@property(readonly) SUScriptViewController *presentingViewController;

- (id)scriptAttributeKeys;

- (void)setContentWidth:(double)arg1 height:(double)arg2 animated:(_Bool)arg3;

@property(retain) SUScriptViewController *viewController;

- (_Bool)showFromElement:(id)arg1;

- (_Bool)showFromNavigationItem:(id)arg1;

- (void)tearDownUserInterface;



@end


