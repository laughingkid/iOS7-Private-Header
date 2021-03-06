/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIBarButtonItem.h"



@class NSString, SUTouchCaptureView, SUUIAppearance, UINavigationItem, UIView;



@interface SUBarButtonItem : UIBarButtonItem

{

    UIView *_accessoryView;

    struct UIEdgeInsets _accessoryViewInsets;

    SUUIAppearance *_confirmationAppearance;

    UINavigationItem *_lastNavigationItem;

    NSString *_preConfirmationTitle;

    SUTouchCaptureView *_touchCaptureView;

}



+ (Class)classForNavigationButton;

- (void)_addTouchCaptureViewForNavigationButton:(id)arg1;

- (id)_navigationButton;

- (void)_removeTouchCaptureView;

- (void)_setTitle:(id)arg1 isConfirmation:(_Bool)arg2 appearance:(id)arg3 animated:(_Bool)arg4;

- (void)_touchCaptureAction:(id)arg1;

- (void)_updateViewForAccessoryChange;

@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;

@property(nonatomic) struct UIEdgeInsets accessoryViewInsets; // @synthesize accessoryViewInsets=_accessoryViewInsets;

- (void)configureFromScriptButton:(id)arg1;

- (id)createViewForNavigationItem:(id)arg1;

- (void)dealloc;

- (void)hideConfirmationWithAppearance:(id)arg1 animated:(_Bool)arg2;

@property(nonatomic, getter=isLoading) _Bool loading;

@property(readonly, nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation;

- (void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(_Bool)arg3;



@end


