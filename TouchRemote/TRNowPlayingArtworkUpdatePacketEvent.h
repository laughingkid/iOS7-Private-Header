/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TRPacketEvent.h"


@class NSData, NSDictionary, NSString;



@interface TRNowPlayingArtworkUpdatePacketEvent : TRPacketEvent

{

    NSData *_artworkData;

    NSString *_artworkMIMEType;

    NSDictionary *_nowPlayingInfo;

}



+ (unsigned int)_packetEventType;

- (void).cxx_destruct;

- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;

@property(readonly, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;

@property(readonly, nonatomic) NSString *artworkMIMEType; // @synthesize artworkMIMEType=_artworkMIMEType;

- (id)description;

- (id)initArtworkData:(id)arg1 artworkMIMEType:(id)arg2 nowPlayingInfo:(id)arg3;

@property(readonly, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;



@end


