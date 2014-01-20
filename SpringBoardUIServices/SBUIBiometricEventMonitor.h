/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class BiometricKit, NSCountedSet, NSHashTable;



@interface SBUIBiometricEventMonitor : NSObject

{

    BiometricKit *_biometricKit;

    id <SBUIBiometricEventMonitorDelegate> _delegate;

    NSHashTable *_observers;

    unsigned long long _lastEvent;

    NSCountedSet *_matchingDisabledRequesters;

    NSCountedSet *_activePasscodeViews;

    _Bool _matchingEnabled;

    _Bool _screenIsOff;

    _Bool _deviceLocked;

    _Bool _lockScreenTopmost;

}



+ (id)sharedInstance;

- (void)_profileSettingsChanged:(id)arg1;

- (void)_reevaluateMatching;

- (void)_setDeviceLocked:(_Bool)arg1;

- (void)_setMatchingEnabled:(_Bool)arg1;

- (void)_startMatching;

- (void)_stopMatching;

- (void)_updateHandlersForEvent:(unsigned long long)arg1;

- (void)addObserver:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <SBUIBiometricEventMonitorDelegate> delegate; // @synthesize delegate=_delegate;

- (void)disableMatchingForPasscodeView:(id)arg1;

- (void)enableMatchingForPasscodeView:(id)arg1;

- (_Bool)hasEnrolledIdentities;

- (id)init;

- (_Bool)isMatchingEnabled;

- (void)noteScreenDidTurnOff;

- (void)noteScreenWillTurnOff;

- (void)noteScreenWillTurnOn;

- (void)removeObserver:(id)arg1;

- (void)setLockScreenTopmost:(_Bool)arg1;

- (void)setMatchingDisabled:(_Bool)arg1 requester:(id)arg2;

- (id)stringForEvent:(unsigned long long)arg1;



@end

