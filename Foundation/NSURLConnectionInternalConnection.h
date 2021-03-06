/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSURLConnectionInternal.h"


#import "NSURLConnectionRequired.h"



@class NSURLAuthenticationChallenge;



__attribute__((visibility("hidden")))

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired>

{

    int _cfConnLock;

    struct _CFURLConnection *_cfConn;

    struct _CFURLAuthChallenge *_currCFChallenge;

    NSURLAuthenticationChallenge *_currNSChallenge;

    struct __CFString *_fileName;

    _Bool _shouldSkipCancelOnRelease;

    long long _totalBytes;

    long long _expectedTotalBytes;

}



- (struct _CFURLConnection *)_CFURLConnection;

- (struct _CFURLConnection *)_atomic_CFURLConnection;

- (void)_invalidate;

- (void)_resumeLoading;

- (struct _CFURLConnection *)_retainCFURLConnection;

- (void)_setDelegateQueue:(id)arg1;

- (void)_setShouldSkipCancelOnRelease:(_Bool)arg1;

- (void)_suspendLoading;

- (void)cancel;

- (void)cancelAuthenticationChallenge:(id)arg1;

- (void)cleanupChallenges;

- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;

- (void)dealloc;

- (id)initWithInfo:(const struct InternalInit *)arg1;

- (void)invokeForDelegate:(id)arg1;

- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

- (void)sendCFChallenge:(struct _CFURLAuthChallenge *)arg1 toSelector:(SEL)arg2;

- (void)start;

- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;



@end


