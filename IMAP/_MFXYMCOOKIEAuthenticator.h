/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFSASLAuthenticator.h"



@class YahooAccount;



@interface _MFXYMCOOKIEAuthenticator : MFSASLAuthenticator

{

    YahooAccount *_yahooAccount;

    _Bool _smtp;

}



- (_Bool)base64EncodeResponseData;

- (void)dealloc;

- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;

@property(readonly, nonatomic, getter=isSMTP) _Bool smtp; // @synthesize smtp=_smtp;

- (id)responseForServerData:(id)arg1;

- (id)saslName;

- (void)setAuthenticationState:(int)arg1;

@property(retain, nonatomic) YahooAccount *yahooAccount; // @synthesize yahooAccount=_yahooAccount;



@end


