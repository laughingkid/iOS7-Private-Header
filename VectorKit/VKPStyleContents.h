/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSMutableArray, VKPStyleProperties;



__attribute__((visibility("hidden")))

@interface VKPStyleContents : PBCodable

{

    VKPStyleProperties *_properties;

    NSMutableArray *_zooms;

}



- (void)addZooms:(id)arg1;

- (void)clearZooms;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasProperties;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) VKPStyleProperties *properties; // @synthesize properties=_properties;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSMutableArray *zooms; // @synthesize zooms=_zooms;

- (void)writeTo:(id)arg1;

- (id)zoomsAtIndex:(unsigned long long)arg1;

- (unsigned long long)zoomsCount;



@end

