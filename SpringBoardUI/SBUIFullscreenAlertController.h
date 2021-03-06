/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "NSCopying.h"



@class NSInvocation, NSNumber, NSString;



@interface SBUIFullscreenAlertController : UIViewController <NSCopying>

{

    _Bool _shouldAnimateIn;

    NSNumber *_animationStartTime;

    NSString *_activationContext;

    NSInvocation *_pendingDeactivationInvocation;

}



@property(retain, nonatomic) NSString *activationContext; // @synthesize activationContext=_activationContext;

- (_Bool)allowStackingOfAlert:(id)arg1;

- (_Bool)allowSuspension;

- (void)animateViewIn;

- (void)animateViewOut;

@property(retain, nonatomic) NSNumber *animationStartTime; // @synthesize animationStartTime=_animationStartTime;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (_Bool)definesPresentationContext;

- (void)didFinishLaunchingFrontmost;

- (void)didReceiveMemoryWarning;

- (void)finishedAnimatingIn;

- (void)finishedAnimatingOut;

- (void)handleAutoLock;

- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;

- (_Bool)handleLockButtonPressed;

- (_Bool)handleMenuButtonTap;

- (_Bool)handleVolumeDownButtonPressed;

- (_Bool)handleVolumeUpButtonPressed;

- (_Bool)hasTranslucentBackground;

- (id)init;

- (_Bool)isSlidingViewController;

- (id)pendingDeactivationInvocation;

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (void)removeBackgroundStyleWithDuration:(double)arg1;

- (void)requestActivationAnimated:(_Bool)arg1 animateCurrentDisplayOut:(_Bool)arg2 withDelay:(_Bool)arg3;

- (void)requestDeactivationAnimated:(_Bool)arg1 animateOldDisplayInWithStyle:(int)arg2;

- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;

- (void)setPendingDeactivationInvocation:(id)arg1;

@property(nonatomic) _Bool shouldAnimateIn; // @synthesize shouldAnimateIn=_shouldAnimateIn;

- (void)setWallpaperTunnelActive:(_Bool)arg1;

- (void)viewDidLoad;

- (void)viewDidUnload;

- (_Bool)viewIsReadyToBeRemoved;

- (void)viewWillAnimateIn;

- (void)viewWillAnimateOut;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


