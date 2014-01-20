/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData;



@interface GKMatchPacket : NSObject

{

    unsigned char _version;

    unsigned char _packetType;

    _Bool _valid;

    unsigned short _checksum;

    unsigned int _sequenceNumber;

    unsigned int _totalLength;

    NSData *_data;

}



@property(nonatomic) unsigned short checksum; // @synthesize checksum=_checksum;

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

- (void)dealloc;

- (id)init;

- (id)initWithMessage:(id)arg1;

- (id)message;

@property(nonatomic) unsigned char packetType; // @synthesize packetType=_packetType;

@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;

@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;

@property(nonatomic) unsigned char version; // @synthesize version=_version;



@end

