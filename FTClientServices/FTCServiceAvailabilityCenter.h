/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface FTCServiceAvailabilityCenter : NSObject

{

    NSMutableDictionary *_availabilityHandlers;

}



+ (id)sharedInstance;

- (void)_handleServiceMonitorNotification:(id)arg1;

- (_Bool)_isValidServiceType:(long long)arg1;

- (void)_postNotificationForService:(long long)arg1 availability:(long long)arg2;

- (void)_startListeningToMonitor:(id)arg1;

- (void)_stopListeningToMonitor:(id)arg1;

- (_Bool)addListenerID:(id)arg1 forService:(long long)arg2;

- (long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2;

- (id)containerForService:(long long)arg1 create:(_Bool)arg2;

- (void)dealloc;

- (_Bool)hasListenerID:(id)arg1 forService:(long long)arg2;

- (id)init;

- (_Bool)removeListenerID:(id)arg1 forService:(long long)arg2;



@end


