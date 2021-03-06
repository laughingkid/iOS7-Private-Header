/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVExternalDeviceInternal, NSArray, NSData, NSDictionary, NSString;



@interface AVExternalDevice : NSObject

{

    AVExternalDeviceInternal *_externalDevice;

}



+ (id)currentExternalDevice;

@property(readonly, nonatomic) NSArray *HIDMappings;

- (struct OpaqueFigEndpoint *)_figEndpoint;

- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;

- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;

- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;

- (void)dealloc;

@property(readonly, nonatomic) NSData *dockIcon;

- (void)finalize;

- (id)init;

- (id)initWithCurrentExternalDevice;

@property(readonly, nonatomic) NSString *modelName;

- (void)requestCarUI;

@property(readonly, nonatomic) NSArray *screenIDs;

@property(readonly, nonatomic) NSDictionary *screenInputCapabilities;

@property(readonly, nonatomic) NSData *settingsIcon;

- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;



@end


