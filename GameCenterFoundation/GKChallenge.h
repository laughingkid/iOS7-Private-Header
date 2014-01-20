/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSSecureCoding.h"



@class GKChallengeInternal, GKGame, GKPlayer, NSDate, NSOrderedSet, NSString;



@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>

{

    GKChallengeInternal *_internal;

    NSOrderedSet *_compatibleBundleIDs;

}



+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;

+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;

+ (id)challengeForInternalRepresentation:(id)arg1;

+ (void)getCountOfChallenges:(id)arg1;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;

+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id)arg3;

+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id)arg2;

+ (void)loadReceivedChallengesWithCompletionHandler:(id)arg1;

+ (id)stringForState:(long long)arg1;

+ (_Bool)supportsSecureCoding;

@property(readonly, nonatomic) NSOrderedSet *compatibleBundleIDs; // @synthesize compatibleBundleIDs=_compatibleBundleIDs;

- (void)dealloc;

- (void)decline;

@property(readonly, nonatomic) _Bool detailsLoaded;

- (void)encodeWithCoder:(id)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;

@property(readonly, nonatomic) GKGame *game; // @dynamic game;

- (_Bool)hasLoadedUIDetails;

- (unsigned long long)hash;

- (id)infoTextForIssuingPlayer:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithInternalRepresentation:(id)arg1;

@property(retain) GKChallengeInternal *internal; // @synthesize internal=_internal;

- (_Bool)isEqual:(id)arg1;

- (void)issueToPlayers:(id)arg1 message:(id)arg2;

@property(readonly, nonatomic) GKPlayer *issuingPlayer; // @dynamic issuingPlayer;

- (void)loadDetailsWithCompletionHandler:(id)arg1;

- (void)loadUIDetailsWithHandler:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;

@property(readonly, nonatomic) GKPlayer *receivingPlayer; // @dynamic receivingPlayer;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

- (id)valueForUndefinedKey:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) NSString *bundleID; // @dynamic bundleID;

@property(readonly, nonatomic) NSString *challengeID; // @dynamic challengeID;

@property(readonly, nonatomic) NSDate *completionDate; // @dynamic completionDate;

@property(readonly, nonatomic) NSDate *issueDate; // @dynamic issueDate;

@property(readonly, nonatomic) NSString *issuingPlayerID; // @dynamic issuingPlayerID;

@property(readonly, nonatomic) NSString *message; // @dynamic message;

@property(readonly, nonatomic) NSString *receivingPlayerID; // @dynamic receivingPlayerID;

@property(readonly, nonatomic) long long state; // @dynamic state;



@end

