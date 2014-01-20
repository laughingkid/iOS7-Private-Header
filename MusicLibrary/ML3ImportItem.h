/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface ML3ImportItem : NSObject

{

    int _sourceType;

    long long _persistentIdentifier;

}



- (id)allPropertyValues;

- (_Bool)canInsertIntoPurchasePlaylist;

- (id)deduplicationPredicates;

- (id)effectiveAlbumArtist;

- (id)effectiveSortAlbumArtist;

- (_Bool)hasValueForProperty:(unsigned int)arg1;

@property(nonatomic) long long persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;

- (id)sanitizedStringValueForProperty:(unsigned int)arg1;

@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;

- (id)sortAlbum;

- (id)sortAlbumArtist;

- (id)sortArtist;

- (id)sortComposer;

- (id)sortEpisodeId;

- (id)sortGenre;

- (id)sortSeries;

- (id)sortTitle;

- (id)valueForProperty:(unsigned int)arg1;



@end

