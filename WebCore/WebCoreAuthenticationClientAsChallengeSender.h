/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLAuthenticationChallengeSender.h"



__attribute__((visibility("hidden")))

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender>

{

    struct AuthenticationClient *m_client;

    struct _CFURLAuthChallenge *m_cfChallenge;

}



- (void)cancelAuthenticationChallenge:(id)arg1;

- (struct _CFURLAuthChallenge *)cfChallenge;

- (struct AuthenticationClient *)client;

- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

- (void)detachClient;

- (id)initWithAuthenticationClient:(struct AuthenticationClient *)arg1;

- (void)setCFChallenge:(struct _CFURLAuthChallenge *)arg1;

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;



@end

