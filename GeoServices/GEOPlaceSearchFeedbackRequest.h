/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying>

{

    CDStruct_612aec5b _sessionGUID;

    long long _businessID;

    double _timestamp;

    int _feedbackType;

    int _localSearchProviderID;

    int _numberOfResults;

    int _positionInResults;

    int _sequenceNumber;

    struct {

        unsigned int sessionGUID:1;

        unsigned int businessID:1;

        unsigned int timestamp:1;

        unsigned int feedbackType:1;

        unsigned int localSearchProviderID:1;

        unsigned int numberOfResults:1;

        unsigned int positionInResults:1;

        unsigned int sequenceNumber:1;

    } _has;

}



@property(nonatomic) long long businessID; // @synthesize businessID=_businessID;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;

@property(nonatomic) _Bool hasBusinessID;

@property(nonatomic) _Bool hasFeedbackType;

@property(nonatomic) _Bool hasLocalSearchProviderID;

@property(nonatomic) _Bool hasNumberOfResults;

@property(nonatomic) _Bool hasPositionInResults;

@property(nonatomic) _Bool hasSequenceNumber;

@property(nonatomic) _Bool hasSessionGUID;

@property(nonatomic) _Bool hasTimestamp;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;

@property(nonatomic) int numberOfResults; // @synthesize numberOfResults=_numberOfResults;

@property(nonatomic) int positionInResults; // @synthesize positionInResults=_positionInResults;

- (_Bool)readFrom:(id)arg1;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

@property(nonatomic) CDStruct_612aec5b sessionGUID; // @synthesize sessionGUID=_sessionGUID;

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void)writeTo:(id)arg1;



@end

