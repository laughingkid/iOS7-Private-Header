/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKInternalRepresentation.h"


@class GKScoreInternal, NSArray, NSDate, NSDictionary, NSString;



@interface GKLeaderboardInternal : GKInternalRepresentation

{

    NSString *_identifier;

    NSString *_groupIdentifier;

    NSString *_title;

    NSString *_leaderboardSetIdentifier;

    NSDate *_lastSubmittedDate;

    NSDictionary *_icons;

    unsigned int _overallRank;

    unsigned int _overallRankCount;

    unsigned short _friendRank;

    unsigned short _friendRankCount;

    unsigned int _maxRank;

    NSArray *_scores;

    GKScoreInternal *_playerScore;

}



+ (id)secureCodedPropertyKeys;

@property(retain, nonatomic) NSString *category;

- (void)dealloc;

@property(nonatomic) unsigned short friendRank; // @synthesize friendRank=_friendRank;

@property(nonatomic) unsigned short friendRankCount; // @synthesize friendRankCount=_friendRankCount;

@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;

- (unsigned long long)hash;

@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSDate *lastSubmittedDate; // @synthesize lastSubmittedDate=_lastSubmittedDate;

@property(retain, nonatomic) NSString *leaderboardSetIdentifier; // @synthesize leaderboardSetIdentifier=_leaderboardSetIdentifier;

@property(retain, nonatomic) NSString *localizedTitle;

@property(readonly, nonatomic) unsigned long long maxRange;

@property(nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;

@property(nonatomic) unsigned int overallRank; // @synthesize overallRank=_overallRank;

@property(nonatomic) unsigned int overallRankCount; // @synthesize overallRankCount=_overallRankCount;

@property(retain, nonatomic) GKScoreInternal *playerScore; // @synthesize playerScore=_playerScore;

@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;



@end


