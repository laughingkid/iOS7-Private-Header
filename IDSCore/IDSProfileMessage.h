/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IDSBaseMessage.h"



#import "NSCopying.h"



@class NSData, NSString;



@interface IDSProfileMessage : IDSBaseMessage <NSCopying>

{

    NSData *_pushCert;

    struct __SecKey *_pushKey;

    struct __SecKey *_pushPublicKey;

    NSData *_pushToken;

    NSString *_authToken;

    NSString *_profileID;

}



- (id)additionalMessageHeaders;

- (id)additionalMessageHeadersForOutgoingPush;

@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;

- (long long)command;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)handleResponseDictionary:(id)arg1;

- (_Bool)hasRequiredKeys:(id *)arg1;

- (id)init;

@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;

@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;

@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;

@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;

@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;

- (long long)responseCommand;

- (_Bool)wantsBagKey;

- (_Bool)wantsBinaryPush;

- (_Bool)wantsCompressedBody;

- (_Bool)wantsHTTPHeaders;



@end

