/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBasicCollectionViewDataSource.h"


@class NSMutableArray;



@interface GKNearbyPlayersDataSource : GKBasicCollectionViewDataSource

{

    _Bool _browsingForNearbyPlayers;

    id <GKNearbyBrowserDelegate> _nearbyDelegate;

    NSMutableArray *_nearbyPlayers;

}



@property(nonatomic) _Bool browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;

- (void)dealloc;

- (void)didUpdateModel;

- (id)init;

@property(nonatomic) id <GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;

@property(retain, nonatomic) NSMutableArray *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;

- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;

- (void)removeAllPlayers;

- (id)sectionTitle;

- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;



@end


