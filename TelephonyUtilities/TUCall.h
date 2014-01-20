/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface TUCall : NSObject

{

    NSString *_displayName;

    NSString *_overrideName;

    NSString *_companyName;

    long long _displayNameBreakPoint;

    int _abUid;

    NSString *_abLabel;

    struct {

        unsigned int imageType:2;

        unsigned int abUidIsValid:1;

        unsigned int dialAssisted:1;

        unsigned int dialedFromEmergencyUI:1;

        unsigned int isEmergencyCall:1;

        unsigned int joiningConference:1;

        unsigned int leavingConference:1;

    } _phoneCallFlags;

    _Bool _provisionallyBecomingHeld;

    _Bool _provisionallyBecomingUnheld;

    _Bool _hold;

    _Bool _unhold;

}



- (int)_addressBookUid;

- (id)_displayNameWithSeparator:(id)arg1;

- (void)_handleCallerIDChange;

- (void)_handleIdentityChange;

- (void)_handleStatusChange;

- (int)abUID;

- (void)answer;

- (id)audioCategory;

- (id)audioMode;

@property(readonly) NSString *bundleIDForHostingApplication;

- (double)callDuration;

- (id)callDurationString;

- (int)callIdentifier;

- (id)callerNameFromNetwork;

- (int)causeCode;

- (id)companyName;

- (void)dealloc;

- (id)destinationID;

- (void)disconnect;

- (id)displayFirstName;

- (id)displayName;

@property(nonatomic) _Bool hold; // @synthesize hold=_hold;

- (id)init;

- (_Bool)isAlerting;

- (_Bool)isBlocked;

- (_Bool)isConferenced;

- (_Bool)isEmergencyCall;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isMuted;

@property(nonatomic) _Bool isOnHold;

- (_Bool)isOutgoing;

- (_Bool)isVoicemail;

- (id)isoCountryCode;

- (void)joinConference;

- (void)leaveConference;

- (id)localizedLabel;

- (_Bool)managesAudioInterruptions;

- (id)multiLineDisplayName;

- (_Bool)multipleAddressBookMatches;

- (_Bool)needsManualInCallSounds;

@property(nonatomic) _Bool provisionallyBecomingHeld; // @synthesize provisionallyBecomingHeld=_provisionallyBecomingHeld;

@property(nonatomic) _Bool provisionallyBecomingUnheld; // @synthesize provisionallyBecomingUnheld=_provisionallyBecomingUnheld;

- (void)resetProvisionalStatuses;

- (void)resume;

- (int)service;

- (void)setMuted:(_Bool)arg1;

- (void)setOverrideName:(id)arg1;

@property(nonatomic) _Bool unhold; // @synthesize unhold=_unhold;

- (void)setWasDialAssisted:(_Bool)arg1;

- (void)setWasDialedFromEmergencyUI:(_Bool)arg1;

- (double)startTime;

- (int)status;

- (_Bool)wasDialAssisted;

- (_Bool)wasDialedFromEmergencyUI;



@end

