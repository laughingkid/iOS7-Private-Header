/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PCInterfaceMonitorDelegate.h"

#import "PCLoggingDelegate.h"



@class NSRunLoop, NSString, PCDarwinNotificationRunLoopSource, PCPersistentTimer;



@interface PCConnectionManager : NSObject <PCLoggingDelegate, PCInterfaceMonitorDelegate>

{

    int _connectionClass;

    id <PCConnectionManagerDelegate> _delegate;

    NSString *_serviceIdentifier;

    int _prefsStyle;

    int _onlyAllowedStyle;

    _Bool _onlyAllowedStyleSet;

    long long _interfaceIdentifier;

    unsigned long long _guidancePriority;

    NSRunLoop *_delegateRunLoop;

    struct dispatch_queue_s *_delegateQueue;

    id <PCGrowthAlgorithm> _wwanGrowthAlgorithm;

    id <PCGrowthAlgorithm> _wifiGrowthAlgorithm;

    id <PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;

    PCDarwinNotificationRunLoopSource *_prefsChangedSource;

    PCPersistentTimer *_intervalTimer;

    PCPersistentTimer *_reconnectWakeTimer;

    PCPersistentTimer *_delayTimer;

    unsigned int _powerAssertionID;

    double _onTimeKeepAliveTime;

    double _lastResumeTime;

    double _lastStopTime;

    double _lastReachableTime;

    double _lastReconnectTime;

    double _lastScheduledIntervalTime;

    double _timerGuidance;

    double _keepAliveGracePeriod;

    unsigned int _reconnectIteration;

    int _timerGuidanceToken;

    int _pushIsConnectedToken;

    double _defaultPollingInterval;

    double _pollingIntervalOverride;

    _Bool _pollingIntervalOverrideSet;

    _Bool _hasStarted;

    _Bool _isRunning;

    _Bool _inCallback;

    _Bool _isInReconnectMode;

    _Bool _reconnectWithKeepAliveDelay;

    _Bool _forceManualWhenRoaming;

    _Bool _enableNonCellularConnections;

    _Bool _isReachable;

    _Bool _disableEarlyFire;

}



+ (_Bool)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;

+ (id)_keepAliveCachePath;

+ (Class)growthAlgorithmClass;

+ (id)intervalCacheDictionaries;

- (void)_adjustInterfaceAssertions;

- (void)_adjustPollTimerIfNecessary;

- (void)_callDelegateWithEvent:(id)arg1;

- (void)_calloutWithEvent:(int)arg1;

- (void)_clearTimers;

- (void)_clearTimersReleasingPowerAssertion:(_Bool)arg1;

- (id)_currentGrowthAlgorithm;

- (void)_delayTimerFired;

- (id)_getCachedWWANKeepAliveInterval;

- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(struct dispatch_queue_s *)arg5 serviceIdentifier:(id)arg6;

- (void)_intervalTimerFired;

- (_Bool)_isPushConnected;

- (void)_loadPreferencesGeneratingEvent:(_Bool)arg1;

- (void)_preferencesChanged;

- (void)_releasePowerAssertion;

- (void)_resolveStateWithAction:(int)arg1;

- (void)_saveWWANKeepAliveInterval;

- (void)_setTimerGuidance:(double)arg1;

- (void)_setupKeepAliveForReconnect;

- (void)_setupTimerForPollForAdjustment:(_Bool)arg1;

- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;

- (id)_stringForAction:(int)arg1;

- (id)_stringForEvent:(int)arg1;

- (id)_stringForStyle:(int)arg1;

- (void)_takePowerAssertionWithTimeout:(double)arg1;

- (void)_validateActionForCurrentStyle:(int)arg1;

- (void)cancelPollingIntervalOverride;

@property(readonly, nonatomic) unsigned long long countOfGrowthActions;

@property(readonly, nonatomic) double currentKeepAliveInterval;

- (int)currentStyle;

- (void)dealloc;

@property(nonatomic) id <PCConnectionManagerDelegate> delegate;

@property(nonatomic) _Bool disableEarlyFire;

- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(struct dispatch_queue_s *)arg3 serviceIdentifier:(id)arg4;

- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;

- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5;

- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;

- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;

- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;

- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;

@property(readonly, nonatomic) _Bool isRunning;

@property(nonatomic) double keepAliveGracePeriod; // @synthesize keepAliveGracePeriod=_keepAliveGracePeriod;

- (void)log:(id)arg1;

- (void)logAtLevel:(int)arg1 format:(id)arg2;

- (void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(struct __va_list_tag [1])arg3;

@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_serviceIdentifier;

@property double maximumKeepAliveInterval;

@property(nonatomic) double minimumKeepAliveInterval;

@property(readonly, nonatomic) double pollingInterval;

- (void)resumeManagerWithAction:(int)arg1;

- (void)setEnableNonCellularConnections:(_Bool)arg1;

- (void)setOnlyAllowedStyle:(int)arg1;

- (void)setPollingIntervalOverride:(double)arg1;

- (_Bool)shouldClientScheduleReconnectDueToFailure;

- (void)startManager;

- (void)stopAndResetManager;

- (void)stopManager;



@end

