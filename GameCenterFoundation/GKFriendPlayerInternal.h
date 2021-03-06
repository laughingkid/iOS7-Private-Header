/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKFamiliarPlayerInternal.h"


@class GKGameInternal, NSDate, NSString;



@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal

{

    NSString *_status;

    NSDate *_lastPlayedDate;

    GKGameInternal *_lastPlayedGame;

}



+ (id)secureCodedPropertyKeys;

- (void)dealloc;

- (_Bool)isFriend;

- (id)lastPlayedDate;

- (id)lastPlayedGame;

- (void)setLastPlayedDate:(id)arg1;

- (void)setLastPlayedGame:(id)arg1;

- (void)setStatus:(id)arg1;

- (id)status;



@end


