/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GKSessionVoiceChatDelegate.h"

#import "GKVoiceChatClient.h"

#import "InterfaceListenerDelegate.h"

#import "VideoConferenceSpeakingDelegate.h"



@class GKInterfaceListener, GKRWLock, GKSessionInternal, GKVoiceChatServiceFocus, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, VoiceChatSessionRoster;



__attribute__((visibility("hidden")))

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, InterfaceListenerDelegate>

{

    NSString *_sessionName;

    unsigned int _conferenceID;

    _Bool activeSession;

    float sessionVolume;

    _Bool focusCallbacks;

    GKSessionInternal *_gkSession;

    NSString *_peerID;

    NSMutableArray *_connectedPeers;

    NSMutableArray *_focusPausedPeers;

    NSMutableArray *_connectedVoicePeers;

    NSMutableArray *_connectedFocusPeers;

    NSMutableArray *_mutedPeers;

    NSMutableArray *_myPausedList;

    NSMutableDictionary *_peerChannelQuality;

    _Bool needsRecalculateGoodChannels;

    int goodChannels;

    unsigned int talkingPeersLimit;

    _Bool isUsingSuppression;

    unsigned int _sessionState;

    GKRWLock *_rwLock;

    GKVoiceChatServiceFocus *_vcService;

    VoiceChatSessionRoster *_roster;

    NSObject<OS_dispatch_queue> *_sendQueue;

    id <GKVoiceChatSessionDelegate> delegate;

    unsigned int congestionState;

    id _publicWrapper;

    GKInterfaceListener *_wifiListener;

    _Bool _currentWifiState;

}



+ (void)brokenHash:(id)arg1 response:(char *)arg2;

- (void)addPeerToFocusPausedList:(id)arg1;

- (int)calculateChannelQualities;

- (void)calculateConferenceID;

- (void)cleanup;

- (void)cleanupProc:(id)arg1;

@property(readonly, nonatomic) unsigned int conferenceID;

- (void)dealloc;

- (id)decodePeerID:(id)arg1;

@property id <GKVoiceChatSessionDelegate> delegate;

- (void)didStartSpeaking:(id)arg1;

- (void)didStopSpeaking:(id)arg1;

- (id)encodePeerID:(id)arg1;

- (_Bool)getMuteStateForPeer:(id)arg1;

- (int)goodChannels;

- (void)handlePeerDisconnected:(id)arg1;

- (void)informClientVoiceChatConnecting:(id)arg1;

- (void)informClientVoiceChatCouldNotConnect:(id)arg1;

- (void)informClientVoiceChatDidStart:(id)arg1;

- (void)informClientVoiceChatDidStop:(id)arg1;

- (void)informClientVoiceChatFocusChange:(id)arg1;

- (void)informClientVoiceChatSilent:(id)arg1;

- (void)informClientVoiceChatSpeaking:(id)arg1;

- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;

- (void)interfaceStateDidChangeWithWifiUp:(_Bool)arg1 withCellUp:(_Bool)arg2;

@property(getter=isActiveSession) _Bool activeSession;

- (_Bool)isEqual:(id)arg1;

@property _Bool isUsingSuppression;

- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;

- (void)parseConnectedPeers:(id)arg1;

- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;

- (id)participantID;

- (void)pauseAll;

- (unsigned int)peerCount;

@property(readonly) NSArray *peerList;

- (void)pruneBadLinks;

- (void)removeFromFocusPausedList:(id)arg1;

- (void)sendConnectedPeers;

- (void)sendMutedPeers;

- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;

- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;

- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;

@property(readonly, nonatomic) NSString *sessionName;

@property float sessionVolume;

- (void)setMute:(_Bool)arg1 forPeer:(id)arg2;

@property unsigned int talkingPeersLimit;

- (void)startSession;

- (void)startSessionInternal;

- (void)stopSession;

- (void)stopSessionInternal;

- (void)unPauseAll;

- (void)updatedConnectedPeers:(id)arg1;

- (void)updatedFocusID:(unsigned int)arg1;

- (void)updatedFocusPeers:(id)arg1;

- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;

- (void)updatedSubscribedBeaconList:(id)arg1;

- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;

- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned int)arg3;

- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;

- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;

- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;



@end


