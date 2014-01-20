/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSData, NSString;



@interface MKLocalSearchRequest : NSObject <NSCopying>

{

    NSString *_naturalLanguageQuery;

    _Bool _hasRegion;

    CDStruct_feeb6407 _region;

    NSData *_suggestionMetadata;

    NSData *_suggestionEntryMetadata;

}



+ (id)searchRequestWithCompletion:(id)arg1;

- (id)_dictionaryRepresentation;

@property(readonly, nonatomic) _Bool _hasRegion; // @synthesize _hasRegion;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(copy, nonatomic) NSString *naturalLanguageQuery; // @synthesize naturalLanguageQuery=_naturalLanguageQuery;

@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;

@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;

@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;



@end

