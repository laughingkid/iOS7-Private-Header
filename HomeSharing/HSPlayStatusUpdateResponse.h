/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "HSResponse.h"


@class NSDictionary;



@interface HSPlayStatusUpdateResponse : HSResponse

{

    unsigned int _nextRevisionID;

    unsigned long long _nowPlayingContainerID;

    unsigned long long _nowPlayingContainerItemID;

    unsigned long long _nowPlayingDatabaseID;

    unsigned long long _nowPlayingItemID;

    NSDictionary *_playStatusInformation;

}



- (void)dealloc;

- (id)description;

@property(nonatomic) unsigned int nextRevisionID; // @synthesize nextRevisionID=_nextRevisionID;

@property(nonatomic) unsigned long long nowPlayingContainerID; // @synthesize nowPlayingContainerID=_nowPlayingContainerID;

@property(nonatomic) unsigned long long nowPlayingContainerItemID; // @synthesize nowPlayingContainerItemID=_nowPlayingContainerItemID;

@property(nonatomic) unsigned long long nowPlayingDatabaseID; // @synthesize nowPlayingDatabaseID=_nowPlayingDatabaseID;

@property(nonatomic) unsigned long long nowPlayingItemID; // @synthesize nowPlayingItemID=_nowPlayingItemID;

@property(copy, nonatomic) NSDictionary *playStatusInformation; // @synthesize playStatusInformation=_playStatusInformation;



@end

