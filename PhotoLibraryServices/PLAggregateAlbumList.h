/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLAlbumContainer.h"

#import "PLAssetContainerListChangeObserver.h"



@class NSMutableOrderedSet, NSString;



@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>

{

    NSMutableOrderedSet *_allAlbums;

    NSMutableOrderedSet *_childAlbumLists;

    int _filter;

}



+ (struct NSObject *)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (void)_invalidateAllAlbums;

@property(readonly, nonatomic) NSString *_prettyDescription;

@property(readonly, nonatomic) NSString *_typeDescription;

- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;

- (int)albumListType;

- (id)albums;

@property(readonly, nonatomic) unsigned long long albumsCount;

@property(readonly, nonatomic) id albumsSortingComparator;

- (void)assetContainerListDidChange:(id)arg1;

- (_Bool)canEditAlbums;

- (_Bool)canEditContainers;

- (id)containers;

@property(readonly, nonatomic) unsigned long long containersCount;

- (id)containersRelationshipName;

- (void)dealloc;

@property(nonatomic) int filter; // @synthesize filter=_filter;

- (_Bool)hasAtLeastOneAlbum;

- (id)identifier;

- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (_Bool)isEmpty;

- (id)managedObjectContext;

- (_Bool)needsReordering;

- (id)photoLibrary;

- (void)setNeedsReordering;

@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;

- (void)updateAlbumsOrderIfNeeded;



@end


