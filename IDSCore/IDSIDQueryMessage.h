/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "FTIDSMessage.h"



#import "NSCopying.h"



@class NSArray, NSString;



@interface IDSIDQueryMessage : FTIDSMessage <NSCopying>

{

    NSString *_uri;

    NSArray *_responseIdentities;

    NSArray *_responseSessionTokens;

}



- (id)additionalQueryStringParameters;

- (id)bagKey;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)dataUsageBundleIdentifier;

- (void)dealloc;

- (void)handleResponseDictionary:(id)arg1;

- (void)handleResponseHeaders:(id)arg1;

- (_Bool)hasRequiredKeys:(id *)arg1;

- (id)init;

- (id)messageBody;

- (id)requiredKeys;

@property(copy) NSArray *responseIdentities; // @synthesize responseIdentities=_responseIdentities;

@property(copy) NSArray *responseSessionTokens; // @synthesize responseSessionTokens=_responseSessionTokens;

@property(copy, setter=setURI:) NSString *uri; // @synthesize uri=_uri;

- (_Bool)wantsBodySignature;

- (_Bool)wantsHTTPGet;

- (_Bool)wantsManagedRetries;



@end


