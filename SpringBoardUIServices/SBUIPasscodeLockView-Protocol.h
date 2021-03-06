/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, UIColor;



@protocol SBUIPasscodeLockView <NSObject>

@property(nonatomic) double backgroundAlpha;

@property(retain, nonatomic) id <SBFLegibilitySettingsProvider> backgroundLegibilitySettingsProvider;

@property(nonatomic) unsigned long long biometricMatchMode;

@property(retain, nonatomic) UIColor *customBackgroundColor;

@property(nonatomic) id <SBUIPasscodeLockViewDelegate> delegate;

@property(readonly, nonatomic) NSString *passcode;

@property(nonatomic) _Bool playsKeypadSounds;

- (void)reset;

- (void)resetForFailedPasscode;

- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(_Bool)arg1;

@property(nonatomic) _Bool showsEmergencyCallButton;

@property(nonatomic) _Bool showsStatusField;

@property(readonly, nonatomic) int style;

@end


