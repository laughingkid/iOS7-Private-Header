/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSString;



@interface GEOSentinelTile : PBCodable <NSCopying>

{

    NSString *_resourceName;

    int _type;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;

@property(nonatomic) int type; // @synthesize type=_type;

- (void)writeTo:(id)arg1;



@end


